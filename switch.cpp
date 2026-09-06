#include<iostream>
using namespace std;

int main(){

    int a ;

    cout << "enter the amount" << endl;

    cin >> a;

    
    bool isnum ;
   

    switch(1){

        case 1 : isnum = a>=100;

                    switch (isnum)
                    {

                     case false:  break;
                    
                        
                    case true:  cout << (a/100) << " hundred ruppenote" <<endl;

                                a=a%100;

                                

                          break;
                    }

        case 2 : isnum = a>=50;

                   switch (isnum)
                    { 

                       case false:  break;
                    
                    
                        
                    case true:  cout << (a/50) << " fifty ruppenote" <<endl;

                                a=a%50;

                          break;
                    }



        case 3 : isnum = a>=20;

                   switch (isnum)
                    {
                    
                    case false : 
                            break;
                        
                    case true:  cout << (a/20) << " tweenty ruppenote" <<endl;

                                a=a%20;

                          break;
                    }      
                    
                    
       case 4 : isnum = a>=10;

                   switch (isnum)
                    {
                    case false:  break;
                        
                    case true:  cout << (a/10) << " ten ruppenote" <<endl;

                                a=a%10;

                          break;
                    }                    
                    

         case 5 : isnum = a>=1;

                   switch (isnum)
                    {
                    
                     case false:  break;
                        
                    case true:  cout << (a/1) << " one ruppenote" <<endl;

                                

                          break;
                    }                    

    
    
    }
}