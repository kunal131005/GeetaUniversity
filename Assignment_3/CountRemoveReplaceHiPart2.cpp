#include<iostream>
#include<string>

using namespace std;

int main() {
	string str; cin >> str;
	int size = str.size();

	int count = 0;
	string remRes, res;
	int ptr = 0;
	while(ptr<size) {
		char currEle = str[ptr];
		char nxtEle = ptr+1>=size ? currEle : str[ptr+1];
		char nxtEle2 = ptr+2>=size ? nxtEle : str[ptr+2];

		if(currEle == 'h' && nxtEle == 'i' && nxtEle2 != 't') {
			// We've found hit boys!
			count += 1;
			res.append("bye");
			ptr+=1;
		} else  {
			remRes+=str[ptr];
			res+=str[ptr];
		}

		ptr+=1;
	}

	cout << count << endl << remRes << endl << res << endl;

	return 0;
}
// #include <iostream>
// #include <string>
// using namespace std;
// void Replacehi(string s, int i)
// {
// 	if (i >= s.size() - 1)
// 	{
// 		cout << s << endl;
// 		return;
// 	}

// 	if (s[i] == 'h' and s[i + 1] == 'i' and (i + 2 >= s.size() || s[i + 2] != 't'))
// 	{
// 		s.replace(i, 2, "bye");
// 		Replacehi(s, i + 3);
// 	}
// 	else
// 	{
// 		Replacehi(s, i + 1);
// 	}
// }
// void Removehi(string s, int i)
// {
// 	if (i >= s.size() - 1)
// 	{
// 		cout << s << endl;
// 		return;
// 	}

// 	if (s[i] == 'h' and s[i + 1] == 'i' and (i + 2 >= s.size() || s[i + 2] != 't'))
// 	{
// 		s.erase(i, 2);
// 		Removehi(s, i);
// 	}
// 	else
// 	{
// 		Removehi(s, i + 1);
// 	}
// }

// int Counthi(string s, int i)
// {
// 	if (i >= s.size() - 1)
// 		return 0;

// 	if (s[i] == 'h' and s[i + 1] == 'i' and (i + 2 >= s.size() || s[i + 2] != 't'))
// 	{
// 		return 1 + Counthi(s, i + 3);
// 	}
// 	else
// 	{
// 		return Counthi(s, i + 1);
// 	}
// }
// int main()
// {
// 	string s;
// 	getline(cin, s);

// 	cout << Counthi(s, 0) << endl;
// 	Removehi(s, 0);
// 	Replacehi(s, 0);
// }