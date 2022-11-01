#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    int i = 0;
    while(i<=n) //Đây là thuật toán tự tư duy, có thể đi theo hướng khác
    {
        if (a[i] != a[i]+1 || a[i] == a[i+1])
            if (a[i] != a[i+1]-1 && a[i] != a[i+1])
            {
                cout << a[i]+1 << " "; 
                break;
            }
        i++;
    }
    return 0;
}