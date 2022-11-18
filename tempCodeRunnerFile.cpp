#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[])
{
    clock_t start, end;
    start = clock();
    for (int i = 0; i < 100000; cout << i++ << endl)
    end = clock();
    double time_taken = double(end - start)/double(CLOCKS_PER_SEC);
    cout << "Time used: " << time_taken << "s";
    return 0;
}