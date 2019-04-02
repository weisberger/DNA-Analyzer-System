//
// Created by wiseberg on 12/27/18.
//

#ifndef UNTITLED3_CONTROLLER_H
#define UNTITLED3_CONTROLLER_H

#include "FactoryCommand.h"
#include "Parser.h"
#include "../View/CommandLine.h"


class Controller
{

public:

    void run();
    void exit();

private:


    FactoryCommand m_factoryCommand;
    DnaData m_dnaData;
    Parser m_parser;
    CommandLine m_commandLine;
};
#endif //UNTITLED3_CONTROLLER_H
