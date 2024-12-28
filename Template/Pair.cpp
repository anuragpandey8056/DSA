#include <iostream>
using namespace std;
#include <vector>
int main()
{
   /*pair<int,string>p;
   p = make_pair(110,"Ravi");
   cout<<p.first<<"\n";
   cout<<p.second;*/

   // vector of pairs
   vector<pair<int, string>> v;
   int t;
   int rollno;
   string name;
   cout << "Enter number of records\n";
   cin >> t;
   for (int i = 1; i <= t; i++)
   {
      cout << "Enter Roll no.\n";
      cin >> rollno;
      cout << "Enter name \n";
      cin >> name;
      v.push_back({rollno, name});
   }
   for (int i = 0; i < v.size(); i++)
   {
      cout << v[i].first << "\t" << v[i].second << "\n";
   }
}
