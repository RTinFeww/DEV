#include <iostream>
#include <algorithm>
#include <chrono>
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
    auto start = chrono::steady_clock::now();
    //code
    auto end = chrono::steady_clock::now();
    cout << endl << "Execution time: " << chrono::duration<double>(end-start).count() << "s" << endl;
    return 0;
}
    