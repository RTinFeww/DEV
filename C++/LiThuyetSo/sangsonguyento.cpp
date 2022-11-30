#include <iostream>
#include <cmath>
#define RTinFew
using namespace std;

const int maxn = 10000000;
bool nt[maxn];

void sang(){
    for (int i = 0; i <= maxn; ++i)
        nt[i] = true;
    //memset(nt, true, sizeof(nt));
    nt[0] = nt[1] = false;
    for (int i = 2; i <= sqrt(maxn); ++i)
        if(nt[i])
            for (int j = i*i; j <= maxn; j+=i)
                nt[j] = false;
}

int main()
{
    #ifndef RTinFew
    freopen("D:\\DEV\\nhap.in", "r", stdin);
    freopen("D:\\DEV\\xuat.out", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sang();
    int n; cin >> n;
    for (int i = 2; i <= n; ++i)
    {
        if (nt[i]) cout << i << " ";
    }
    return 0;
}