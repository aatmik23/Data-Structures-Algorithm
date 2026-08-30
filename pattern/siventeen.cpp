#include<iostream>
using namespace std;

/*
1234554321
1234**4321
123****321
12******21
1********1
*/


int main(){

    int n ;
    cin >> n;

    int i = 1;
   
    while (i<=n){

      int space = 1;

     while(space<=n+1-i){

        cout << space ;
        space = space + 1;
     }

     int star = 1;
     
     while(star<i){
        cout << "*";
        star = star + 1;
     }

    int secstar = 1;
     
     while(secstar<i){
        cout << "*";
        secstar = secstar + 1;
     }

     int num = n;

     int j = 1;

     while(j<=n+1-i){

        cout << num + 1 -i;
        num = num - 1;
        j = j + 1;
     }


      i = i + 1;

      cout << endl;



        
    }

}