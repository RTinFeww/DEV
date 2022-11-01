#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int dem = 0;
    while (n!=0)
    {
        dem++;
        n /= 10;
    }
    cout << dem;
    return 0;
}
