#include <iostream>
#include <cmath>
using namespace std;

int main()
{
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