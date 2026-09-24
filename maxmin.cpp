#include<iostream>
#include<climits>
using namespace std;

int minnum(int num[], int n){

    int min = INT_MAX;

    for(int i=0;i<n;i++){

        if(num[i]<min){
            min = num[i];
        }
    }

    return min;

}

int maxnum(int num[], int n){

    int maxi = INT_MIN;

    for(int i=0;i<n;i++){

        maxi = max(maxi,num[i]);

        // if(num[i]>max){
        //     max = num[i];
        // }
    }

    return maxi;

}

int main(){

    int size;
    cout << "size" << endl;
    cin >> size;

    int num[100];

    cout << "enter the value" << endl;

    for(int i=0;i<size;i++){

        cin >> num[i];
    }

   int maxvalue = maxnum(num,size);
   int minvalue = minnum(num,size);

    cout << "max value" << maxvalue << endl;
    cout << "min value" << minvalue << endl;



}