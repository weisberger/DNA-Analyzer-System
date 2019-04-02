//
// Created by wiseberg on 12/29/18.
//

#include <cstdio>
#include <cstring>
#include <iostream>
#include "Parser.h"

void Parser::parser(char * command, char ** arguments)
{
    char delim[]={'\t','\n',' '};
    char *token = std::strtok(command, " ");
    size_t index = 0;

    while (token != NULL)
    {
        arguments[index++] = token;
        token = std::strtok(NULL, delim);
    }
    arguments[index] = NULL;

    return;
}