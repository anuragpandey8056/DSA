// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
// vector<int>v{10,20,30,40};
// // v.pop_back();    // it delte the data bydefault by last

// for (auto j : v)
// {
//     cout<<j<<"\t";
// }
// cout<<"\n";

// vector<int>::iterator it =v.begin();
// cout<<*it;

// cout<<"\t";

// cout<<v[0];

// cout<<"\t";

// cout<<*(it+1);


// return 0 ;
// }




#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
// vector<int>v{10,20,30,40};
// // v.pop_back();    // it delte the data bydefault by last

// for (auto j : v)
// {
//     cout<<j<<"\t";
// }
// cout<<"\n";

// vector<int>::iterator it =v.begin();
// v.insert(it+2,100);  // insert at any position
// v.erase(it+2);       // delte at any position
// cout<<*it;
// // sort
// cout<<endl;
// sort(v.begin(),v.end());   // sort at assending order
// for (auto j : v)
// {
//     cout<<j<<"\t";
// }

// // sort decending 
// cout<<endl;
// sort(v.rbegin(),v.rend());   // sort at decending order
// for (auto j : v)
// {
//     cout<<j<<"\t";
// }

// ==================================================================================================================

// vector<int>v(5);
// v[0]=100;
// v[1]=100;
// v[2]=100;
// v[3]=100;
// v[4]=100;
// v.push_back(10);
// v.push_back(40);
// v.push_back(60);
// v.push_back(10);
// v.push_back(10);

// cout<<v.size()<<"\n";

// for (auto p : v)
// {
//     cout<<p<<"\t";
// }



// vector<int>v(5,NULL);
// // vector<string>k(5,"BLANK");


// cout<<v.size()<<"\n";

// for (auto p : v)
// {
//     cout<<p<<"\t";
// }



 const vector<int>v(5,5);   // size is given   yaha pe puri value 5 ho jayegi aur size 5 hai aur vector me const lga hai to update bhi nhi kar skte
 const vector<int>v{10,20,30,40};   // size is given    yaha pe bhi chnages nhi kar skte haai values di hue hai 



 cout<<v.size()<<"\n";

for (auto p : v)
{
    cout<<p<<"\t";
    }











































return 0 ;
}