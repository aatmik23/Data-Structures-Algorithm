#include<iostream>
using namespace std;

int main(){
 
    int n; 

    cout << "enter the value of n" << endl;
    cin >> n;

    cout << "the value from 1 to n are :" << endl;

    for(int i = 1; i<=n ; i++){

        cout<< i <<endl;
    }
    
for(int a=0,b=1,c=2;a>=0 && b<=1 && c<=2 ; a--,b--,c--){

        cout<< a << " " << b <<" " <<c <<endl;
    }
    

}