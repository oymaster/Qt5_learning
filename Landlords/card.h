#ifndef CARD_H
#define CARD_H

#include <QVector>

class Card
{
public:
    enum CardSuit{
        Suit_Begin,
        Diamond,
        Club,
        Heart,
        Spade,
        Suit_End
    };
    enum CardPoint{
        Card_Begin,
        Card_3,
        Card_4,
        Card_5,
        Card_6,
        Card_7,
        Card_8,
        Card_9,
        Card_10,
        Card_J,
        Card_Q,
        Card_K,
        Card_A,
        Card_2,
        Card_Sj,
        Card_Bj,
        Card_End
    };

    Card();
    Card(CardPoint point, CardSuit suit);
    void setPoint(CardPoint point);
    void setSuit(CardSuit suit);
    CardPoint getPoint() const;
    CardSuit getSuit() const;

private:
    CardPoint m_point;
    CardSuit m_suit;

};

bool lessSort(const Card& c1,const Card& c2);
bool greaterSort(const Card& c1,const Card& c2);
bool operator <(const Card& c1,const Card& c2);
bool operator ==(const Card& c1,const Card& c2);

uint qHash(const Card& card);

using CardList = QVector<Card>;

#endif // CARD_H
