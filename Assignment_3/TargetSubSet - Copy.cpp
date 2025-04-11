#include<iostream>
#include<vector>
using namespace std;
int count=0;
void subset(vector<int>& num,int i,int n,vector<int>& r,int t){
	if(i==n){
		int sum=0;
		for(int ele:r){
			sum+=ele;
		}
		if(sum==t){
			for(int ele:r){
				cout<<ele<<" ";
			}
			count++;
			cout<<" ";
		}
		return;
	}
	r.push_back(num[i]);
	subset(num,i+1,n,r,t);
	r.pop_back();
	subset(num,i+1,n,r,t);
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
	vector<int> result;
	subset(num,0,n,result,target);
	cout<<endl<<count;
}