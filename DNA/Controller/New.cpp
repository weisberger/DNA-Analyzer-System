//
// Created by wiseberg on 12/30/18.
//

#include <sstream>
#include "New.h"

void New::action(DnaData &dnaData, char **args)
{
    std::stringstream sstm;
    std::stringstream ss;

    if (args[1] == NULL)
     {

        sstm << "seq" << dnaData.getId();
        std::string s = sstm.str();
        dnaData.New(args[0], sstm.str());
        ss << "[" << dnaData.getMDnaByNames()->find(sstm.str())->second.getMId() << "] " << dnaData.getMDnaByNames()->find(sstm.str())->first << ": " ;
//        << dnaData.getMDnaByNames()->find(sstm.str()) << "\n";

     }

    else
     {

        dnaData.New(args[0], args[1]);
        std::string sg = dnaData.getDnaByName(args[1]).getStringSeq();
//         ss << dnaData.getDnaByName(args[1]).getMDnaPointer();
         ss << "[" << dnaData.getDnaByName(args[1]).getMId() << "] " << dnaData.getDnaByName(args[1]).getName() << ": " << dnaData.getDnaByName(args[1]).getStringSeq() << "\n";

         //ss << "[" << dnaData.getMDnaByNames()->find(args[1])->second->getMId() << "] " << dnaData.getMDnaByNames()->find(args[1])->first << ": " << dnaData.getMDnaByNames()->find(args[1])->second << "\n";

     }

    setMessage(ss.str());

}