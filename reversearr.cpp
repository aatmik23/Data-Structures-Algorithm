#include<iostream>
using namespace std;

void reversearr(int arr[],int size){

    int start = 0;
    int end = size-1;

    while(start<=end){

        swap(arr[start],arr[end]);

        start++;
        end--;
    }


}

void printarr(int arr[], int size){

    for(int i =0;i<size;i++){

        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

int main(){
    int arr[6] = {1,5,3,2,-5,3};
    int brr[5] = {1,2,3,2,5};

    reversearr(arr,6);
    printarr(arr,6);

       reversearr(brr,5);
    printarr(brr,5);


}