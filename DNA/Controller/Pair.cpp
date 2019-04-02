//
// Created by wiseberg on 1/5/19.
//

#include <sstream>
#include "Pair.h"
#include "PairDecorator.h"
void Pair::action(DnaData &dnaData, char **args)
{

    std::string subId = args[0];
    size_t id;
    subId = subId.substr(1);
    std::stringstream ss(subId);
    ss >> id;

    DnaMetaData & dnaMetaData = dnaData.getDnaById(id);
    SharePointer<PairDecorator> pairDecoratr(new PairDecorator(dnaMetaData.getMDnaPointer()));
    dnaMetaData.setMDnaPointer(pairDecoratr);
    std::size_t lengthOfDna =pairDecoratr->getLength();

    std::string name;

    std::string o = args[1];
    std::string e = args[2];

    if (std::string(args[1]) == ":")
    {
        if (std::string(args[2]) == "@@")
        {
            name = dnaData.newName(dnaMetaData.getName());
        }
        else
        {

            std::string subName = args[2];
            subName = subName.substr(2);
            if (dnaData.getMDnaByNames()->find(subName) != dnaData.getMDnaByNames()->end())//if the name is allready
            {
                name = dnaData.newName(dnaMetaData.getName());
            }
            else
            {
                name = subName;
            }
        }

        dnaData.addDnaToData(pairDecoratr, name);
    }
    else
    {
      name = dnaMetaData.getName();
    }


    std::stringstream message;
    message << "[" << id << "] " << name << " : ";

    for (std::size_t i = 0; i < lengthOfDna; ++i)
    {
        message << (*pairDecoratr)[i];
    }

    setMessage(message.str());

}