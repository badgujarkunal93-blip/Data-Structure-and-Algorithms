#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Friend{string name,mobile;};
int main(){
 int n;cout<<"Number of friends: ";cin>>n;vector<Friend> f(n);
 for(auto &x:f){cout<<"Name: ";cin>>ws;getline(cin,x.name);cout<<"Mobile: ";getline(cin,x.mobile);}
 sort(f.begin(),f.end(),[](const Friend&a,const Friend&b){return a.name<b.name;});
 cout<<"Sorted phone book:\n";for(auto x:f)cout<<x.name<<" : "<<x.mobile<<'\n';
 string key;cout<<"Search name: ";getline(cin,key);f.push_back({key,""});
 size_t i=0;while(f[i].name!=key)i++;
 if(i<(size_t)n)cout<<"Found: "<<f[i].name<<" "<<f[i].mobile<<'\n';
 else{char c;cout<<"Not found. Add? (y/n): ";cin>>c;if(c=='y'||c=='Y'){Friend x{key,""};cout<<"Mobile: ";cin>>x.mobile;f.pop_back();f.push_back(x);sort(f.begin(),f.end(),[](const Friend&a,const Friend&b){return a.name<b.name;});cout<<"Added\n";}}
}