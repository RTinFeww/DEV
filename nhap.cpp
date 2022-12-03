#include <iostream>
using namespace std;

int main() {
    int tong = 0;
    for (int i = 0; i <= 10; ++i)
        if (i % 2 == 0)
            tong += i;
    return 0;
}