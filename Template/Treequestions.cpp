// to count leave node of tree

// #include<iostream>
// using namespace std;
// class node{
//     public:
//     node *l,*r;
//     int data;
//     node(int d){
//         data=d;
//         l=NULL;
//         r=NULL;
//     }
// };
// void cnt (node *n,int &c){
//     if (n==NULL)
//     {
//        return;
//     }
//     cnt(n->l,c);
//     cnt(n->r,c);

//     if (n->l==NULL && n->r==NULL)
//     {
//         c++;
//     }   
    
// }

// int main()
// {
// int c=0;
// node *n=new node(10);
// n->l=new node(20);
// n->r=new node (30);
// cnt(n,c);
// cout<<"leaves"<<c;


// return 0 ;
// }



// to count total node of tree


// #include<iostream>
// using namespace std;
// class node{
//     public:
//     node *l,*r;
//     int data;
//     node(int d){
//         data=d;
//         l=NULL;
//         r=NULL;
//     }
// };
// void cnt (node *n,int &c){
//     if (n==NULL)
//     {
//        return;
//     }
//     cnt(n->l,c);
//     cnt(n->r,c);

//     if (n->l!=NULL || n->r!=NULL||n->data)
//     {
//         c++;
//     }   
    
// }

// int main()
// {
// int c=0;
// node *n=new node(10);
// n->l=new node(20);
// n->r=new node (30);
// cnt(n,c);
// cout<<"total node "<<c;


// return 0 ;
// }


// wap to display the height of tree

#include<iostream>
using namespace std;
class node{
    public:
    node *l,*r;
    int data;
    node(int d){
        data=d;
        l=NULL;
        r=NULL;
    }
};
void cnt (node *n,int &c,int &d){
    if (n==NULL)
    {
       return;
    }
   
    
    cnt(n->l,c,d);

      if (n->l!=NULL)
    {
        c++;
         cout<<"height"<<c;
    }   
    
    cnt(n->r,c,d);
    if (n->r!=NULL )
    {
        d++;
        cout<<"height"<<d;

    } 

    if (c>d)
    {
        cout<<"height"<<c;
    }
    else{
        cout<<"height"<<d;
    }
      
  
}

int main()
{
int c=0;
int d=0;
node *n=new node(10);
n->l=new node(20);
n->r=new node (30);
n->l->r=new node(4);
n->l->l->r=new node(4);

cnt(n,c,d);



return 0 ;
}