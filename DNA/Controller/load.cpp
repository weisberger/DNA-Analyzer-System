//
// Created by wiseberg on 1/2/19.
//

#include <sstream>
#include "load.h"
#include "DnaRead.h"

void Load::action(DnaData &dnaData, char **args)
{

    std::stringstream ss;
    DnaRead dnaRead(args[0]);
    std::string seqence = dnaRead.read();
    char * name;

    if (*(args + 1) == NULL)
    {
        name = args[0];
    }

    else
    {
        name = args[1];
    }

    dnaData.New(seqence, name);
    ss << "[" << dnaData.getMDnaByNames()->find(name)->second.getMId() << "] " << dnaData.getMDnaByNames()->find(name)->first << ": ";
    size_t  lengthSeqence = seqence.length();

    if (lengthSeqence <= 40)
    {
//      ss << dnaData.getMDnaByNames()->find(name)->second << "\n";
    }

    else
    {

        for (int i = 0; i < 32; ++i)
        {
            ss << seqence[i];
        }

        ss << "..." << seqence[lengthSeqence - 3] << seqence[lengthSeqence - 2] << seqence[lengthSeqence - 1] << "\n";

    }

    setMessage(ss.str());
}


