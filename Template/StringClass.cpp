#include <iostream>
using namespace std;
#include<string>
int main(){
string c;
cout<<"Memory of string = "<<sizeof(c)<<"\n";
cout<<"Enter your name\n";
getline(cin,c);
cout<<"Your name = "<<c<<"\n";
c.push_back(' ');
c.push_back('w');
cout<<"Your name = "<<c<<"\n";
c.pop_back();
cout<<"Your name = "<<c<<"\n";

}
