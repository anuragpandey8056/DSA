#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
unordered_map<string,int>up;
up.insert({"amit",101});
up.insert({"anurag",102});
up.insert({"hari",103});
up.insert({"harishankar",105});

for (auto p : up){
    cout<<p.first<<"\t"<<p.second<<"\n";
}
cout<<"\n========= find function==========\n";
auto p=up.find("amit");
if (p!=up.end())
{
   cout<<p->first<<"\t"<<p->second<<"\n";
}
else{
    cout<<"not found";
}

// erase command 

up.erase("hari");
cout<<"after deletion of hari\n";
for (auto p : up)
{
   cout<<p.first<<"\t"<<p.second<<"\n"; 
}




return 0 ;
}