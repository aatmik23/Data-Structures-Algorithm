#include<iostream>
using namespace std;

int pivotarr(int arr[],int size){
    
    int s =0;//0
    int e = size-1; //5
    int mid = s + (e-s)/2 ;//2

    while(s<=e){//2<5  3<5 3<4

        if(arr[mid]>arr[0]){//12>8 4<8
            s=mid+1;//3
        }

        else{
            e=mid-1;//4 3

        }

        mid = s + (e-s)/2 ;//4 //3  //3
    }

    return arr[s];
}

int main(){
    int arr[8] ={8,10,12,24,25,2,3,5};

    cout<<pivotarr(arr,8);


}