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
	auto start = chrono::high_resolution_clock::now();
	//code
	auto end = chrono::high_resolution_clock::now();
	double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count()*1e-9;
	cout << "Time taken by program is : " << time_taken << " sec" << endl;
	return 0;
}