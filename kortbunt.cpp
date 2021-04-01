#include "kortbunt.h"

Kortbunt::Kortbunt()
{
}
void Kortbunt::clearDeck()
{
    while(!m_deck.empty())
        m_deck.pop_back();
}
int Kortbunt::amountOfCardsInDeck()
{
    return m_deck.size();
}
Kort Kortbunt::card(int nr)
{
    return m_deck[nr];
}
Kort Kortbunt::giveCard()
{
   Kort card=m_deck.back();
   m_deck.pop_back();
   return card;
}
void Kortbunt::placeCardInDeck(Kort card)
{
    m_deck.push_back(card);
}
void Kortbunt::resetDeck()
{
    clearDeck();



}
