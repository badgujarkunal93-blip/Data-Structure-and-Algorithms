#include <iostream>
#include <string>
using namespace std;
struct Node{int id;string song,artist,duration;Node*next;};Node*tail=nullptr;
void add(){Node*n=new Node;cout<<"Song ID: ";cin>>n->id;cout<<"Song: ";cin>>ws;getline(cin,n->song);cout<<"Artist: ";getline(cin,n->artist);cout<<"Duration: ";getline(cin,n->duration);if(!tail){tail=n;n->next=n;}else{n->next=tail->next;tail->next=n;tail=n;}cout<<"Song added\n";}
void display(){if(!tail){cout<<"Playlist empty\n";return;}Node*t=tail->next;do{cout<<t->id<<" "<<t->song<<" - "<<t->artist<<" ("<<t->duration<<")\n";t=t->next;}while(t!=tail->next);}
void play(){static Node*cur=nullptr;if(!tail){cout<<"Playlist empty\n";return;}cur=cur?cur->next:tail->next;cout<<"Now playing: "<<cur->song<<"\n";}
void search(){int id;cout<<"Song ID: ";cin>>id;if(!tail)return;Node*t=tail->next;do{if(t->id==id){cout<<"Found "<<t->song<<"\n";return;}t=t->next;}while(t!=tail->next);cout<<"Not found\n";}
void removeSong(){int id;cout<<"ID to delete: ";cin>>id;if(!tail)return;Node*cur=tail->next,*prev=tail;do{if(cur->id==id){if(cur==prev)tail=nullptr;else{prev->next=cur->next;if(cur==tail)tail=prev;}delete cur;cout<<"Deleted\n";return;}prev=cur;cur=cur->next;}while(cur!=tail->next);cout<<"Not found\n";}
int main(){int c;do{cout<<"\n1 Add Song\n2 Display Playlist\n3 Play Next\n4 Search\n5 Delete\n0 Exit\n";cin>>c;if(c==1)add();else if(c==2)display();else if(c==3)play();else if(c==4)search();else if(c==5)removeSong();}while(c);if(tail){Node*start=tail->next;tail->next=nullptr;while(start){Node*t=start;start=start->next;delete t;}}}