// #include <iostream>
// using namespace std;
// int main()
// {
//     int s, sorted, temp;
//     cout << "enter size of array\n";
//     cin >> s;
//     int arr[s];
//     for (int i = 0; i < s; i++)

//     {
//         cin >> arr[i];
//     }

//     for (int i = 1; i < s; i++)
//     {
//         sorted = i;

//         while (sorted > 0 && arr[sorted] < arr[sorted - 1])

//         {
//             int temp=arr[sorted-1];
//             arr[sorted-1]=arr[sorted];
//             arr[sorted]=temp;
//             sorted--;
//         }
//     }
//     for (int i = 0; i < s; i++)
//     {
//         cout<<arr[i]<<"\t";
//     }
    

//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
int s,chotu;
cout<<"Enter size of arry\n";
cin>>s;
int arr[s];

for (int i = 0; i < s; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < s; i++)
{
    chotu=i;
    for (int j = i+1; j< s; j++)
    {
        if(arr[chotu]>arr[j]){
            chotu=j;
        }
    }
    if(chotu!=i){
        int temp=arr[chotu];
        arr[chotu]=arr[i];
        arr[i]=temp;
    }
    
}
for (int i=0;i<s;i++){
    cout<<arr[i]<<"\t";
}



return 0 ;
}