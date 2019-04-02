//
// Created by wiseberg on 1/3/19.
//

#include "List.h"

void List::action(DnaData &dnaData, char **args)
{
    setMessage(dnaData.list());
}