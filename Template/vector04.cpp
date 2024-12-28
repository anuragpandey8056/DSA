// wap to return truue if value are consecutive or return false if not

#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;
bool test(array<int, 5> &v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (  v[i + 1]-v[i]  != 1)
        {
            return false;
        }
      
    }
    return true;
   
}
int main()

{ 

    array<int, 5> arr;
    cout << arr.size() << "\n";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
   

    if(test(arr)){
        cout<<"consecutive";

    }
    else{
        cout<<"not consecutive";
    }

    return 0;
}