#include<iostream>
using namespace std;

/*
1
21
321
4321
*/

int main(){

    int n ;
    cin >> n;

    int i = 1;
    int count = 1;

    while (i<=n){

        int j = 1;
        int num = i;
        while (j<=i){

          /* cout << num << " "; 
           num = num - 1;
           j = j+1; */

           cout << i+1-j << " ";
           j = j + 1;
           
        }

        cout << endl;

        i = i + 1;
        
    }

}