#include <iostream>
#include <string>
using namespace std;
struct Node{string name,phone;int duration;Node*next;};
Node*head=nullptr;
void add(){Node*n=new Node;cout<<"Caller name: ";cin>>ws;getline(cin,n->name);cout<<"Phone: ";getline(cin,n->phone);cout<<"Duration (minutes): ";cin>>n->duration;n->next=nullptr;if(!head)head=n;else{Node*t=head;while(t->next)t=t->next;t->next=n;}cout<<"Call added\n";}
void show(){if(!head)cout<<"Call log empty\n";for(Node*t=head;t;t=t->next)cout<<t->name<<" | "<<t->phone<<" | "<<t->duration<<" min\n";}
void search(){string p;cout<<"Phone to search: ";cin>>p;for(Node*t=head;t;t=t->next)if(t->phone==p){cout<<t->name<<" "<<t->duration<<" min\n";return;}cout<<"Not found\n";}
void erase(){string p;cout<<"Phone to delete: ";cin>>p;Node*t=head,*prev=nullptr;while(t&&t->phone!=p){prev=t;t=t->next;}if(!t){cout<<"Not found\n";return;}if(prev)prev->next=t->next;else head=t->next;delete t;cout<<"Deleted\n";}
int main(){int c;do{cout<<"\n1 Add Call\n2 Display\n3 Search\n4 Delete\n0 Exit\n";cin>>c;if(c==1)add();else if(c==2)show();else if(c==3)search();else if(c==4)erase();}while(c);while(head){Node*t=head;head=head->next;delete t;}}