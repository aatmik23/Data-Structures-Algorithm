#include<iostream>
using namespace std;

int binaryarr(int arr[],int size,int key){

    int start=0;
    int end=size-1;
    int mid = start+(end-start)/2;

    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }

        if(arr[mid]<key){
            start = mid+1;
            
        }

        else{
            end = mid-1;
        }

        mid = start+(end-start)/2;



    }

    return -1;
}

int main(){

    int arr[8]={0,1,22,44,55,66,77,88};
    int brr[5]={3,5,6,7,8};

   cout<< binaryarr(arr,8,99) <<endl;
    cout<< binaryarr(brr,5,3) <<endl;


}