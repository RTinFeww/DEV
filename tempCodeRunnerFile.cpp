#include <iostream>
#include <algorithm>
using namespace std;

void xuat(int n, char a, char c)
{
    cout << n << " " << a << " " << c << endl;
}

void chuyendia(int n, char a, char b, char c)
{
    for (int i = 0; i < n; ++i)
    {
        chuyendia(n-1, a, c, b);
        chuyendia(n-1, b, a, c);
        xuat(n, a, c);
        break;
    }
}

int main(int argc, char const *argv[])
{
    int n; cin >> n;
    char a, b, c;
    a = 'A';
    b = 'B';
    c = 'C';
    chuyendia(n, a, b, c);
    return 0;
}