#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int sentinelSearch(vector<int>a,int key){if(a.empty())return -1;a.push_back(key);int i=0;while(a[i]!=key)i++;return i==(int)a.size()-1?-1:i;}
int main(){int n,c,k;cout<<"Number of elements: ";cin>>n;if(n<0)return 0;vector<int>a(n);for(int&x:a)cin>>x;do{cout<<"\n1.Sentinel Search 2.Bubble Sort 3.Selection Sort 4.Display 0.Exit\nChoice: ";cin>>c;if(c==1){cout<<"Key: ";cin>>k;int p=sentinelSearch(a,k);if(p<0)cout<<"Not found\n";else cout<<"Found at position "<<p+1<<"\n";}else if(c==2){for(int i=0;i<n-1;i++)for(int j=0;j<n-i-1;j++)if(a[j]>a[j+1])swap(a[j],a[j+1]);}else if(c==3){for(int i=0;i<n-1;i++){int m=i;for(int j=i+1;j<n;j++)if(a[j]<a[m])m=j;swap(a[i],a[m]);}}else if(c==4){for(int x:a)cout<<x<<" ";cout<<"\n";}}while(c!=0);}