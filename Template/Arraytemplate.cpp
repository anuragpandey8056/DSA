// #include<iostream>
// using namespace std;
// #include<array>
// int main()

// {
// array<int,5>arr{1,2,3,4,5};
// cout<<arr.size()<<"\n";
// for (int i = 0; i <arr.size(); i++)
// {
//    cout<<arr.at(i)<<"\t";
// }

// return 0 ;
// }



// to take input
#include<iostream>
using namespace std;
#include<array>
int main()

{
array<int,5>arr;
cout<<arr.size()<<"\n";
for (int i = 0; i <arr.size(); i++)
{
   cin>>arr[i];
}


// output
cout<<arr.size()<<"\n";
for (int i = 0; i <arr.size(); i++)
{
   cout<<arr[i]<<"\t";
}

cout<<"to get value of first index"<<"\n"<<arr.front()<<"\n";
cout<<"to get value of last index"<<arr.back()<<"\n";


array<int,5>d{10,20,30,40,50};

for (int i = 0; i <d.size(); i++)
{
   cout<<d[i]<<"\t";
}

// after swap
cout<<endl;

arr.swap(d);


for (int i = 0; i <arr.size(); i++)
{
   cout<<arr[i]<<"\t";
}
for (int i = 0; i <d.size(); i++)
{
   cout<<d[i]<<"\t";
}



d.fill(100); // isme ek hi value pass kar skte hai isme value pass karne se poorani value replace ho jati hai aur starting me agr dete to 














return 0 ;
}

