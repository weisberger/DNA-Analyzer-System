//
// Created by wiseberg on 1/13/19.
//

#include "PairDecorator.h"

PairDecorator::PairDecorator(SharePointer<IDna> dnaSeqence)
{
    m_idna = dnaSeqence;
}

std::size_t PairDecorator::getLength() const
{
    return m_idna->getLength();
}

Necleotide & PairDecorator::operator[](std::size_t index) const
{
    return ((*m_idna)[index]).flip();
}