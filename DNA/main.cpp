
#include <cstring>
#include <fstream>
#include "Controller/dna.h"
#include "Controller/DnaRead.h"
#include "Controller/DnaWriter.h"
#include "Controller/Controller.h"

//void text_Dnaseqence_Necleotide()
//{
//    try
//    {
//        Necleotide necleotide;
//    }
//    catch(char c)
//    {
//      std::cout << "Error in constructor Necleotid()";
//    }
//
//}
//
//void text_Dnaseqence_Necleotide_char()
//{
//    char c_neocletide = 'A';
//    try
//    {
//        Necleotide necleotide(c_neocletide);
//    }
//    catch(char c)
//    {
//        std::cout << "Error in constructor Necleotid(char)";
//    }
//}
//
//void text_Dnaseqence_Necleotide_assiment_operator()
//{
//    try
//    {
//        Necleotide necleotide;
//        necleotide.operator=('C');
//    }
//    catch(char c)
//    {
//        std::cout << "Error in Necleotide & operator=(const char)";
//    }
//}
//
//void text_Dnaseqence_Necleotide_operator_char()
//{
//    try
//    {
//        Necleotide necleotide('C');
//        necleotide == 'C';
//    }
//    catch(char c)
//    {
//        std::cout << "Error in operator char()";
//    }
//}
//
//void text_neocletide_out()
//{
//    try
//    {
//        Necleotide necleotide('C');
//        std::cout << necleotide << std::endl;
//    }
//    catch(char c)
//    {
//        std::cout << "Error in friend std::ostream& operator<<(std::ostream& os, Necleotide& )";
//    }
//}
//
//void text_DnaSequence_string()
//{
//    try
//    {
//        std::string s = "AAA";
//        DnaSequence dnaSequence(s);
//    }
//    catch(char c)
//    {
//        std::cout << "Error in DnaSequence(const std::string & DNA_sequence)";
//    }
//}
//
//void text_DnaSequence_char()
//{
//    try
//    {
//        char * s = (char *)"AAA";
//        DnaSequence dnaSequence(s);
//    }
//    catch(char c)
//    {
//        std::cout << "Error in DnaSequence(const char * DNA_sequence)";
//    }
//}
//
//void text_DnaSequence_copy_constructor()
//{
//    try
//    {
//        DnaSequence dnaSequenceThis("AAA");
//        DnaSequence dnaSequenceOther(dnaSequenceThis);
//        std::cout << dnaSequenceOther << std::endl;
//    }
//    catch(char c)
//    {
//        std::cout << "Error in DnaSequence(const char * DNA_sequence)";
//    }
//}
//
//void text_DnaSequence_distructor()
//{
//    try
//    {
//        DnaSequence dnaSequenceThis("AAA");
//    }
//    catch(char c)
//    {
//        std::cout << "Error in ~DnaSequence()";
//    }
//}
//
//void text_DnaSequence_assiment_operator()
//{
//    try
//    {
//        DnaSequence dnaSequenceThis("AAA");
//        DnaSequence dnaSequenceOther("CCC");
//        dnaSequenceThis.operator=(dnaSequenceOther);
//        std::cout << dnaSequenceThis << std::endl;
//    }
//
//    catch(char c)
//    {
//        std::cout << "Error in DnaSequence&operator=(const DnaSequence & other)";
//    }
//}
//
//void text_DnaSequence_assiment_operator_string()
//{
//    try
//    {
//        DnaSequence dnaSequence("AAA");
//        dnaSequence.operator=("CCC");
//        std::cout << dnaSequence << std::endl;
//    }
//    catch(char c)
//    {
//        std::cout << "Error in DnaSequence&operator=(const DnaSequence & other)";
//    }
//}
//
//void text_DnaSequence_assiment_operator_char()
//{
//    try
//    {
//        DnaSequence dnaSequence((char *)"AAA");
//        dnaSequence.operator=("CCC");
//        std::cout << dnaSequence << std::endl;
//    }
//    catch(char c)
//    {
//        std::cout << "Error in DnaSequence&operator=(const char * other)";
//    }
//}
//
//void text_Dnaseqence_get_size()
//{
//    try
//    {
//        DnaSequence dnaSequence("AAA");
//        std::cout << dnaSequence.get_size() << std::endl;
//    }
//    catch(char c)
//    {
//        std::cout << "Error in get_size()";
//    }
//}
//
//void text_Dnaseqence_out()
//{
//    try
//    {
//        DnaSequence dnaSequence("AAA");
//        std::cout << dnaSequence << std::endl;
//    }
//    catch(char c)
//    {
//        std::cout << "Error in friend std::ostream& operator<<(std::ostream& os, DnaSequence& dnaSeqence)";
//    }
//}
//
//void text_Dnaseqence_operator_equal()
//{
//    try
//    {
//        DnaSequence dnaSequenceThis("AAA");
//        DnaSequence dnaSequenceOther("CCC");
//
//        std::cout << dnaSequenceThis.operator==(dnaSequenceOther) << std::endl;
//    }
//
//    catch(char c)
//    {
//        std::cout << "Error in bool operator==(const DnaSequence& dnaSeqence1)";
//    }
//}
//
//void text_Dnaseqence_operator_not_equal()
//{
//    try
//    {
//        DnaSequence dnaSequenceThis("AAA");
//        DnaSequence dnaSequenceOther("CCC");
//
//        std::cout << dnaSequenceThis.operator!=(dnaSequenceOther) << std::endl;
//    }
//
//    catch(char c)
//    {
//        std::cout << "Error in bool operator==(const DnaSequence& dnaSeqence1)";
//    }
//}
//
//void text_Dnaseqence_operator_index()
//{
//    try
//    {
//        DnaSequence dnaSequenceThis("AAA");
//        std::cout << dnaSequenceThis.operator[](1) << std::endl;
//    }
//
//    catch(char c)
//    {
//        std::cout << "Error in Necleotide& operator[](size_t i)";
//    }
//}
//
//void text_DnaSequence_get_slice()
//{
//    try
//    {
//        DnaSequence dnaSequence("AAACCC");
//        DnaSequence d = dnaSequence.get_slice(1,4);
//        std::cout << d << std::endl;
//    }
//
//    catch(char c)
//    {
//        std::cout << "Error in DnaSequence  get_slice(size_t from, size_t to)";
//    }
//}
//
//void text_DnaSequence_Pairing()
//{
//    try
//    {
//        DnaSequence dnaSequence("AAACCC");
//        DnaSequence d = dnaSequence.Pairing(dnaSequence);
//        std::cout << d << std::endl;
//    }
//
//    catch(char c)
//    {
//        std::cout << "Error in DnaSequence Pairing(DnaSequence & dnaSequence) const";
//    }
//}
//
//void test_write_text()
//{
//    try {
//        DnaSequence d("ACACACCCCCCC");
//        DnaWriter d_write((char *)"dnaSeqence_file.txt");
//        d_write.write(d);
//    }
//    catch(char * t)
//    {
//        std::cout<<t;
//    }
//}
//void test_read_text()
//{
//    try {
//        DnaRead d((char *)"dnaSeqence_file.txt");
//        std::string h = d.read();
//        int a=0;
//    }
//    catch(char * t)
//    {
//        std::cout<<t;
//    }
//}

size_t DnaData::m_id = 0;

int main()
{
//    text_Dnaseqence_Necleotide();
//    text_Dnaseqence_Necleotide_char();
//    text_Dnaseqence_Necleotide_assiment_operator();
//    text_Dnaseqence_Necleotide_operator_char();
//    text_neocletide_out();
//    text_DnaSequence_string();
//    text_DnaSequence_char();
//    text_DnaSequence_copy_constructor();
//    text_DnaSequence_distructor();
//    text_DnaSequence_assiment_operator();
//    text_DnaSequence_assiment_operator_string();
//    text_DnaSequence_assiment_operator_char();
//    text_Dnaseqence_get_size();
//    text_Dnaseqence_out();
//    text_Dnaseqence_operator_equal();
//    text_Dnaseqence_operator_not_equal();
//    text_Dnaseqence_operator_index();
//    text_DnaSequence_get_slice();
//    text_DnaSequence_Pairing();
//    test_write_text();
//    test_read_text();
   Controller c;
    c.run();

    return 0;

}
