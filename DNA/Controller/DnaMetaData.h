//
// Created by wiseberg on 12/27/18.
//

#ifndef UNTITLED3_DNAMETADATA_H
#define UNTITLED3_DNAMETADATA_H

#include <string>
#include "dna.h"
#include "SharedPointer.h"

class DnaMetaData
{

public:

    DnaMetaData(size_t  id, SharePointer<IDna> dnaSeqence, std::string name);
    size_t getMId() const;
  //  DnaSequence::Nucleotide* getDnaSeqence();
    SharePointer<IDna> getMDnaPointer();
//    friend  std::ostream& operator<<(std::ostream& out, const DnaMetaData& dnaMetaData);
    std::string getName();
    void changeStatus();
    int getStatus();
    void replaceName(std::string);
    size_t  getCountId();
    void setMDnaPointer(SharePointer<IDna>);
    std::string getStringSeq();



private:

    size_t m_id;
    std::string m_name;
    SharePointer<IDna> m_dnaPointer;
    int m_status;
};


inline size_t DnaMetaData::getMId() const
{
    return m_id;
}

//inline DnaSequence::Nucleotide* DnaMetaData::getDnaSeqence()
//{
//    //return m_dnaPointer->getM_DNA_sequence();
//
//}

inline SharePointer<IDna> DnaMetaData::getMDnaPointer()
{
    return m_dnaPointer;
}


inline std::string DnaMetaData::getName()
{
    return m_name;
}

inline void DnaMetaData::changeStatus()
{
    m_status = 1 - m_status;
}

inline void DnaMetaData::setMDnaPointer(SharePointer<IDna> dnaPointer)
{
    m_dnaPointer = dnaPointer;
}

inline int DnaMetaData::getStatus()
{
    return m_status;
}

inline void DnaMetaData::replaceName(std::string name)
{
    m_name = name;
}
#endif //UNTITLED3_DNAMETADATA_H
