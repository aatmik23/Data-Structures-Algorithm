#include<iostream>
using namespace std;

bool linearsearch(int arr[], int size, int key){

    for(int i =0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }

    return false;
}

int main(){

    int arr[5] = {2,4,3,1,3};

    int key;

    cin >> key;

    bool ispresent = linearsearch(arr,5,key);

    if(ispresent){
        cout << "present";
    }

    else{
        cout << "not present";
    } 





    
}