#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    string date;
    cin >> date;

    string year = "";
    string month = "";
    string day = "";
    for (int i = 0; i < date.size(); i++)
    {
        if (i < 4)
        {
            year += date[i];
        }
        else if (i >= 5 and i <= 6)
        {
            month += date[i];
        }
        else if (i >= 8 and i <= 9)
        {
            day += date[i];
        }
    }
    cout << year << " " << month << " " << day << endl;
    int y = stoi(year);
    int m = stoi(month);
    int d = stoi(day);
    cout << y << " " << m << " " << d << endl;
    vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (y % 400 == 0 or (y % 4 == 0 and y % 100 != 0))
    {
        days[1] = 29;
    }
    int totaldays = 0;
    for (int i = 0; i < m - 1; i++)
    {
        totaldays += days[i];
    }
    totaldays += d;
    cout << totaldays;
    return 0;
}