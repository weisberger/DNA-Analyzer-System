//
// Created by wiseberg on 12/27/18.
//

#include <sstream>
#include "DnaMetaData.h"

DnaMetaData::DnaMetaData(size_t id, SharePointer<IDna> dnaSeqence, std::string name) : m_id(id), m_dnaPointer(dnaSeqence), m_name(name), m_status(0)
{
}

std::string DnaMetaData::getStringSeq()
{
    std::stringstream ss;

    for (size_t i = 0; i < m_dnaPointer->getLength(); ++i)
    {
        ss << (*m_dnaPointer)[i];
    }
    return ss.str();

}
//std::ostream& operator<<(std::ostream &out, const DnaMetaData &dnaMetaData)
//{
//    out << *dnaMetaData.m_dnaPointer;
//    return out;
//}

