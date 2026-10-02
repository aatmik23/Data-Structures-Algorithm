#include<iostream>
#include<vector>
using namespace std;

bool possiblesolution(vector<int> arr,int n,int m,int mid){

    int pagesum = 0;
    int student = 1;

    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{

            student++;
            if(student>m || arr[i]>mid){
                return false;
            }

            pagesum=arr[i];


        }

        if(student>m){
            return false;
        }
    }

    return true;

}

int allocateBooks(vector<int> arr,int n,int m){
    int s = 0;
    int sum =0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    int e =sum;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){

        if(possiblesolution(arr,n,m,mid)){

            ans=mid;

            e=mid-1;

        }

        else{
            
            s=mid+1;
        }

        mid = s+(e-s)/2;


    }


    return ans;

}

int main(){
    vector<int> arr = {10,20,30,40};
    int studentsize = 2 ;
    int arraysize = 4;

    cout<<allocateBooks(arr,arraysize,studentsize)<<endl;


}