#include<iostream>
using namespace std;

/*
ABC
BCD
CDF
*/

int main(){

    int n ;
    cin >> n;

    int i = 1;
    int count = 1;
    

    while (i<=n){

        char ch = 'A';

        int j = 1;
        
        while (j<=n){
         char cha = ch + i - 1 ;
         cout << cha << " ";
         ch = ch + 1;


        j = j+1;
           
        }

        cout << endl;

        i = i + 1;
        
    }

}