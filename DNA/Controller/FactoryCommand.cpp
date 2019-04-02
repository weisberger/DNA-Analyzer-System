//
// Created by wiseberg on 12/30/18.
//

#include "FactoryCommand.h"
#include "New.h"
#include "Dup.h"
#include "Show.h"
#include "load.h"
#include "Quit.h"
#include "List.h"
#include "Pair.h"

FactoryCommand::FactoryCommand()
{

    m_mapCommands.insert( std::pair<std::string, Icommand *>("new", new New));
    m_mapCommands.insert( std::pair<std::string, Icommand *>("list", new List));
    m_mapCommands.insert( std::pair<std::string, Icommand *>("pair", new Pair));

   //m_mapCommands.insert ( std::pair<std::string, Icommand>('dup', new Dup));
//   m_mapCommands.insert ( std::pair<std::string, Icommand>('slice', new Slice));
//   m_mapCommands.insert ( std::pair<std::string, Icommand>('replace', new Replace));
//   m_mapCommands.insert ( std::pair<std::string, Icommand>('save', new Save));
     m_mapCommands.insert (std::pair<std::string, Icommand *>("load", new Load));
//   m_mapCommands.insert ( std::pair<std::string, Icommand>('len', new Len));
//   m_mapCommands.insert ( std::pair<std::string, Icommand>('find', new Find));
//   m_mapCommands.insert ( std::pair<std::string, Icommand>('help', new Help));
//   m_mapCommands.insert ( std::pair<std::string, Icommand>('list', new List));
     m_mapCommands.insert ( std::pair<std::string, Icommand*>("show", new Show));
//   m_mapCommands.insert ( std::pair<std::string, Icommand>('quit', new Quit));
     m_mapCommands.insert ( std::pair<std::string, Icommand*>("quit", new Quit));

}