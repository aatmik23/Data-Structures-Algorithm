#include<iostream>
using namespace std;

int factorial(int num){

    int ans = num;

    if(ans==0){
        return 1;
    }

    while(num>1){

        num = num-1;
        
        ans = ans * num;

       

    }

    return ans;
}

int ncr(int a , int b ){

    int num = factorial(a);

    int denom = factorial(b)*factorial(a-b);

    int ans = num/denom;

    return ans;
}

int main(){

//ncr = n!/(n!*(n-r)!)



int a,b;

cout << "enter" << endl;

cin>>a>>b;

int ans = ncr(a,b);

cout << ans ;

}
