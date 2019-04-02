//
// Created by wiseberg on 1/3/19.
//

#include <cstdlib>
#include "Quit.h"

void Quit::action(DnaData &dnaData, char **args)
{

    std::cout <<"Goodbye!\n";
    exit(0);

}