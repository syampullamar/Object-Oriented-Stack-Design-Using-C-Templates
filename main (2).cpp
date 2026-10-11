#include<iostream>
using namespace std;
void int_stack();    
void char_stack();    
void float_stack();    
void double_stack();    
void string_stack();    
#define MAX_SIZE 5
template<class type>
class stack
{
type array[MAX_SIZE];
int TOP;
public:
stack()
{
TOP=-1; 
}
void push(type x)
{
if(TOP>=4)
cout<<"stack overflow"<<endl;
else{
TOP++;
array[TOP]=x;
}
}
void pop()
{
if(TOP<=-1)
cout<<"stack underflow"<<endl;
else
{
TOP--;
}
}

void display()
{
if(TOP<=-1)
cout<<"stack is empty"<<endl;
else
{
for(int i=0;i<=TOP;i++)
cout<<array[i]<<" ";
cout<<endl;
}
}
};
stack<int>i;
stack<char>c;
stack<float>f;
stack<double>d;
stack<string>s;
int main()
{
int x;
while(1)
{
cout<<"select one option"<<endl;
cout<<"1)int stack   2)char stack  3)float stack  4)double stack  5)string stack 6)exit"<<endl;
cin>>x;
switch(x)
{
case 1:int_stack();     break;
case 2:char_stack();    break;
case 3:float_stack();   break;
case 4:double_stack();  break;
case 5:string_stack();  break;
case 6:return 0;        break;
default:cout<<"enter valid option"<<endl;
}
}
}
void string_stack()
{
int op,x;
string y;
cout<<"enter 1 for new stack  2)previous stack"<<endl;
cin>>op;
if(op==1)
s=stack<string>();
while(1)
{
cout<<"select one option"<<endl;
cout<<"1)push   2)pop  3)display stack  4)exit "<<endl;
cin>>x;
switch(x)
{
case 1:cout<<"enter char to push"<<endl;
       cin>>y; 
       s.push(y);    break;
case 2:s.pop();      break;
case 3:s.display();  break;
case 4:return;
default:cout<<"enter valid value"<<endl;
}
}
}
void char_stack()
{
int op,x;
char y;
cout<<"enter 1 for new stack  2)previous stack"<<endl;
cin>>op;
if(op==1)
c=stack<char>();
while(1)
{
cout<<"select one option"<<endl;
cout<<"1)push   2)pop  3)display stack  4)exit "<<endl;
cin>>x;
switch(x)
{
case 1:cout<<"enter char to push"<<endl;
       cin>>y; 
       c.push(y);   break;
case 2:c.pop();     break;
case 3:c.display(); break;
case 4:return;
default:cout<<"enter valid option"<<endl;
}
}
}
void float_stack()
{
int op,x;
float y;
cout<<"enter 1 for new stack  2)previous stack"<<endl;
cin>>op;
if(op==1)
f=stack<float>();
while(1)
{
cout<<"select one option"<<endl;
cout<<"1)push   2)pop  3)display stack  4)exit "<<endl;
cin>>x;
switch(x)
{
case 1:cout<<"enter float to push"<<endl;
       cin>>y;
       f.push(y);    break;
case 2:f.pop();      break;
case 3:f.display();  break;
case 4:return;
default:cout<<"enter valid option"<<endl;
}
}
}
void int_stack()
{
int x,y,op;
cout<<"enter 1 for new stack  2)previous stack"<<endl;
cin>>op;
if(op==1)
i=stack<int>();
while(1)
{
cout<<"select one option"<<endl;
cout<<"1)push   2)pop  3)display stack  4)exit "<<endl;
cin>>x;
switch(x)
{
case 1:cout<<"enter int to push"<<endl;
       cin>>y; 
       i.push(y);   break;
case 2:i.pop();     break; 
case 3:i.display(); break;
case 4:return;
default:cout<<"enter valid option"<<endl;
}
}
}

void double_stack()
{
int op,x;
double y;
cout<<"enter 1 for new stack  2)previous stack"<<endl;
cin>>op;
if(op==1)
d=stack<double>();
while(1)
{
cout<<"select one option"<<endl;
cout<<"1)push   2)pop  3)display stack  4)exit "<<endl;
cin>>x;
switch(x)
{
case 1:cout<<"enter double to push"<<endl;
       cin>>y;
       d.push(y);    break;
case 2:d.pop();      break;
case 3:d.display();  break;
case 4:return;
default:cout<<"enter valid option"<<endl;
}
}
}
