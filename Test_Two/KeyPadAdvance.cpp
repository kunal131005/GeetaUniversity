#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> keys = {"", ".@&", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
vector<string> search = {"kartik", "divyam", "sneha", "vansh", "coding"};

void code(string s, int i, string r) {
    if (i == s.size()) {
        for (const string &temp : search) {
            if (temp.find(r) != string::npos) { // Check if r is a substring of temp
                cout << temp << " ";
            }
        }
        cout << endl;
        return;
    }

    int digit = s[i] - '0';
    if (digit >= 0 && digit < keys.size()) { // Corrected boundary condition
        for (char ch : keys[digit]) {
            r.push_back(ch);
            code(s, i + 1, r);
            r.pop_back();
        }
    }
}

int main() {
    string s;
    cin >> s;
    code(s, 0, "");
    return 0;
}
