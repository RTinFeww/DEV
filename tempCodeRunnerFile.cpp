#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float a, b, c, delta, x1, x2;
    cin >> a >> b >> c;
    delta = pow(b,2) - 4*a*c;
    if (a != 0)
    {
        if (delta > 0)
        {
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            cout << "x1 = " << x1 << endl << "x2 = " << x2;
        }
        else if (delta == 0)
        {
            cout << "x1 = x2 = " << -b/(2*a);
        }
        else cout << "Phương trình vô nghiệm";
    }
    else cout << "Phương trình không phải phương trình bậc hai";
    return 0;
}