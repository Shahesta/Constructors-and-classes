#include "Card.h"
#include <iostream>

using namespace std;


Card::Card()
{
    rank=0;
    suit=CLUBS;
}

Card::Card(int rank, Suit suit)
{
    this -> rank =rank;
    this -> suit =suit;
}
Card::Card(string s){
this -> s=s;
isString=true;
}


string Card::toString()
{
string ss="";
if(rank==1){
    ss+="A";
}
else if(rank>=2&&rank<10){
    ss+=char(rank+'0');
}
else if (rank==10)
    ss+="10";
else if(rank==11)
    ss+="J";
else if(rank==12)
    ss+="Q";
else if(rank==13)
    ss+="K";
if(suit==0){
    ss+="C";
}
else if(suit==1){
    ss+="D";
}
else if(suit==2){
    ss+="H";
}
else if(suit==3){
    ss+="S";
}
return ss;
}

ostream& operator << (ostream& out,Card c)
 {
 if(c.isString==true){
    out<<c.s;
 }
 else{
    out<<c.toString();
 }
 }

