

#ifndef UNTITLED3_DNAWRITER_H
#define UNTITLED3_DNAWRITER_H

#endif /*//UNTITLED3_DNAWRITER_H*/

#include <fstream>
#include "dna.h"
class DnaWriter
{

public:

     DnaWriter(char * file_name);
    ~DnaWriter();
    void write(DnaSequence & dnaSequence);

private:

    std::ofstream m_write;


};