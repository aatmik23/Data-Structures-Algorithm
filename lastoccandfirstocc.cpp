#include<iostream>
using namespace std;

int firstocc(int arr[],int size,int key){

    int start=0;
    int end=size-1;
    int mid = start+(end-start)/2;
    int ans=-1;

    while(start<=end){

        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }

        else if(arr[mid]<key){
            start = mid+1;
            
        }

        else{
            end = mid-1;
        }

        mid = start+(end-start)/2;
    }

    return ans;
}

int lastocc(int arr[],int size,int key){

    int start=0;
    int end=size-1;
    int mid = start+(end-start)/2;
    int ans=-1;

    while(start<=end){

        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }

        else if(arr[mid]<key){
            start = mid+1;
            
        }

        else{
            end = mid-1;
        }

        mid = start+(end-start)/2;
    }

    return ans;
}


int main(){

    int arr[8] = {0,1,2,2,2,2,4,6};

    cout<<firstocc(arr,8,2);
    cout<<lastocc(arr,8,2);





}