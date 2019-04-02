//
// Created by wiseberg on 1/3/19.
//

#ifndef UNTITLED3_LIST_H
#define UNTITLED3_LIST_H

#include "Icommand.h"

class List:public Icommand
{
public:

    void action(DnaData &dnaData, char ** args);
    //    virtual void help(std::string help) = 0;
    std::string getMessage();
    void setMessage(std::string message);

};

inline void List::setMessage(std::string message)
{
    m_message = message;
}

inline std::string List::getMessage()
{
    return m_message;
}

#endif //UNTITLED3_LIST_H
