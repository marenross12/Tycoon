//
// Created by Mishael Garrett on 11/17/26.
//
#include<iostream>
#include "Card.h"
Card::Card(int value, std::string suit) {
    switch (value) {
        case 0:
            m_face="Joker";
            m_strengthValue = value;
            break;
        case 1:
            m_face="3";
            m_strengthValue = value;
            break;
        case 2:
            m_face="4";
            m_strengthValue = value;
            break;
        case 3:
            m_face="5";
            m_strengthValue = value;
            break;
        case 4:
            m_face="6";
            m_strengthValue = value;
            break;
        case 5:
            m_face="7";
            m_strengthValue = value;
            break;
        case 6:
            m_face="8";
            m_strengthValue = value;
            break;
        case 7:
            m_face="9";
            m_strengthValue = value;
            break;
        case 8:
            m_face="10";
            m_strengthValue = value;
            break;
        case 9:
            m_face="Jack";
            m_strengthValue = value;
            break;
        case 10:
            m_face="Queen";
            m_strengthValue = value;
            break;
        case 11:
            m_face="King";
            m_strengthValue = value;
            break;
        case 12:
            m_face="Ace";
            m_strengthValue = value;
            break;
        case 13:
            m_face="2";
            m_strengthValue = value;
            if (suit.compare("Hearts")==0) {
                m_Heart2=true;
            }
            break;
        default:
            m_face="Burfder";
            m_strengthValue=0;
    }
    m_suit=suit;
}

Card::Card() {

}
std::ostream& operator<<(std::ostream &os, Card &c) {
    os<<"The "<<c.m_face;
    if (c.m_face.compare("Joker")!=0)
    os<<" of "<<c.m_suit;
    //os<<" has a strength of "<<c.m_strengthValue;
    return os;
}
