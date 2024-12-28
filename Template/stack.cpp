#include<iostream>
#include<stack>
using namespace std;
int main()
{
stack<int>s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
cout<<s.size();
if (s.empty())
{
    cout<<"\nit is empty\n";
}
else{
    cout<<"\nit is not empty\n";
}

while (!s.empty())
{
    cout<<s.top()<<"\t";
    s.pop();
}

if (s.empty())
{
    cout<<"\nit is empty\n";
}
else{
    cout<<"\nit is not empty\n";    
}


















return 0 ;
}