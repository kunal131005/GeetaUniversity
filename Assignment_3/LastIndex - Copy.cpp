#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int lastOccuarnce(vector<int>& a,int i,int t,int n){
	if(i==-1)return -1;
	if(a[i]==t)return i;
	return lastOccuarnce(a,i-1,t,n); 
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
	cout<<lastOccuarnce(num,n-1,target,n)<<endl;
}