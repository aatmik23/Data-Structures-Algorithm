#include<iostream>
using namespace std;

int main(){

    int a = 4;
    int b = 6;

    cout<<" a&b :" << (a&b )<< endl;
   cout<<" a|b :" << (a|b )<< endl;
   cout<<" ~a :" << ~a << endl;
   cout<<" a^b :" << (a^b )<< endl;

   /*
left shift << 
right shit >>

maxmium time multiply by 2

right shift divide by 2 

padding 0

-ve padding compiler dependent


*/

cout<< (17<<1) <<endl;
cout<< (17<<2) <<endl;
cout<< (19>>1) <<endl;
cout<< (23>>2) <<endl;

/*
pre increment ++i
post increment --i
*/

int i = 7;

cout<<(++i)<<endl;
// 8
cout<<(i++)<<endl;
// 8
cout<<(i--)<<endl;
// 9
cout<<(--i)<<endl;
// 7
}

