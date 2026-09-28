#include<iostream>
using namespace std;

void swaparr(int arr[],int size){

    int start = 0;
    int end = 1;

    while(start<size ){

        if(end==size){
            return;
        }
        swap(arr[start],arr[end]);

        start = start + 2 ;
        end = end + 2;
    }


}


void printarr(int arr[], int size){

    for(int i =0;i<size;i++){

        cout<<arr[i]<<" ";
    }

    cout<<endl;
}


int main(){

    int arr[6] = {1,4,3,2,3,2};
    int brr[5] = {1,2,3,4,5};
    swaparr(arr,6);
    printarr(arr,6);
     swaparr(brr,5);
    printarr(brr,5);
}