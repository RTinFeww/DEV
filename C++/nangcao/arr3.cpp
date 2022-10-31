/*Có N gói kẹo, gói thứ i có Aicái kẹo. Không được bóc bất 
kỳ một gói kẹo nào, cần chia N gói kẹo thành hai 
phần sao cho độ chênh lệch số kẹo giữa hai gói là ít 
nhất.
Dữ liệu vào trong file “chiakeo.inp” có dạng :
– Dòng đầu tiên là số N(N<=100);
– Dòng thứ hai là N số Ai(i=1, 2,.., N; Ai <=100).
Kết quả ra file “chiakeo.out” có dạng:
– Dòng đầu là độ chênh lệch nhỏ nhất giữa hai phần có thể 
được.
– 2 dòng tiếp theo là 2 đoạn đã được chia ra sao cho chênh
 lệch là ít nhất
*/

#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <vector>
#include <map>
#define ll long long;
#define ull unsigned long long;
#define MAX_SIZE 1e7
#define MIN_SIZE -1e7
#define SIZE_OF_STRING(s) (s.size())
#define SIZE_OF_ARRAY(a)  (sizeof(a)/sizeof(a[0]))
using db = double;
using namespace std;

int tongsosau(int i, int a[], int n, int &s)
{
    int f = i;
    for (int i = f ; i < n; ++i)
    {
        s += a[i];
    }
    return s;
}

int main(int argc, char const *argv[])
{
    // freopen("D:\\DEV\\nhap.in","r",stdin);
    // freopen("D:\\DEV\\xuat.out","w",stdout);
    int n, s=0, tmp1, tmp2;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a, a+n, greater<int>());
    for (int i = 0; i < n; ++i)
    {
        tmp1 = a[0];
        tmp2 = a[1];
        continue;
    }
    
    for (int i = 2; i < n; ++i)
    {
        if (tongsosau(i,a,n,s) > tmp2 or tmp2 < tmp1)
            tmp2 += a[i];
        else if (tmp1 < tmp2)
            tmp1 += a[i];
        s = 0;
    }
    cout << tmp2 << " " << tmp1;
    return 0;
}