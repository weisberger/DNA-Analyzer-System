//
// Created by wiseberg on 1/6/19.
//

#ifndef UNTITLED3_NECLEOTID_H
#define UNTITLED3_NECLEOTID_H


#include <iosfwd>
#include <iostream>

class Necleotide
{

public:

    Necleotide();
    Necleotide(char c);
    Necleotide & operator=(const char c);

    bool operator==(const Necleotide& necleotide);
    bool operator!=(const Necleotide& necleotide);

    friend std::ostream& operator<<(std::ostream& os, const Necleotide& other);

    Necleotide & flip();

private:

    char checkValidity(char c);
    char m_c;
};


inline bool Necleotide::operator==(const Necleotide &necleotide)
{
    return m_c == necleotide.m_c;
}

inline bool Necleotide::operator!=(const Necleotide &necleotide)
{
    return m_c != necleotide.m_c;
}

inline Necleotide::Necleotide():m_c('A')
{
}

inline Necleotide::Necleotide(char ch) :m_c(checkValidity(ch))
{
}

inline char Necleotide::checkValidity(char c)
{
    if ((c != 'A') && (c != 'C') && (c != 'T') && (c != 'G'))
    {
        throw " :( the DNA_sequence invalid";
    }
    return c;
}

inline Necleotide & Necleotide::flip()
{
    char c = m_c;
    switch(c)
    {
        case 'A':
            return (*new Necleotide('T'));

        case 'T':
            return (*new Necleotide('A'));

        case 'C':
            return (*new Necleotide('G'));;

        case 'G':
            return (*new Necleotide('C'));;
        default:
            break;
    }
}

#endif //UNTITLED3_NECLEOTID_H
