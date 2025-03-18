#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(int a,int b){
	return to_string(a)<to_string(b);
}
vector<int> Order(int n,int i){
	if(i==n+1)return {};
	vector<int> result=Order(n,i+1);
	result.insert(result.begin(),i);
	return result;
}
int main() {
	int n;
	cin>>n;
	vector<int> r=Order(n,0);
	sort(r.begin(),r.end(),compare);
	for(int ele:r){
		cout<<ele<<" ";
	}

}