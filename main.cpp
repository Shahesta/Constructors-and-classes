// Program: Assignment 2 - Individual6
// Purpose: Printing all cards
// Author:  Shahesta Alkady
// Date:    30 October 2018
// Version: 1.0
#include <iostream>
#include "Card.h"
using namespace std;
Suit operator ++(Suit& e){
     e = static_cast<Suit>(static_cast<int>(e)+1);
}
int main()
{
   int ACE=1,KING=13;

    for (Suit suit = CLUBS; suit <= SPADES; ++suit)
    {
        for (int rank = ACE; rank <= KING; rank++)
        {
            cout << " " << Card(rank, suit);
        }
        cout << endl;
    }
    return 0;
}

