#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int sum = 0;
    while (n) // <=> while (n!=0)
    {
        sum += n%10;
        n /= 10;
    }
    cout << sum;
    return 0;
}
