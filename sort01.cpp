#include<iostream>
using namespace std;

void printarr(int arr[], int size){

    for(int i =0;i<size;i++){

        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

int main(){

    int arr[8] = {0,1,1,0,1,0,0,1};
                   



    int i=0;
    int j=7;
    int step=0;

    while(i<j){
        cout<<"step "<<step++ <<endl;
        if(arr[i]==0){
            i++;

            cout<<"i "<<i<<endl;
            cout<<arr[i]<<endl;
        }

         if(arr[j]==1){
            j--;
            cout<<"j "<<j<<endl;
            cout<<arr[j]<<endl;
        }

        if(i<j)
        swap(arr[i],arr[j]);
        i++;
        j--;
        cout<<"i "<<i<<" j "<<j<<endl;
        cout<<"ai "<<arr[i]<<" aj "<<arr[j] <<endl;


    }

  printarr(arr,8);
}