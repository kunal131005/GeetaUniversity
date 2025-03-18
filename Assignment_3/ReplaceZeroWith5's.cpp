#include<iostream>
#include<algorithm>
using namespace std;
int main () {
	int n;
	cin>>n;
	int r=0;
	while(n>0){
		int t=n%10;
		if(t==0){
			t=5;
		}
		r=r*10+t;
		n=n/10;
	}
	int rev_num=0;
	while(r>0){
		rev_num=rev_num*10+r%10;
		r=r/10;
	}
	cout<<rev_num;
}