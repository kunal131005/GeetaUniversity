#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cb(long long temp) {
    vector<int> p = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    if (temp == 0 || temp == 1) {
        return false;
    }
    for (int ele : p) {
        if (temp == ele) {
            return true;
        }
    }
    for (int ele : p) {
        if (temp % ele == 0) {
            return false;
        }
    }
    return true;
}

bool repeat(vector<bool>& vec, int i, int j) {
    for (int k = i; k < j; k++) {
        if (vec[k] == true) {
            return false;
        }
    }
    return true;
}

int main() {
    int h;
    cin >> h;
    string str;
    cin >> str;
    int count = 0;
    vector<bool> visited(h, false);

    for (int length = 1; length <= h; length++) {
        for (int start = 0; start <= h - length; start++) {
            long long x = stoll(str.substr(start, length));
            int end = start + length;
            if (cb(x) && repeat(visited, start, end)) {
                count++;
                for (int i = start; i < end; i++) {
                    visited[i] = true;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}