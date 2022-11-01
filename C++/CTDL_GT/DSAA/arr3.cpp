/*Nhập vào một số nguyên dương n, và n số nguyên lần lượt là các phần tử trong dãy a. Tiếp theo nhập vào hai số nguyên là k và x (0 ≤ k ≤ n).

Hãy chèn phần tử có giá trị x vào dãy a, ở trước phần tử có chỉ số k và sau phần tử có chỉ số k-1. In mảng kết quả ra màn hình, mỗi số cách nhau bởi một khoảng trắng.

Ví dụ:

Test mẫu 1:

Input	    Output
4
1 2 3 4     1 10 2 3 4 
1 10                    */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int k, x;
    cin >> k >> x;
    for (int i = n; i >= k+1; i--)
    {
        a[i] = a[i-1];
    }
    a[k] = x;
    n++;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
