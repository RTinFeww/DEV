#include <bits/stdc++.h>
using namespace std;

bool checknt(int n){
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); ++i)
        if (n % i == 0) return false;
    return true;
}

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 2; i <= n; ++i)
        if (checknt(i)) cout << i << " ";
    return 0;
}
