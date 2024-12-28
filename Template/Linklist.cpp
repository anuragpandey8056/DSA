#include<iostream>
#include<forward_list>
using namespace std;
int main()
{

// merging of two list 
forward_list<int>l1{78,8,7,5,6};
forward_list<int>l2{45,55,68,1,25,};
// cout<<"data of l1\n";
// for (auto p : l1)
// {
//     cout<<p<<"\t";
// }

// cout<<"\n data of l2\n";

// for (auto p : l2)
// {
//    cout<<p<<"\t"; 
// }

// l1.sort();    // sort list
// l2.sort();
// l1.merge(l2);    // list
// cout<<"\nafter merger\n";
// for (auto p : l1)
// {
//     cout<<p<<"\t";
// }

l1.remove(4);  // isme value pass karte hai jo dlt karta hai wahi value

l1.insert_after(l1.begin(),47); // it insert after first position only data 



return 0 ;
}