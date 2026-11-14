#include <iostream>
#include <vector>
using namespace std;
int main(){
 int n; cout<<"Total parking slots: ";cin>>n;if(n<=0)return 1;
 vector<int> a(n,-1); int c,v;
 do{
  cout<<"\n1 Park\n2 Search\n3 Remove\n4 Display\n0 Exit\nChoice: ";cin>>c;
  if(c>=1&&c<=3){cout<<"Vehicle registration number: ";cin>>v;int start=((v%n)+n)%n,found=-1,empty=-1;
   for(int i=0;i<n;i++){int p=(start+i)%n;if(a[p]==v){found=p;break;}if(a[p]==-1&&empty==-1)empty=p;}
   if(c==1){if(empty==-1)cout<<"Parking lot full\n";else{a[empty]=v;cout<<"Parked at slot "<<empty<<'\n';}}
   else if(found==-1)cout<<"Vehicle not found\n";else if(c==2)cout<<"Found at slot "<<found<<'\n';else{a[found]=-1;cout<<"Vehicle removed\n";}
  }else if(c==4){for(int i=0;i<n;i++)cout<<"Slot "<<i<<": "<<(a[i]==-1?-1:a[i])<<'\n';}
 }while(c!=0);
}