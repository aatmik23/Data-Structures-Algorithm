#include<iostream>
using namespace std;

int pivotarr(int arr[],int size){
    
    int s =0;//0
    int e = size-1; //7
    int mid = s + (e-s)/2 ;//3

    while(s<e){//0<7 0<3 

        if(arr[mid]>=arr[0]){//5<11 3<11
            s=mid+1;//3
        }

        else{
            e=mid;//3 1

        }

        mid = s + (e-s)/2 ;//0+3/2=1   
         cout<<"s is "<<mid<<endl;
  
    }
     return s;
}

int main(){
    int arr[8] ={11, 3, 4, 5, 6, 7,8,9};

    cout<<pivotarr(arr,8);


}