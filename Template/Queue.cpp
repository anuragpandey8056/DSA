#include<iostream>
#include<queue>   // it follows the fifo
using namespace std;

int main()
{
// single ended queue
// queue<int>q;
// q.push(101);
// q.push(102);
// q.push(103);
// q.push(104);

// while (!q.empty())
// {
//    cout<<q.front()<<"\t";
//    q.pop();
// }


// double ended queue
// deque<int>q;
// q.push_front(103);
// q.push_back(102);
// q.push_back(104);
// q.push_front(101);

// while (!q.empty())
// {
//    cout<<q.front()<<"\t";
//    q.pop_front();

   
// }
// return 0 ;
// }



// double ended queue
deque<int>q;
q.push_front(103);
q.push_back(102);
q.push_back(104);
q.push_front(101);

while (!q.empty())
{
   cout<<q.back()<<"\t";
   q.pop_back();

   
}
return 0 ;
}
