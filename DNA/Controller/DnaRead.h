

#ifndef UNTITLED3_DNAREAD_H
#define UNTITLED3_DNAREAD_H

#endif /*//UNTITLED3_DNAREAD_H*/
#include <fstream>
#include "dna.h"

class DnaRead
{

public:

    DnaRead(char * file_name);
    ~DnaRead();
//    DnaSequence read();
    std::string read();


private:

    std::ifstream m_read;


};