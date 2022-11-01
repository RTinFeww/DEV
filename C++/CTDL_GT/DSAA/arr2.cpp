/*
Nhập vào một số nguyên dương n, và n số nguyên lần lượt là các phần tử trong dãy a.
Hãy thay đổi giá trị của mỗi phần tử thành bình phương của chính nó, sau đó in mảng đó ra màn hình (mỗi phần tử cách nhau bởi một khoảng trắng).

Ví dụ:

Test mẫu 1:

Input	        Input
4
1 3 5 -3        1 9 25 9 
*/

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
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] * a[i];
        cout << a[i] << " ";
    }
    return 0;
}
