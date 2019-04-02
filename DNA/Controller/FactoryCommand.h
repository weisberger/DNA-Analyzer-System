//
// Created by wiseberg on 12/30/18.
//

#ifndef UNTITLED3_FACTORYCOMMAND_H
#define UNTITLED3_FACTORYCOMMAND_H

#include "iostream"
#include <map>
#include "Icommand.h"

class FactoryCommand
{

public:

    FactoryCommand();
    std::map<std::string, Icommand *> getMapCommands();

private:

    std::map<std::string, Icommand *> m_mapCommands;

};


inline std::map<std::string, Icommand *> FactoryCommand::getMapCommands()
{
    return m_mapCommands;
}

#endif //UNTITLED3_FACTORYCOMMAND_H
