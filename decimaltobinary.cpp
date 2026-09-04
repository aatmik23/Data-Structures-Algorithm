#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n ;
    cout << "enter the number" << endl;

    cin >> n ;

    int answer = 0;
    int i =0;

    while(n!=0){

        int bit;
        bit = n&1 ;

        n = n >> 1;

        cout << bit <<endl;

        // same flow  (ans*10)+digit

        // reverse flow (digit*10^i)+answer
        
     /*   1   1 0 = 1
        0   10 1 = 1
        1 100  1 = 101 */

        answer = (bit * pow(10,i))+answer;

        i++;

    }

    cout << answer << endl;
}