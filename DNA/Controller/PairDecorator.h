//
// Created by wiseberg on 1/13/19.
//

#ifndef UNTITLED3_PAIRDECORATOR_H
#define UNTITLED3_PAIRDECORATOR_H

#include "IDna.h"
#include "Necleotid.h"
#include "SharedPointer.h"
class PairDecorator: public IDna
{

public:

    PairDecorator(SharePointer<IDna>);
    std::size_t getLength() const;
    Necleotide & operator[](std::size_t index) const;

private:

    SharePointer<IDna> m_idna;

};
#endif //UNTITLED3_PAIRDECORATOR_H
