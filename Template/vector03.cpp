// #include<iostream>
// #include<vector>
// using namespace std;

// void test (vector<int>vs){
//     for (auto p : vs)
//     {
//       if(p%2==0){
//         cout<<p<<"\t";
//       }
//     }
    
// }
// int main()
// {
// vector<int>v{10,20,-3,-4,-5};
// test(v);
// return 0 ;
// }


#include<iostream>
#include<vector>
using namespace std;

vector <int> test (vector<int>&vs){       // call by refence hua tab update hua  value pe nhi hai
    for (int i=0;i<vs.size();i++)
    {
     vs[i]=vs[i]+1;
    //  vs[i]++;  
     cout<<vs[i]<<"\t";

    }
    return vs;
    
}
int main()
{
vector<int>v{1,2,3,4,5};
for (auto s : v)
{
    cout<<s<<"\t";
}
cout<<endl;

test(v);
cout<<endl;
cout<<"after updation"<<"\n";
cout<<endl;
for (auto s : v)
{
    cout<<s<<"\t";
}


return 0 ;
}