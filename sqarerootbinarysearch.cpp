#include<iostream>
using namespace std;


long long int binarysearch(int n){

    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2;
   long long int ans;

    while(s<=e){
        long long int squrae = mid*mid;

        if(squrae==n){
            return mid;
        }
        if(squrae>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}

double squareRoot(int n,int precision,int tempsol){

    double factor = 1;
    double ans = tempsol;

    for(int i =0;i<precision;i++){
         factor = factor/10;
        //0.1
        //0.01
        //0.001
        for(double j=ans;j*j<n;j=j+factor){

            ans=j;
        }

    }

    return ans;
    
}

int main()
{
    int n;
    cout << "Enter a number: "<<endl;
    cin >> n;
    int tempsol = binarysearch(n);
    cout<<squareRoot(n,3,tempsol);
    
}
