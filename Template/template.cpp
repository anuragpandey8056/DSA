// It is a generalized format of function and class 
// it is two types 
// function template 
// class template

// to over come to make multiple function

// function template


// #include<iostream>
// using namespace std;
// template<typename a,typename b>
// a grt(a a1,b b1){
//     if(a1>b1){
//         return a1;
//     }
//     else{
//         return b1;
//     }
// }

// int main()
// {
// cout<<grt(45,78);
// return 0 ;
// }

// ==============================================================================================================================
// class template 
// <iostream>  <>it is a content place holder  and iostream is a class template
#include<iostream>
using namespace std;
template<typename c1,typename c2>      // yaha pe isko use karne se data type koi bhi enter karo usko accept karega sab data type ke liye
class Student{
    c1 age;
    c2 salary;
    public:Student(c1 a,c2 b){
        age=a;
        salary=b;

    }
    void show(){
        cout<<"age ="<<age<<"\n";
        cout<<"salary="<<salary<<"\n";
    }
};
int main()
{
    Student<int,double> obj(18,5478.256);   // content place holder data type run type pe decide karna or iskoo generalised formed
    obj.show();


return 0 ;
}

