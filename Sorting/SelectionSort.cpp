// it is structure based  kyuki ye har time compare karega
// it is stable

#include <iostream>
using namespace std;
int main()
{
    int s;
    cout << "enter size of \n";
    cin >> s;
    int arr[s];
    int chotu;

    // taking input
    cout<<"enter values in the array of size"<<s<<endl;
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
// ==========================================================================================================
    // logic of selection sort
    for (int i = 0; i < s; i++)
    {
        chotu = i;
        for (int j = i + 1; j < s; j++)
        {
            if (arr[chotu] > arr[j])
            {                                                       //[1, 3, 5, 4, 2]
                chotu = j;
            }
        }
        if (chotu != i)
        {
            int temp;
            temp = arr[chotu];
            arr[chotu] = arr[i];
            arr[i] = temp;
        }
    }
     // show data=====================================================================================
    cout << "after selection sort\n";
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}