#include <deque>
#include <iostream>
#include <string>
using namespace std;
struct Task{string name;int priority;};
int main(){deque<Task>tasks;int c,p;string name;do{cout<<"\n1 Add at Front\n2 Add at Rear\n3 Process Highest Priority\n4 Display\n0 Exit\n";cin>>c;if(c==1||c==2){cout<<"Task name: ";cin>>ws;getline(cin,name);cout<<"Priority (1 High, 2 Medium, 3 Low): ";cin>>p;if(p<1||p>3)cout<<"Invalid priority\n";else{Task t{name,p};if(c==1)tasks.push_front(t);else tasks.push_back(t);}}else if(c==3){if(tasks.empty())cout<<"No tasks\n";else{auto it=tasks.begin();for(auto i=tasks.begin();i!=tasks.end();++i)if(i->priority<it->priority)it=i;cout<<"Processing "<<it->name<<'\n';tasks.erase(it);}}else if(c==4)for(auto t:tasks)cout<<t.name<<" | Priority "<<t.priority<<'\n';}while(c);}