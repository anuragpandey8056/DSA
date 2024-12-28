// #include<iostream>
// #include <vector>
// #include<map>
// using namespace std;

// int main()
// {
// map <int,int>mp;
// mp.insert({10,20});
// mp.insert({40,50});
// mp.insert({60,70});
// mp.insert({90,80});
// mp.find(20);
// for (auto p : mp)
// {
//    cout<<p.first<<"\t"<<p.second<<"\n";
// }
// return 0 ;
// }

// ============two pair sum=======================

// #include <iostream>
// #include <bits/stdc++.h> // all class tamplate exits from it  iostream ki bhi jarurat mhi isko bs likh lo
// #include <vector>
// #include <map>
// using namespace std;
// void pairsome(vector<int> &v, int t)
// {
//    int n, k;
//    map<int, int> mp;
//    for (int i = 0; i < v.size(); i++)
//    {
//       n = v[i];
//       k = t - n;
//       if (mp.find(k) !=mp.end())
//       {
//          cout << mp[k] << "," << i << "\n";
//       }
//       mp[n] = i;
//    }
// }
// int main()
// {
//    vector<int> v{1, 4, 6, 12, 8, 4, 4};
//    int target = 8;
//    pairsome(v, target);
//    return 0;
// }

// ========================convrt no into roman
// #include<iostream>
// #include<unordered_map>
// using namespace std;
// void roman(string &s){
//    unordered_map<char,int>up{{'I',1},{'V',5},{'X',10},{'L',50}};
//    int x=0;
//    int prev = 0;

//    for (int i = s.size()-1;i>=0; --i)
//    {
//       if (prev>up[s[i]])
//       {
//         x=x-up[s[i]];
//       }
//       else{
//          x=x+up[s[i]];
//       }
//       prev=x;
//    }
//    cout<<x;
// }
// int main()
// {
// string s="IV";
// roman(s);
// return 0 ;
// }

// WAP to resturn the maximum sum of given window size

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int maxsum(vector<int> &v, int w)
{
   int sum = 0;
   for (int i = 0; i < w; i++)
   {
      sum = sum + v[i];
   }
   int k = w;
   int x = 0;
   int mx = INT_MIN;
   while (k < v.size())
   {
      sum = sum - v[x];
      sum = sum + v[k];
      mx = sum > mx ? sum : mx;
      x++;
      k++;
   }
   return mx;
}
int main()
{
   vector<int> v{2, 1, 4, -1, 3, 7};
   int w = 2;
   cout << maxsum(v, w);

   return 0;
}

// binarty tree making




// #include <iostream>
// using namespace std;
// class node
// {
// public:
//    int data;
//    node *left;
//    node *right;
//    node(int val)
//    {
//       data = val;
//       left = NULL;
//       right = NULL;
//    }
// };
// node *createnode(node *root)
// {
//    int d;
//    cout << "enter a value \n";
//    cin >> d;
//    root = new node(d);
//    if (d == -1)

//    {
//       return NULL;
//    }
//    cout << "enter a value of left of " << d << endl;
//    root->left = createnode(root->left);
//    cout << "enter a value of right of " << d << endl;
//    root->right = createnode(root->right);
//    return root;
// }

// void preorder(node *n){
//    if (n==NULL)
//    {
//       return;
//    }
//    cout<<n->data<<"\t";
//    preorder(n->left);
//    preorder(n->right);

// }
// void Inorder(node *n){
//    if (n==NULL)
//    {
//       return;
//    }
//    Inorder(n->left);
//    cout<<n->data<<"\t";
//    Inorder(n->right);

// }
// void postorder(node *n){
//    if (n==NULL)
//    {
//       return;
//    }
//    postorder(n->left);
//    postorder(n->right);
//    cout<<n->data<<"\t";

// }

// int main()
// {
//    node *root = NULL;
//    root = createnode(root);
//    preorder(root);
//    postorder(root);
//    Inorder(root);

//    return 0;
// }
