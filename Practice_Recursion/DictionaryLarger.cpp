#include <iostream>
#include <string>
using namespace std;

void Order(string s, int i, const string& r) {
    if (i == s.size()) {
        if (s > r) {
            cout << s << " ";
        }
        return;
    }

    for (int j = i; j < s.size(); j++) {
        swap(s[i], s[j]);
        Order(s, i + 1, r);
        swap(s[i], s[j]);
    }
}

int main() {
    string s;
    cin >> s;
    string r = s;
    Order(s, 0, r);
    cout << endl;
    return 0;
}