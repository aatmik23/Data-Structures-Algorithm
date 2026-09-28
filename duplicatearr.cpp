#include<iostream>
using namespace std;

int main(){

    int arr[100] ={1,2,3,4,5,6,3};

        int ans = 0;

    for(int i=0; i<7;i++){

        ans=ans^arr[i];

        cout<<ans <<endl;

    }

    cout<< "ans" <<ans <<endl;

    for(int i=0; i<7;i++){

        ans=ans^i;

        cout<<ans <<endl;

    }

    cout<< "ans" <<ans <<endl;

}