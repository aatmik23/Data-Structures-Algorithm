#include<iostream>
using namespace std;

void printarr(int arr[], int size){

    for(int i =0;i<size;i++){

        cout<<arr[i]<<" ";
    }

    cout<<endl;
}


int main(){
       //   Write your code here

    int arr[10] ={0, 1 ,2 ,2 ,1, 0};
               //0 ,0,1,1,2,2
    int n = 6;
   int low = 0;
   int mid = 0;
   int high = n-1;
   int step=0;

   while(mid<high){


      // if(arr[low]==0){
      //    low++;
      // }

      // if(arr[high]==2){

      //    high--;
      // }

      // if(arr[mid]==1){
      //    mid++;
      // }

      // if(arr[mid]==0){
      //    swap(arr[low],arr[mid]);
      //    mid++;
      // }

      // if(arr[mid]==2 && mid<high){
      //    cout<<"Step "<<step++<<": ";
      //    swap(arr[mid],arr[high]);
      // }

      //   printarr(arr,n);

      //   cout<<endl;

      if(arr[mid] == 0)
{
    swap(arr[low], arr[mid]);
    low++;
    mid++;
}
else if(arr[mid] == 1)
{
    mid++;
}
else if(arr[mid] == 2)
{
    swap(arr[mid], arr[high]);
    high--;
}


   }

   printarr(arr,n);


   
  
}