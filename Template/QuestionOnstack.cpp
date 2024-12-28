// valid parenthesis

#include <iostream>
#include <stack>
using namespace std;
bool bal(string &s, int n)
{
    stack<char> st;
    bool ans = true;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == '}')
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }

        else if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }

        else if (s[i] == ']')
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }
    if (!st.empty())
    {
        return false;
    }
    else
    {

        return ans;
    }
}
int main()
{
    string s = "{}() ";
    bool k = bal(s, s.length());
    if (k)
    {
        cout << "valid";
    }
    else
    {
        cout << "NOT valid";
    }

    return 0;
}

// wap to return minimum and maximum value in stack ;

#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    int x;
    int y;
    int gre;
    s.push(100000);
    s.push(50);
    s.push(60);
    s.push(300);
    s.push(40000);
    s.push(800);

    x = s.top();
    s.pop();
    while (!s.empty())
    {
        if (s.top() > x)
        {
            gre = s.top();
            s.pop();
        }
    }
    cout << 10;
    return 0;
}
