#include <cctype>
#include <deque>
#include <iostream>
#include <string>
using namespace std;
int main(){string s;deque<char>d;cout<<"Enter a string: ";getline(cin,s);for(unsigned char c:s)if(!isspace(c))d.push_back((char)tolower(c));bool ok=true;while(d.size()>1){if(d.front()!=d.back()){ok=false;break;}d.pop_front();d.pop_back();}cout<<(ok?"Palindrome\n":"Not a palindrome\n");}