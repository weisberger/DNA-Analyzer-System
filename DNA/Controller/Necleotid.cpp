//
// Created by wiseberg on 1/6/19.
//

#include "Necleotid.h"

Necleotide& Necleotide::operator=(const char c)
{
    this->m_c = checkValidity(c);
    return * this;
}

std::ostream& operator<<(std::ostream& os, const Necleotide & other)
{
    return os << other.m_c;
}
