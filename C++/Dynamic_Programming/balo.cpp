#include <iostream>
#include <algorithm>
#include <vector>
#define RTinFew
using namespace std;

int main(int argc, char const *argv[])
{
    #ifndef RTinFew
    freopen("nhap.in","r",stdin);
    freopen("xuat.out","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,w; cin >> n >> w;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i] < a[j]) swap(a[i],a[j]);      
        }   
    }
    for (int i = 0; i < n; i++)
    {
        if (sum+a[i] <= w)
            sum += a[i];
    }
    cout << sum;
    return 0;
}
