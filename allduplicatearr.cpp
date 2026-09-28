#include<iostream>
using namespace std;

int main(){

    int arr[100] ={1,2,3,4,4,6,3};

        int ans = 0;
        int n =0;

        int duplicate[100] ;

    for(int i=0; i<7;i++){
        cout << ans << "^" << arr[i] << " ";
        ans=ans^arr[i];

        if (ans==0){
            duplicate[n] = arr[i];
            n++;
        }

        cout<<ans <<endl;

    }

    cout<< "ans" <<ans <<endl;
    cout<<duplicate[0];
       cout<<duplicate[1];
    


//     for(int i=0; i<7;i++){
//   cout << ans << "^" << i << " ";
//         ans=ans^i;                     //
//                                        //34

//         cout<<ans <<endl;

//     }

//     cout<< "ans" <<ans <<endl;

}