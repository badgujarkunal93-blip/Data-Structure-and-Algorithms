#include <iostream>
using namespace std;
struct Node{int key;Node*l,*r;Node(int x):key(x),l(nullptr),r(nullptr){}};
Node*insert(Node*t,int x){if(!t)return new Node(x);if(x<t->key)t->l=insert(t->l,x);else if(x>t->key)t->r=insert(t->r,x);return t;}
bool search(Node*t,int x){if(!t)return false;if(t->key==x)return true;return x<t->key?search(t->l,x):search(t->r,x);}
void inorder(Node*t){if(t){inorder(t->l);cout<<t->key<<" ";inorder(t->r);}}
void preorder(Node*t){if(t){cout<<t->key<<" ";preorder(t->l);preorder(t->r);}}
void postorder(Node*t){if(t){postorder(t->l);postorder(t->r);cout<<t->key<<" ";}}
void clear(Node*t){if(t){clear(t->l);clear(t->r);delete t;}}
int main(){Node*root=nullptr;int c,x;do{cout<<"\nBINARY SEARCH TREE\n1.Insert 2.Search 3.Inorder 4.Preorder 5.Postorder 0.Exit\nChoice: ";cin>>c;if(c==1){cin>>x;root=insert(root,x);}else if(c==2){cin>>x;cout<<(search(root,x)?"Found\n":"Not found\n");}else if(c==3){inorder(root);cout<<"\n";}else if(c==4){preorder(root);cout<<"\n";}else if(c==5){postorder(root);cout<<"\n";}}while(c!=0);clear(root);}