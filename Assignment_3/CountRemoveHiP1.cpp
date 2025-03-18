#include<iostream>
#include<string>
using namespace std;
void Replacehi(string s,int i){
// BASE case
	if(i>=s.size()-1){
        cout<<s<<endl;
        return ;
    }
	// recursive case

	if(s[i]=='h' and s[i+1]=='i'){
		s.replace(i,2,"bye");
		Replacehi(s,i+3);
	}
	else{
		Replacehi(s,i+1);
	}
}
void Removehi(string s,int i){
	if(i>=s.size()-1){
        cout<<s<<endl;
        return;
    }
	if(s[i]=='h' and s[i+1]=='i'){
		s.erase(i,2);
		Removehi(s,i);
	}
	else{
		Removehi(s,i+1);
	}
    
}
int Counthi(string s,int i){
    if(i>=s.size()-1){
        return 0;
    }

    if(s[i]=='h' and s[i+1]=='i'){
        return 1+Counthi(s,i+2);
    }
    else{
        return Counthi(s,i+1);
    }
}
int main() {
	string s;
	cin>>s;
    cout<<Counthi(s,0)<<endl;
	Removehi(s,0);
	Replacehi(s,0);
}