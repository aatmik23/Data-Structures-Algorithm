#include<iostream>
#include<algorithm>
using namespace std;

void printarray(int arr[],int size){
    for(int i = 0;i<size;i++){

        cout<<arr[i] << " ";
    }
}

int main(){
    int a[10] ={12,122};

    // a[15] = {12};
    // cout << a[15] << endl;
    // to intialize array with single value
//std::fill_n(a, 10, -24);
printarray(a,10);
    cout << a[1] << endl;
}