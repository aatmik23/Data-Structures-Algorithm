#include<iostream>
using namespace std;

/*
    1
   121
  12321
   */

int main(){

    int n ;
    cin >> n;

    int i = 1;
    int count = 1;
    

    while (i<=n){

      int space = n - 1;

      while (space>=i){
        cout << " ";
        space = space - 1;

      }

      int num = 1;

      while(num<=i){

        cout << num ;
        num = num +1 ;
      }

      int sec = 1;
      
      while(sec<i){
        cout << sec ;
        sec = sec + 1;
      }


      i = i + 1;

      cout << endl;



        
    }

}