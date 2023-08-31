#include<iostream>
using namespace std ;
int main ()
{
    int num;
    int iu=1;
    cout<<("Enter a number to produce a table:-");
    cin>>num;
    //for (int i=1;i<=10;++i)
    //cout<<num*i<<endl;
     
    // while (iu<=10)
     //{cout<<num*iu<<endl;
     //iu++;}
     
     do {
        cout<<num*iu<<endl;
        iu++;
     }
     while(iu<=10) 

}