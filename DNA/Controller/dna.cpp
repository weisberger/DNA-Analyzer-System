
#include <cstring>
#include <fstream>
#include "dna.h"

void check_len_of_DNA_sequence(const char * DNA_sequence)
{
    if(strlen(DNA_sequence) %3 != 0)
    {
        throw "DNA_sequenceq must be a double of three";
    }
}

DnaSequence::DnaSequence(const char * DNA_sequence)
{
    std::cout<<"start constractor(char * DNA_sequence)\n";
    check_len_of_DNA_sequence(DNA_sequence);
    set_m_DNA_sequence(DNA_sequence);
    std::cout<<"finish constractor(char * DNA_sequence)\n";
}

DnaSequence::DnaSequence(const std::string & DNA_sequence)
{
    std::cout<<"start constractor(std::string DNA_sequence)\n";
    check_len_of_DNA_sequence(DNA_sequence.c_str());
    set_m_DNA_sequence(DNA_sequence.c_str());
    std::cout<<"finish constractor(std::string DNA_sequence)\n";
}

DnaSequence::DnaSequence(const DnaSequence& other, size_t from, size_t to)
{
    if (from > to || to > other.m_size)
    {
        throw std::out_of_range("The range is incorrect");
    }

    size_t len = to-from;
    m_DNA_sequence = new Necleotide[len];

    for(size_t j = 0, i = from; i < to; ++i,++j)
    {
        m_DNA_sequence[j] = other.m_DNA_sequence[i];
    }

    m_size = len;
}

void DnaSequence::set_m_DNA_sequence(const char * DNA_sequence)
{
    try
    {
        m_size = strlen(DNA_sequence);
        m_DNA_sequence = new Necleotide[m_size];
        for (size_t i = 0; i < m_size; ++i)
        {
            m_DNA_sequence[i] = DNA_sequence[i];
        }
    }

    catch(const char * s)
    {
        std::cout << s << std::endl;
    }
}

DnaSequence::DnaSequence(Necleotide & n, size_t size)
{
    m_size = size;
    m_DNA_sequence = &n;
}

size_t DnaSequence::get_size() const
{
    return m_size;
}

Necleotide * DnaSequence::getM_DNA_sequence()
{
    return m_DNA_sequence;
}


DnaSequence::DnaSequence(const DnaSequence & other)
{
    m_DNA_sequence = new Necleotide[other.m_size];
    for(size_t i = 0; i < other.m_size; ++i)
    {
        m_DNA_sequence[i] = other.m_DNA_sequence[i];
    }
    m_size = other.m_size;
}

DnaSequence::~DnaSequence()
{
    delete[] m_DNA_sequence;
}
Necleotide & DnaSequence::operator[](std::size_t i) const
{
    if(i > m_size)
        throw std::out_of_range("index invalid");
    return m_DNA_sequence[i];
}

//DnaSequence::Necleotide& DnaSequence::operator[](size_t i) const
//{
//    if(i > m_size)
//        throw std::out_of_range("index invalid");
//    return m_DNA_sequence[i];
//}

DnaSequence&  DnaSequence::operator=(const std::string & other)
{
    return operator=(other.c_str());
}

DnaSequence&  DnaSequence::operator=(const char *other)
{
    check_len_of_DNA_sequence(other);
    delete[] this->m_DNA_sequence;
    set_m_DNA_sequence(other);
    return * this;
}

DnaSequence& DnaSequence::operator=(const DnaSequence & other)
{

            size_t len = other.m_size;
            Necleotide * new_nuotletide =  new Necleotide[len];
            delete[] this->m_DNA_sequence;

            for (size_t i = 0; i < len; ++i)
            {
               new_nuotletide[i] = other[i];
            }
              m_DNA_sequence = new_nuotletide;
            return  * this;
}

std::ostream& operator<<(std::ostream& os, DnaSequence& dnaSeqence)
{
    std::cout << "operator << dnaSeqence\n";
    for(size_t i=0; i < dnaSeqence.m_size; ++i)
    {
        os << dnaSeqence.m_DNA_sequence[i] ;
    }
    return os;
}


DnaSequence  DnaSequence::get_slice(size_t from, size_t to)
{
    return DnaSequence(*this, from, to);
}

DnaSequence DnaSequence::Pairing(DnaSequence & dnaSequence)const
{

    Necleotide *new_nuclotied = new Necleotide[m_size];
    for (int i = 0; i < m_size; ++i)
    {
        new_nuclotied[i] = m_DNA_sequence[m_size -i - 1].flip();
    }
    return DnaSequence(*new_nuclotied, m_size);

}
//std::ostream& operator<<(std::ostream&os, Nucleotide & other)
//{
//    os<<other.nucleotide;
//    return os;
//}

//std::ostream& Necleotide::operator<<(std::ostream &os, Necleotide & other)
//{
//    return os << other.m_c;
//
//}
//std::ostream& operator<<(std::ostream& os, Necleotide& Necleotide)
//{
//}
