// to reverse a string

// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
// string s;
// string p;
// cout<<"enter a string \n";
// getline(cin,s);

// for (int i = s.size(); i >= 0; i--)
// {
//  p+=s[i];
// }
// cout<<p;
// return 0 ;
// }

//  to give letter increase by one

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string s;
//     cout << "enter a string \n";
//     getline(cin, s);

//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
//         {
//             if (s[i] == 'z')
//             {
//                 s[i] = 'a';
//             }
//             else if (s[i] == 'Z')
//             {
//                 s[i] = 'A';
//             }
//             else
//             {
//                 s[i]++;
//             }
//         }
//     }
//     cout << s;

//     return 0;
// }

// to capitalize first letter

#include <iostream>
#include <string.h>
using namespace std;
int capitalize(string &s)
{
    string st = s;
    char ch;
    int as;
    for (int i = 0; i < s.size(); i++)
    {
        ch = st[i];
        if (i == 0)
        {
            as = s[i];
            if (as >= 97 && as <= 122)
            {
                as = as - 32;
                st[i] = as;
            }
        }
        if (ch == ' ')
        {
            ch = st[i + 1];
            as = ch;
            if (as >= 97 && as <= 122)
            {
                as = as - 32;
                ch = as;
                st[i + 1] = ch;
            }
        }
        
    }
    cout << st;
}

int main()
{
    string s;

    getline(cin, s);
    capitalize(s);

    return 0;
}
