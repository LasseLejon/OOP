#include "kort.h"
#include <cassert>



Kort::Kort(Kort::Suite suite,int value)
{
    assert(value>=1 && value <=13);
    m_suite=suite;
    m_value=value;
}
Kort::Suite Kort::getSuite()
{
    return m_suite;
}
int Kort::getValue()
{
    return m_value;
}
std::string Kort::text()
{
    std::string str;
    const char *tabS[] = {"clubs", "diamonds", "hearts","spades"};
    const char *tabV[] = {"doesn't exist", "ace","two","three","four",
                          "five","six","seven","eight","nine","ten","jack"};
    str+=tabV[m_value];
    str+=" of ";
    str+=tabS[m_suite];
    return str;
}
