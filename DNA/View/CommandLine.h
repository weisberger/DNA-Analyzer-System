//
// Created by wiseberg on 12/27/18.
//

#ifndef UNTITLED3_COMMANDLINE_H
#define UNTITLED3_COMMANDLINE_H

#include <iostream>
#include <cstdio>

class CommandLine
{

public:

    char * input();
    void message(std::string message);

private:

    char m_input[100];

};

inline char * CommandLine::input()
{
    std::cout << "<<<<<";
    fgets(m_input, 100, stdin);
    return m_input;

}

inline void CommandLine::message(std::string message)
{
    std::cout << message;
}
#endif //UNTITLED3_COMMANDLINE_H
