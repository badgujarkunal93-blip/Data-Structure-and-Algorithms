#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
 int n; cout<<"Enter number of subjects: "; cin>>n;
 if(n<=0) return 1;
 vector<int> marks(n); int total=0, high=0, low=100;
 for(int i=0;i<n;i++){ cout<<"Subject "<<i+1<<": "; cin>>marks[i]; if(marks[i]<0||marks[i]>100)return 1; total+=marks[i]; high=max(high,marks[i]); low=min(low,marks[i]); }
 double avg=(double)total/n;
 cout<<fixed<<setprecision(2)<<"Total: "<<total<<"\nAverage: "<<avg<<"\nHighest: "<<high<<"\nLowest: "<<low<<"\nGrade: ";
 if(avg>=90)cout<<"A+"; else if(avg>=80)cout<<"A"; else if(avg>=70)cout<<"B"; else if(avg>=60)cout<<"C"; else if(avg>=40)cout<<"D"; else cout<<"Fail";
 cout<<endl;
}