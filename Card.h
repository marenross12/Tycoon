//
// Created by Mishael Garrett on 11/17/26.
//

#ifndef TYCOON_CARD_H
#define TYCOON_CARD_H
#include <string>


class Card {
protected:
    int m_strengthValue;
    std::string m_face;
    std::string m_suit;
private:
    bool m_Heart2 = false;

public:
    bool get2Hearts() {
        return m_Heart2;
    }
    Card(int value, std::string suit);
Card();
    bool operator>(Card other) {
        if (this->m_strengthValue!=0&&other.m_strengthValue!=0) {
            if (this->m_strengthValue>other.m_strengthValue) {
                return true;
            }
            return false;
        }
        if (this->m_strengthValue==1&&this->m_suit.compare("Spades")==0) {
            return true;
        }
        if (other.m_strengthValue==1&&other.m_suit.compare("Spades")==0) {
            return false;
        }
        if (this->m_strengthValue==0)return true;
        return false;
    }
    bool operator<(Card other) {
        if (this->m_strengthValue!=0&&other.m_strengthValue!=0) {
            if (this->m_strengthValue<other.m_strengthValue) {
                return true;
            }
            return false;
        }
        if (other.m_strengthValue==1&&other.m_suit.compare("Spades")==0) {
            return true;
        }
        if (this->m_strengthValue==0) {
            return false;
        }
        return true;
    }
    bool operator==(Card other) {
        if (this->m_strengthValue==other.m_strengthValue) {
            return true;
        }if (this->m_strengthValue==0||other.m_strengthValue==0) {
            return true;
        }
        return false;
    }
    friend std::ostream& operator<<(std::ostream &os, Card &c);
};


#endif //TYCOON_CARD_H
