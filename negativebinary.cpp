#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    cout << "enter the negative number" << endl;

    cin >> n;

    int answer = 0;

    int i = 0;
     int carry = 1;

    while (i <= 8)
    {

        int bit = n & 1;

        cout << "bit" << bit << endl;

        bit = bit ^ 1;

        cout << bit << endl;
        n = n >> 1;

     if (carry == 1)
        {
            cout << i <<endl;
            if (bit == 0)
            {

                bit = 1;
                carry = 0;
            }

            else
            {
                bit = 0;
                
            }
        }


        answer = (bit * pow(10, i)) + answer;

        i++;
    }


    cout << answer << endl;
}