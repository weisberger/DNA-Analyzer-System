
#include "DnaRead.h"
DnaRead::DnaRead(char * fileName)
{
    m_read.open(fileName);

    if(!m_read.is_open())
    {
        throw std::runtime_error("Error in opening input file\n");
    }
}

DnaRead::~DnaRead()
{
    m_read.close();
}

//DnaSequence DnaRead::read()
std::string DnaRead::read()
{
    m_read.seekg (0, std::ios::end);
    int length = m_read.tellg();
    m_read.seekg(0);
    char * output = new char[length+1];

    while (!m_read.eof())
    {
        m_read >> output;
    }
//
//    DnaSequence dnaSequence(output);
//    delete[] output;
//    return dnaSequence;
    return output;
}