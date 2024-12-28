#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
#include<list>
using namespace std;

int main()
{
// it is called doubly linklist insertion and deletion donoend se hota hai  here we called it list 

list<int>lst{4,21,40,5,6,1,2};


lst.push_back(10);
lst.push_front(-10);
lst.pop_back();
lst.pop_front();

cout<<"size="<<lst.size();

cout<<endl;

// value get by not forrange loop 

list <int>::iterator it = lst.begin();

while (it!=lst.end())
{
  cout<<*it<<"\t";
  it++;
//   it=it+1;


  // here it++ and it= it+1 both are not same because it=it+1 ek ek plus karta hai aur doubly linklist me nonlinear data hota hai to it++ next location get kar leta hai to yaha ham it++ use karte hai 
}







// ==================================================================


return 0 ;
}