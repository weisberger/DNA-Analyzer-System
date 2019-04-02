//
// Created by wiseberg on 12/30/18.
//

#ifndef UNTITLED3_ICOMMAND_H
#define UNTITLED3_ICOMMAND_H

#include <string>
#include <vector>
#include "../Model/DnaData.h"
class Icommand
{

public:

    virtual void action(DnaData &dnaData, char ** args) = 0;
    //    virtual void help(std::string help) = 0;
    virtual std::string getMessage() = 0;
protected:

    std::string m_message;


};
#endif //UNTITLED3_ICOMMAND_H
