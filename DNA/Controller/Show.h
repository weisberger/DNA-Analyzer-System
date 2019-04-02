//
// Created by wiseberg on 1/2/19.
//

#ifndef UNTITLED3_SHOW_H
#define UNTITLED3_SHOW_H

#include "Icommand.h"

class Show: public Icommand
{
public:

    virtual void action(DnaData &dnaData, char ** args);
    //    virtual void help(std::string help) = 0;

    void setMessage(std::string message);
    virtual std::string getMessage();

};

inline std::string Show::getMessage()
{
    return m_message;
}

inline void Show::setMessage(std::string message)
{
    m_message = message;
}


#endif //UNTITLED3_SHOW_H
