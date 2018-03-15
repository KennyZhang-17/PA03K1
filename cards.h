//cards.h
//Authors: Ziqi Fu Kenny Zhang

#ifndef CARDS_H
#define CARDS_H

#include <string>
struct Card{
        int suit; //stores the suit
        int num; //stores the number or face
      Card *left;
    Card *right;
        // useful constructor:
        //Card(int m=0, int v=0) : num(v), suit(m), left(0), right(0) { }
     //~Card();//destructor for the Card
        
        bool operator==(const Card& other)//overload operator==
        {
            if (suit == other.suit&&num == other.num)
                return true;
            else return false;
        }
  /*        bool operator<(const Card& other)
        {
            if (suit < other.suit || (suit == other.suit && num<other.num))
                return true;
            else return false;
        }
        bool operator>(const Card& other)
        {
            if (suit > other.suit || (suit == other.suit && num>other.num))
                return true;
            else return false;
        }
  */
    };
class Cards{
    
public:
    Cards(); //constructor
    ~Cards(); //destructor
    
    void print(); //print the cards
    
    void append(char s, char k); //add a card to a stack
    void remove(int s, int k); //remove a card from a stack
    void clear(Card* n); //destructor deletes all nodes

    int count(); //returns the number of cards in a stack
    bool matchFound(int suit, int k); //returns T if match found
    std::string process_A(Cards & target);//process the stack
    std::string process_B(Cards & target);
    Card* findSuc(Card* root, int num, int suit);
    Card* findPre(Card* root, int num, int suit);
    Card* minValueNode(Card* s);
    Card* deleteNode(Card* root, int suit, int num);
    void decode_n(Card* n);
    void decode_s(Card* n);
 private:

    Card *root; //pointer to the first card
};
#endif