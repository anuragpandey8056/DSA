#include <iostream>
using namespace std;
int srt(int arr[], int low, int high)
{
    int pvt = arr[low];
    int p = low + 1;
    int q = high;
    int temp;
    do
    {
        while (arr[p] < pvt)
        {
            p++;
        }
        while (arr[q] > pvt)
        {
            q--;
        }
        if (p < q)
        {
            temp = arr[p];
            arr[p] = arr[q];
            arr[q] = temp;
        }
    } while (p < q);
    temp = arr[low];
    arr[low] = arr[q];
    arr[q] = temp;
    return q;
}
void qs(int arr[], int low, int high)
{
    if (low < high)
    {
        int pvt;
        pvt = srt(arr, low, high);
        qs(arr, 0, pvt - 1);
        qs(arr, pvt + 1, high);
    }
}
void printarr(int arr[], int s)
{

    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << "\t";
    }
}
int main()
{
    int s;
    cout << "enter size of array \n";
    cin >> s;
    int arr[s];
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    cout << "before quick sort\n";
    printarr(arr, s);
    qs(arr, 0, s - 1);
    cout << "\nafter quick sort\n";
    printarr(arr, s);

    return 0;
}