#include <iostream>
#include <string>
using namespace std;
void generate(int n, int o, int c, int i, string r)
{
    if (i == 2 * n)
    {
        cout << r << endl;
        return;
    }

    if (o > c)
    {
        generate(n, o, c + 1, i + 1, r + ')');
    }
    if (o < n)
    {
        generate(n, o + 1, c, i + 1, r + '(');
    }
}
int main()
{
    int n;
    cin >> n;

    generate(n, 0, 0, 0, "");
}