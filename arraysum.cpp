#include<iostream>
using namespace std;

int arraysum(int num[]){

    int sum = 0;

    for(int i=0;i<5;i++){

        sum = sum + num[i];

    }

    return sum;
}

int main(){

    int arr[5];

      cout << "enter " << endl;
    for(int i = 0;i<5;i++){
      
        cin >> arr[i];
    }

    int total = arraysum(arr);

    cout << "total " << total ;


    
}