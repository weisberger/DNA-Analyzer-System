//
// Created by wiseberg on 12/25/18.
//

#include "DnaData.h"
#include "../Controller/DnaMetaData.h"
#include "../Controller/Icommand.h"
#include <sstream>
#include <cstdlib>

std::string DnaData::getNameById(size_t id)
{

    return getMDnaById()->find(id)->second.getName();

}

void DnaData::New(std::string dnaSeqence, std::string name)
{

//    DnaMetaData dna(m_id, dnaSeqence, name);
//
//    dna = new DnaMetaData(m_id, dnaSeqence, name);
//    m_dnaByNames.insert(std::pair<std::string, DnaMetaData>(name, dna));
//    m_dnaById.insert(std::pair<size_t , DnaMetaData>(dna->getMId(), dna));
//    ++m_id;
      DnaSequence * dna = new DnaSequence(dnaSeqence);
      SharePointer<DnaSequence> d(dna);
      m_dnaByNames.insert(std::pair<std::string, DnaMetaData>(name, DnaMetaData(m_id, d, name)));
      m_dnaById.insert(std::pair<std::size_t , DnaMetaData>(m_id, DnaMetaData(m_id, d, name)));
      ++m_id;


}

std::string DnaData::show(std::string idDnaSeqence, std::string numOfCharsToPrint)
{

    size_t countToPrint = atoi(numOfCharsToPrint.c_str());
    size_t id = atoi(idDnaSeqence.c_str());
    std::stringstream message;

    message << "[" << getDnaById(id).getMId() << "] " << getDnaById(id).getName() << " ";

    for (size_t i = 0; i < countToPrint; ++i)
    {
        message << getDnaById(id).getMDnaPointer()->operator[](i);
    }
    message << "\n";

    return message.str();

}

std::string DnaData::list()
{
    std::map<size_t, DnaMetaData>::iterator it = m_dnaById.begin();
    std::stringstream ss;

    while (it != m_dnaById.end())
    {
        ss << "[" << it->first << "[" << " ";
        ss << it->second.getName() << ":" << " ";
       // ss << getStringDna()
        if (it->second.getMDnaPointer()->getLength() < 44)
        {

            for (int i = 0; i < it->second.getMDnaPointer()->getLength(); ++i)
            {
                ss << it->second.getMDnaPointer()->operator[](i);
            }

        }
        else
        {
            for (int i = 0; i < 41; ++i)
            {
                ss << it->second.getMDnaPointer()->operator[](i);
            }

            ss << "..." << it->second.getMDnaPointer()->operator[](it->second.getMDnaPointer()->getLength() - 3)
               << it->second.getMDnaPointer()->operator[](it->second.getMDnaPointer()->getLength() - 2)
               << it->second.getMDnaPointer()->operator[](it->second.getMDnaPointer()->getLength() - 1);

        }

        ss << "\n";
        ++it;
    }

    return ss.str();
}

DnaMetaData & DnaData::getDnaById(std::size_t id)
{
    return m_dnaById.find(id)->second;
}

DnaMetaData & DnaData::getDnaByName(std::string name)
{
    return m_dnaByNames.find(name)->second;
}

std::string DnaData::newName(std::string oldName)
{


    std::size_t index = 1;
    std::ostringstream ss;
    ss << oldName << "_p" <<index;
    while (getMDnaByNames()->find(ss.str()) != getMDnaByNames()->end())
    {

        ++index;
        ss.clear();
        ss << oldName << "_p" <<index;
    }
    return ss.str();
}

void DnaData::addDnaToData(SharePointer<IDna> dna, std::string name)
{
    m_dnaByNames.insert(std::pair<std::string, DnaMetaData>(name, DnaMetaData(m_id, dna, name)));
    m_dnaById.insert(std::pair<std::size_t , DnaMetaData>(m_id, DnaMetaData(m_id, dna, name)));
    ++m_id;
}

