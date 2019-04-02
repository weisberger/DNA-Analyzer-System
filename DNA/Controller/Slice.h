//
// Created by wiseberg on 1/6/19.
//

#ifndef UNTITLED3_SLICE_H
#define UNTITLED3_SLICE_H

#include "Icommand.h"

class Slice: public Icommand
{

public:

    virtual void action(DnaData &dnaData, char ** args) = 0;
    //    virtual void help(std::string help) = 0;
    virtual std::string getMessage() = 0;

protected:

    std::string m_message;

};
#endif //UNTITLED3_SLICE_H
