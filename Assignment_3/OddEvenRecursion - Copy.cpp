#include<iostream>
using namespace std;
void oddprint(int n,int i){
	if(i<1)return;
	cout<<i<<endl;
	oddprint(n,i-2);
}
void evenprint(int n,int i){
	if(i>n)return;
	cout<<i<<endl;
	evenprint(n,i+2);
}
int main() {
	int n;
	cin>>n;
	if(n%2==0){
		oddprint(n,n-1);
	}
	else{
		oddprint(n,n);
	}
	evenprint(n,2);
}