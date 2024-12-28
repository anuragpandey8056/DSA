// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
// // arrray is static and vector is dynamic here we didnot give size
// vector<int>v;
// v.push_back(10);
// v.push_back(10);
// v.push_back(10);



// // v[0]=20   // this is for overwrite not insertion the data

// cout<<"total length of vector="<<v.size()<<"\n";    //size of vector
// cout<<"max value of vector"<<v.max_size()<<"\n";    // max size of vector

// for (auto a : v)     // simple foreach loop  data type nhi btana padata auto likhne se wo khud detect kar leta hai data type 
// {
//     cout<<a<<"\t";
// }

// cout<<endl;
// for (int i = 0; i < v.size(); i++)    // for loop
// {
//          cout<<v[i]<<"\t";
// }



// cout<<"total length of vector="<<v.size()<<"\n";    
// cout<<"max value of vector"<<v.capacity()<<"\n";   // capacity me static enter karoge value to capacity and size same rahegi lekin push_back function use karenge to just double hot jati hai capacity 2 ke square me


// return 0 ;
// }

// 
// =====================================================================================================
#include<iostream>
#include<vector>
using namespace std;


int main()
{
vector<int>v;
int s,t;
cout<<"enter how many record\n";
cin>>s;
cout<<"enter"<<s<<"elements\n";

for (int i = 0; i < s; i++)
{
    cin>>t;
    v.push_back(t);

}

cout<<"size"<<v.size();
cout<<"cpacity"<<v.capacity();

for (int i = 0; i < s; i++)
{
    cout<<v[i]<<"\t";
    

}


return 0 ;
}