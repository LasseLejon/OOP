#ifndef KORT_H
#define KORT_H
#include <string>


class Kort
{
public:
    enum Suite{
        clubs, diamonds, hearts, spades
    };
    Kort(Suite=clubs,int value=1);
    Suite getSuite();
    int getValue();
    std::string text(); //returns the suite and value as a string ex, "ace of spaces"
private:
    Suite m_suite;
    int m_value;
};

#endif // KORT_H
