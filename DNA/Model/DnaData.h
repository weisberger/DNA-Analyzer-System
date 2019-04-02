//
// Created by wiseberg on 12/25/18.
//

#ifndef UNTITLED3_DNADATA_H
#define UNTITLED3_DNADATA_H

#include "../Controller/dna.h"
#include "../Controller/DnaMetaData.h"
#include "../Controller/SharedPointer.h"
#include <map>
class DnaData
{

public:

    static size_t m_id;

    void New(std::string dnaSeqence, std::string name);
    std::string show(std::string idDnaSeqence, std::string numIfCharsToPrint = "99");
    std::string list();
    std::string pair(size_t id, std::string name);

    std::map<std::string, DnaMetaData>  * getMDnaByNames();
    std::map<size_t , DnaMetaData > * getMDnaById();

    std::string getNameById(size_t id);
    size_t getId();
    DnaMetaData & getDnaById(size_t id);
    DnaMetaData & getDnaByName(std::string name);
    std::string newName(std::string oldName);
    void addDnaToData(SharePointer<IDna> , std::string);
  //  void addDnaSeqenceToMap(std);


private:

    std::map<std::string, DnaMetaData > m_dnaByNames;
    std::map<size_t , DnaMetaData> m_dnaById;

};

inline std::map<std::string, DnaMetaData > * DnaData::getMDnaByNames()
{
    return &m_dnaByNames;
}

inline std::map<size_t , DnaMetaData> * DnaData::getMDnaById()
{
    return &m_dnaById;
}


inline size_t DnaData::getId()
{
    return m_id;
}

#endif //UNTITLED3_DNADATA_H
