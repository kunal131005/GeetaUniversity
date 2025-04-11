#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int firstOccurance(vector<int>& a,int t,int i,int n){
	// base case
	if(i==n)return -1;
	// recursive case
	if(a[i]==t)return i; //if found return index of it
	return firstOccurance(a,t,i+1,n); //if not then go further
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
	cout<<firstOccurance(num,target,0,n)<<endl;
}