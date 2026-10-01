#include<iostream>
#include<vector>
using namespace std;

int pivotarr(vector<int> arr,int size){
    // {11, 13, 5, 8, 9, 10};

    int s =0;//0
    int e = size-1; //5
    int mid = s + (e-s)/2 ;//2

    while(s<e){//2<5  3<5 3<4

        if(arr[mid]>arr[0]){//12>8 4<8
            s=mid+1;//3
        }

        else{
            e=mid-1;//4 3

        }

        mid = s + (e-s)/2 ;//4 //3  //3
        cout<<"s is "<<s<<endl;
    }

    return s;
}

int binaryarr(vector<int> arr,int pivot,int size,int key){

    int start=pivot;
    int end=size;
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


int search(vector<int> arr, int n, int k)
{

    int pivot = pivotarr(arr,n);
    cout<<"pivot is "<<pivot<<endl;

    if(k >= arr[pivot] && k<=arr[n-1]){
        return binaryarr(arr,pivot,n,k);

    }

    else{
       return binaryarr(arr,0,pivot-1,k);
    }
    // Write your code here.


    // Return the position of K in ARR else return -1.
}


int main(){
    vector<int> arr = {11, 13, 5, 8, 9, 10};
    int n = 6;
    int k = 5;
    cout << search(arr, n, k) << endl;
    return 0;
}