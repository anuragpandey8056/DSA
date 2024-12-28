// namespace is a collection of identifier 
// namespace ke ansder class banti hai class ke ander namespace nhi bnata hai 
// it also removes the ambiguity 
// bydefault specifier is public 


// #include<iostream>
// using namespace std;
// namespace Cybrom{
//     int age =21;
//     void show(){
//         cout<<"example of namespace \n";
//     }
// }

// int main()

// {
// cout<<Cybrom::age<<"\n";
// Cybrom::show();


// return 0 ;
// }


// ==========================================================
#include<iostream>
using namespace std;
namespace Cybrom{
    int age =21;
    void show(){
        cout<<"example of namespace \n";
    }
    class student{
        public:void hello(){
            cout<<"hello function \n";
        }
    }p;
}

int main()

{
cout<<Cybrom::age<<"\n";
Cybrom::show();
Cybrom::student s;       // aise bhi both are same
s.hello();

using namespace Cybrom;   //aise bhi call kar skte hai
p.hello();


return 0 ;
}