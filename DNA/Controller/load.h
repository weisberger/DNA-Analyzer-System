//
// Created by wiseberg on 1/2/19.
//

#ifndef UNTITLED3_LOAD_H
#define UNTITLED3_LOAD_H

#include "Icommand.h"

class Load:public Icommand
{
public:

     void action(DnaData &dnaData, char ** args);
    //    virtual void help(std::string help) = 0;
     std::string getMessage();
     void setMessage(std::string message);

};

inline void Load::setMessage(std::string message)
{
    m_message = message;
}

inline std::string Load::getMessage()
{
    return m_message;
}

#endif //UNTITLED3_LOAD_H
