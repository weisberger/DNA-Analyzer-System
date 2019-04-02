//
// Created by wiseberg on 12/27/18.
//

#include "Controller.h"

void Controller::run()
{

    char ** commandArgument = new char*();

    while (true)
    {

        m_parser.parser(m_commandLine.input(), commandArgument);
        Icommand *command = m_factoryCommand.getMapCommands().find(commandArgument[0])->second;
        command->action(m_dnaData,(commandArgument + 1));
        m_commandLine.message(command->getMessage());

    }



}
