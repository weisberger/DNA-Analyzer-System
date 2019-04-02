#ifndef UNTITLED3_DNA_H
#define UNTITLED3_DNA_H

#include <iostream>
#include "IDna.h"
#include "Necleotid.h"

class DnaSequence : public IDna
{
public:

    DnaSequence(){};
    explicit DnaSequence(const std::string & DNA_sequence);
    explicit DnaSequence(const char * DNA_sequence);

    DnaSequence(const DnaSequence & other);
    ~DnaSequence();

    DnaSequence&operator=(const DnaSequence & other);
    DnaSequence&operator=( const std::string & other);
    DnaSequence&operator=(const char * other);

    size_t get_size() const;
    Necleotide * getM_DNA_sequence();
    friend std::ostream& operator<<(std::ostream& os, DnaSequence& dnaSeqence);
    bool operator==(const DnaSequence& dnaSeqence1);
    bool operator!=(const DnaSequence& dnaSeqence1);
    Necleotide & operator[](std::size_t i) const;
    virtual std::size_t getLength() const;
//    Necleotide& operator[](size_t i) const ;
    DnaSequence  get_slice(size_t from, size_t to);
    DnaSequence Pairing(DnaSequence & dnaSequence) const;

private:
    DnaSequence(const DnaSequence& other, size_t from, size_t to);
    DnaSequence(Necleotide &, size_t size);
    void set_m_DNA_sequence(const char * DNA_sequence);


    Necleotide * m_DNA_sequence;
    size_t m_size;


};

inline bool DnaSequence::operator==(const DnaSequence & other)
{
    if(m_size != other.m_size)
    {
        return false;
    }

    for(size_t i = 0; i <m_size; ++i)
    {
        if(m_DNA_sequence[i] != other.m_DNA_sequence[i])
        {
            return false;
        }
    }
    return true;
}

inline bool DnaSequence::operator!=(const DnaSequence & other)
{
    return !(operator==(other));
}
inline std::size_t DnaSequence::getLength() const
{
    return m_size;
}



#endif /*//UNTITLED3_DNA_H*/
