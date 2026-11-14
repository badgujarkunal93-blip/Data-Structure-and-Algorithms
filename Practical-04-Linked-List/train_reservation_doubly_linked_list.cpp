#include <iostream>
#include <string>
using namespace std;
struct Node{int pnr,age,seat;string passenger,train;Node*prev,*next;};
Node*head=nullptr,*tail=nullptr;
void add(){Node*n=new Node;cout<<"PNR: ";cin>>n->pnr;cout<<"Passenger: ";cin>>ws;getline(cin,n->passenger);cout<<"Age: ";cin>>n->age;cout<<"Train number: ";cin>>n->train;cout<<"Seat number: ";cin>>n->seat;n->prev=tail;n->next=nullptr;if(tail)tail->next=n;else head=n;tail=n;cout<<"Reservation added\n";}
void forward(){for(Node*t=head;t;t=t->next)cout<<t->pnr<<" "<<t->passenger<<" "<<t->train<<" seat "<<t->seat<<'\n';}
void backward(){for(Node*t=tail;t;t=t->prev)cout<<t->pnr<<" "<<t->passenger<<" "<<t->train<<" seat "<<t->seat<<'\n';}
void search(){int p;cout<<"PNR: ";cin>>p;for(Node*t=head;t;t=t->next)if(t->pnr==p){cout<<t->passenger<<" found\n";return;}cout<<"Reservation not found\n";}
void cancel(){int p;cout<<"PNR to cancel: ";cin>>p;Node*t=head;while(t&&t->pnr!=p)t=t->next;if(!t){cout<<"Not found\n";return;}if(t->prev)t->prev->next=t->next;else head=t->next;if(t->next)t->next->prev=t->prev;else tail=t->prev;delete t;cout<<"Cancelled\n";}
int main(){int c;do{cout<<"\n1 Add\n2 Forward display\n3 Backward display\n4 Search\n5 Cancel\n0 Exit\n";cin>>c;if(c==1)add();else if(c==2)forward();else if(c==3)backward();else if(c==4)search();else if(c==5)cancel();}while(c);while(head){Node*t=head;head=head->next;delete t;}}