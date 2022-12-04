#include <bits/stdc++.h>
#define RTinFew
using namespace std;

int main()
{
    #ifndef RTinFew
    freopen("nhap.in", "r", stdin);
    freopen("xuat.out", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, m, c=0, d=0;
        cin >> n >> m;
        int a[n]; //An
        int b[n]; //Bình
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            c = max(a[i],c);
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
            d = max(b[i],d);
        }
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        bool check = true;
        while(m--){
            for (int i = 0; i < n; ++i)
            {
                if(c>d) {
                    c += a[i];
                    d += b[i];
                    check = true;
                }
                else {
                    check = false;
                    break;
                }
            }
        }
        if (check == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}