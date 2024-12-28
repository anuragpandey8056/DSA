#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
#include<forward_list>
using namespace std;
int cmp(int a,int b) {return a>b; };
int main()
{
// function without name called lamda function
//syntax : [](data type variable){code;}(variable);
forward_list<int>lst{4,21,40,5,6,1,2};
vector<int>v{1,12,3,44,5,6};
// sort(v.begin(),v.end(),cmp);    // bth are same 
// sort(v.begin(),v.end(),[](int a,int b){return a>b;});   // both are same

for (auto p : v)

{
   cout<<p<<"\t"; 
}

// ==================================================================

// cout<<[] (int a) {if(a>0) return true;}(4)<<"\n";                // one line function  is called lamda 
// cout<<[] (int a,int b) {if(a>b) return a; else return b;}(4,71)<<"\n";   // to check greater no using lamda functiom

return 0 ;
}