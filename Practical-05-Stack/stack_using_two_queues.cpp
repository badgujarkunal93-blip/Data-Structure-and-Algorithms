#include <iostream>
#include <queue>
using namespace std;
int main(){queue<int>q1,q2;int c,x;do{cout<<"\nSTACK USING TWO QUEUES\n1.Push 2.Pop 3.Peek 4.Display 0.Exit\nChoice: ";cin>>c;if(c==1){cout<<"Value: ";cin>>x;q2.push(x);while(!q1.empty()){q2.push(q1.front());q1.pop();}swap(q1,q2);}else if(c==2){if(q1.empty())cout<<"Stack empty\n";else{cout<<"Popped "<<q1.front()<<"\n";q1.pop();}}else if(c==3){if(q1.empty())cout<<"Stack empty\n";else cout<<"Top "<<q1.front()<<"\n";}else if(c==4){queue<int>t=q1;while(!t.empty()){cout<<t.front()<<" ";t.pop();}cout<<"\n";}}while(c!=0);}