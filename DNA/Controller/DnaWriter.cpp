#include "DnaWriter.h"


DnaWriter::DnaWriter(char * file_name)
{
    m_write.open(file_name);

    if(!file_name)
    {
        throw "ERROR the file is not exist :(";
    }
}

DnaWriter::~DnaWriter()
{
    m_write.close();
}

void DnaWriter::write(DnaSequence & dnaSequence)
{
    m_write<<dnaSequence;

}
