# DEV
/* include iostream bits/stdc++.h math.h iomanip 
void main 
int float double char string long 
for cout cin endl \n \t new using namespace std
if else setprecision() fixed return system true false pause const
switch case break continue while do
freopen ifstream ofstream input ouput 
    freopen("D:\\DEV\\nhap.in","r",stdin);
    freopen("D:\\DEV\\xuat.out","w",stdout);
close delete NUULL
struct
*/
//INT_MAX INT_MIN
#include <iostream>
#include <algorithm>
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
    clock_t start, end;
    start = clock();
    //code
    end = clock();
    double time_taken = double(end - start)/double(CLOCKS_PER_SEC);
    cout << "Time used: " << time_taken << "s";
    return 0;
}