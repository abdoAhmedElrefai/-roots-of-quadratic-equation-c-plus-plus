#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, x1, x2, d, r, i;
    cout << "Enter  a, b , c ";
    cin >> a >> b >> c;
    d = b*b - 4*a*c;

    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (d == 0) {
        cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        r = -b/(2*a);
        i =sqrt(-d)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << r << "+" << i << "i" << endl;
        cout << "x2 = " << r << "-" << i << "i" << endl;
    }

    return 0;
}
