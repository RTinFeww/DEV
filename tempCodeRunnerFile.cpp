#include <iostream>
#include <algorithm>
#include <chrono>
#include <ctime>
#include <cstring>
#include <cmath>
#include <vector>
#include <map>
#define MAX_SIZE 1e7
#define MIN_SIZE -1e7
#define SIZE_OF_STRING(s) (s.size())
#define SIZE_OF_ARRAY(a)  (sizeof(a)/sizeof(a[0]))
#define RTinFew
using db = double;
using ll = long long;
using namespace std;

int main(int argc, char const *argv[])
{
    #ifndef RTinFew
    freopen("D:\\DEV\\nhap.in","r",stdin);
    freopen("D:\\DEV\\xuat.out","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    clock_t starts, ends;
    starts = clock();
    auto start = chrono::steady_clock::now();
    for (int i = 0; i < 10000; cout << i++ << endl)
    {
        /* code */
    }
    ends = clock();
    double time_taken = double(ends - starts)/double(CLOCKS_PER_SEC);
    cout << "Time used: " << time_taken << "s";
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << chrono::duration<double>(diff).count() << " s" << endl;
    return 0;
}