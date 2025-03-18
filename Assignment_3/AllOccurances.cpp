#include<iostream>
#include<vector>
using namespace std;
void Occurance(vector<int>& a,int i,int t,int n){
	if(i==n)return ;
	if(a[i]==t) cout<<i<<" ";
	Occurance(a,i+1,t,n);
}
int main() {
	int n;
	cin>>n;
	vector<int> num(n);
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	int target;
	cin>>target;
	Occurance(num,0,target,n);
}