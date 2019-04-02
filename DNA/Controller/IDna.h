//
// Created by wiseberg on 12/31/18.
//

#ifndef UNTITLED3_IDNA_H
#define UNTITLED3_IDNA_H

#include <cstddef>
#include "Necleotid.h"

class IDna
{
public:

    virtual ~IDna(){};
    virtual std::size_t getLength() const = 0;
    virtual  Necleotide & operator[](std::size_t index) const = 0;
//    virtual  friend std::ostream& operator<<(std::ostream& os, IDna& dnaSeqence);

private:


};
#endif //UNTITLED3_IDNA_H
