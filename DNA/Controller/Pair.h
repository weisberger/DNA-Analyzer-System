//
// Created by wiseberg on 1/5/19.
//

#ifndef UNTITLED3_PAIR_H
#define UNTITLED3_PAIR_H

#include "Icommand.h"

class Pair:public Icommand
{
public:

    void action(DnaData &dnaData, char ** args);
    //    virtual void help(std::string help) = 0;
    std::string getMessage();
    void setMessage(std::string message);

};

inline void Pair::setMessage(std::string message)
{
    m_message = message;
}

inline std::string Pair::getMessage()
{
    return m_message;
}

#endif //UNTITLED3_PAIR_H
