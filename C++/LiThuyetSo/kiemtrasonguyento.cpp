#include <iostream>
#include <cmath>
#define RTinFew
using namespace std;

int main(int argc, char const *argv[])
{
	#ifndef RTinFew
    freopen("D:\\DEV\\nhap.in", "r", stdin);
    freopen("D:\\DEV\\xuat.out", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int n; cin >> n;
	bool check = true;
	for (int i = 2; i <= n; ++i)
	{
		for(int j = 2; j <= sqrt(i); ++j) {
        	if(i % j == 0) {
        		check = false;
        		break;
        	}
        	else check = true;
        }
        if (check == true) cout << i << " ";
	}
	return 0;
}