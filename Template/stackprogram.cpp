// // stack implementtation code 
// #include<iostream>
// #include<stack>
// using namespace std;
// #define n 5
// class stk{
//     public:int *arr;
//     int top;
//     stk(){
//         arr= new int[n];
//         top=-1;
//     }
//     void push(int a){
//         if (top==n-1)
//         {
//             cout<<"overflow\n";
//             return;
//         }
//         top++;
//         arr[top]=a;
        
//     }
//     void pop(){
//         if (top==-1)
//         {
//            cout<<"underflow no element to pop \n";
//            return;
//         }
//         top--;        
//     }
//     int tops(){
//         if (top==-1)
//         {
//             cout<<"no element \n";
//             return -1;
//         }
//         return arr[top];      
//     }
// };
// int main()
// {
// // int *p=NULL; //null pointer 
// // int *p; // wild pointer

// stk st;
// st.push(10);
// st.push(20);
// st.push(30);
// st.push(40);
// st.push(50);
// cout<<st.tops()<<"\n";
// cout<<"top element is"<<st.tops()<<endl;
// st.pop();
// while (st.top!=-1)
// {
//     cout<<st.tops()<<"\n";
//     st.pop();
// }
// delete [] st.arr;// this is called free pointer
// // agr ye upr wali step nhi likhunga tangling pointer khate hai 
// return 0 ;
// }



#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
vector<string>v;
string name;
for (int i = 0; i <2; i++)
{
    cin>>name;
    v.push_back(name);
}

for (auto t : v)
{
    cout<<t<<"\n";
}
cout<<endl;
sort(v[0].begin(),v[0].end());
sort(v[1].begin(),v[1].end());
for (auto t : v)
{
    cout<<t<<"\n";
}

if (v[0].size()==v[1].size())
{
   if (v[0]==v[1])
   {
     cout<<"anagram";
   }
   else{
    cout<<"not anagram";
   }  
}
else{
     cout<<"not anagram";
}










//anagram =>jhan
//ahnj

return 0 ;
}