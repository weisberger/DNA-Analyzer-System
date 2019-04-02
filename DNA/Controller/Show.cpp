//
// Created by wiseberg on 1/2/19.
//

#include "Show.h"
void Show::action(DnaData &dnaData, char **args)
{

    if (*(args + 1) == NULL)
    {
        setMessage(dnaData.show(args[0]));
    }
    else
    {
        setMessage(dnaData.show(args[0], args[1]));
    }
}