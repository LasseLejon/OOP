#ifndef KORTBUNT_H
#define KORTBUNT_H
#include "kort.h"
#include <vector>


class Kortbunt
{
public:
    Kortbunt();
    void clearDeck();
    int amountOfCardsInDeck();
    Kort card(int nr);
    Kort giveCard();
    void placeCardInDeck(Kort card);
    void resetDeck();
    void shuffle();
private:
    std::vector<Kort> m_deck;
};

#endif // KORTBUNT_H
