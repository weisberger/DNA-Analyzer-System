//
// Created by wiseberg on 12/30/18.
//

#ifndef UNTITLED3_NEW_H
#define UNTITLED3_NEW_H

#include "Icommand.h"

class New: public Icommand
{
public:

    virtual void action(DnaData &dnaData, char ** args);
    //    virtual void help(std::string help) = 0;
    void setMessage(std::string message);
    std::string getMessage();

private:



};

inline std::string New::getMessage()
{
    return m_message;
}
inline void New::setMessage(std::string message)
{
    m_message = message;
}
#endif //UNTITLED3_NEW_H
