#include<iostream>
using namespace std;

int main()
{
    // Abdul basit. class BsCs section (D) 
    int a;
    int b;
    char op;
    Bool loop=1;
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
    loop = 0; to say
    
      }
   cout <<"invalid input";
    
    return 0;
}
