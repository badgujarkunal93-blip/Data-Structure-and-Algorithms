#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){vector<int>a;int c,x,p;do{cout<<"\n1.Insert 2.Delete 3.Search 4.Update 5.Display 6.Sort 0.Exit\nChoice: ";cin>>c;switch(c){
case 1:cout<<"Value and 1-based position: ";cin>>x>>p;if(p<1||p>(int)a.size()+1)cout<<"Invalid position\n";else a.insert(a.begin()+p-1,x);break;
case 2:cout<<"Position: ";cin>>p;if(p<1||p>(int)a.size())cout<<"Invalid position\n";else a.erase(a.begin()+p-1);break;
case 3:cout<<"Value: ";cin>>x;{auto i=find(a.begin(),a.end(),x);if(i==a.end())cout<<"Not found\n";else cout<<"Found at position "<<i-a.begin()+1<<"\n";}break;
case 4:cout<<"Position and new value: ";cin>>p>>x;if(p<1||p>(int)a.size())cout<<"Invalid position\n";else a[p-1]=x;break;
case 5:for(int v:a)cout<<v<<" ";cout<<"\n";break;
case 6:sort(a.begin(),a.end());cout<<"Sorted\n";break;
}}while(c!=0);}