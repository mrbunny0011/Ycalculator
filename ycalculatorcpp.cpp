#include<iostream>
using namespace std;

int main()
{
    // Abdul basit. class BsCs section (D)Roll number 26.
    int a;
    int b;
    char op;
    bool loop=1;
    while(loop)
    {
      cout<<"Enter your first number"<<endl;
    cin>>a;
      cout<<"Enter your second number"<<endl;
    cin>>b;
      cout<<"Enter your operater(+,-,*,/,%)"<<endl;
    cin>>op;
    
    if(op=='+')
    cout<<a<<'+'<<b<<'='<<a+b<<endl;
    else
    if(op=='-')
    cout<<a<<'-'<<b<<'='<<a-b<<endl;
    else
    if(op=='*')
    cout<<a<<'*'<<b<<'='<<a*b<<endl;
    else 
    if(op=='/')
    cout<<a<<'/'<<b<<'='<<a/b<<endl;
    else 
    if(op='%')
    cout<<a<<'%'<<b<<'='<<a%b<<endl;
    else
     if (a,b==char())
    cout<<" wrong input";
    else 
    loop = 0; 
    
      }
   cout <<"invalid input";
    
    return 0;
}
