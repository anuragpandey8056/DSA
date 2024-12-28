#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
#include<forward_list>      //singley linklist
using namespace std;

int main()
{
// function without name called lamda function
//syntax : [](data type variable){code;}(variable);
forward_list<int>lst{4,21,40,5,6,1,2};
// remove_if se bhaut si value dlt ho jati hai remove function se ek value dlt hoti hai

lst.remove(10);

lst.remove_if([](int a){return a>5;});     // here we use lamda function as an argument  to dlt multiple value 

lst.clear();      // to remove all value in forword list 
for (auto k : lst)
{
    cout<<k<<"\t";
}
cout<<endl;
cout<<"distance = "<<distance(lst.begin(),lst.end());    // to find the size of list 




cout<<endl;
vector<int>v{1,12,3,44,5,6};

sort(v.begin(),v.end(),[](int a,int b){return a>b;});   

for (auto p : v)

{
   cout<<p<<"\t"; 
}

// ==================================================================


return 0 ;
}