#include <iostream>
#include <tuple>
#include <vector>
using namespace std;
int main()
{
    // // tuple is a structure
    // tuple<int,string,int>t{101,"anurag",21};   // data type define coloum ka nature
    // cout<<"rollno="<<get<0>(t)<<endl;
    // cout<<"name="<<get<1>(t)<<endl;
    // cout<<"Age="<<get<2>(t)<<endl;

    // using tuple in vector to genetrate coloums implemention
    vector<tuple<int, string, int>> v1;
    int n, rno, age;
    string name;

    cout << "how many records\n";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        cout << "\n enter roll no";
        cin >> rno;
        cout << "\n enter name no";
        cin >> name;
        cout << "\n enter age no";
        cin >> age;
        v1.push_back(make_tuple(rno, name, age));
    }

    for (int i = 0; i < v1.size(); i++)
    {
        cout << get<0>(v1[i]) << "\t";
        cout << get<1>(v1[i]) << "\t";
        cout << get<2>(v1[i]) << "\n";
    }

    return 0;
}