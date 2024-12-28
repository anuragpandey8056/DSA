// ========================Insertion Sort==========================================================
#include <iostream>
using namespace std;
int main()
{
    int s;
    cout << "enter size of array\n";
    cin >> s;
    int cnt = 0;
    int arr[s];
    // Input========================================================================
    int sorted, temp;
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    cout << "output before\n";
    // logic is there===============================================================
    for (int i = 1; i < s; i++)
    {
        sorted = i;
        while (sorted > 0 && arr[sorted] < arr[sorted - 1])
        {
            temp = arr[sorted - 1];
            arr[sorted - 1] = arr[sorted];
            arr[sorted] = temp;
            sorted--;
            cnt++;
        }
    }
    // output===========================================================================
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n"
         << cnt;

    return 0;
}