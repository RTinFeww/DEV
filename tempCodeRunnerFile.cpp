#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;

const int maxn = (int)1e6;
bool isPrime[maxn+1];
void sieve() {
    for(int i = 0; i <= maxn;++i) {
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i * i <= maxn; ++i) {
        if(isPrime[i] == true) {
            for(int j = i * i; j <= maxn; j += i)
                isPrime[j] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    sieve();
    for (int i = 1; i <= n/2; i++)
    {
        if(isPrime[i] && isPrime[n-i])
            cout << i << " " << n-i << endl;
    }
	return 0;
}