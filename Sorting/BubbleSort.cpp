// ================================BUBBLE SORT ================================================================
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array\n";
    cin>>n;
    cout << "Enter data: \n";
    int arr[n];
    int c;

    cout << "\nBUBBLE SORTING \n";
    int temp;
    cout << "\nBEFORE DATA \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {   
        c=0;
        for (int j = 0; j < n -i- 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                c++;
            }
        }
        if(c==0)
        {
            break;
        }

    }
    cout << "\n  SORTED DATA  \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}

// hamra code structure or value based dono  hai 