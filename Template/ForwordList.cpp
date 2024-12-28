// linklist two types
// single linklist
// doubly linklist
//singly linklist is called forword_list   isme insertion front se deletion bhi front se
// doubly linklist is called list


#include<iostream>
#include<vector>
#include<forward_list>
using namespace std;
int main()
{
forward_list<int>list1{100,200,3000,400};
for (auto p : list1)
{
    cout<<p<<"\t";

}
list1.push_front(1);
list1.push_front(2);
list1.pop_front();
cout<<endl;
list1.sort();
for (auto p : list1)
{
    cout<<p<<"\t";

}


return 0 ;
}

