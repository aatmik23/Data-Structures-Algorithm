#include<iostream>
using namespace std;

/*
    *
   **
  *** 
*/

int main(){

    int n ;
    cin >> n;

    int i = 1;
    int count = 1;
    

    while (i<=n){

        char ch = 'A';

        int j = 1;
        
        while (j<=i){
        char nech = ch + n - i;

        cout << nech << " ";

        ch = ch + 1;

        j = j+1;
           
        }

        cout << endl;

        i = i + 1;
        
    }

}