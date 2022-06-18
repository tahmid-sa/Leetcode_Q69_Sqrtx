#include <iostream>

using namespace std;

int mySqrt(int x) {
    unsigned int sqrt = 0;

    for (unsigned int i = 0; i <= x; i++) {
        if ((i * i) <= x && ((i + 1) * (i + 1)) > x) {
            sqrt = i;
            return sqrt;
        }
    }

    return sqrt;
}

int main()
{
    int x = 2147395600 * 2147395600;

    cout << mySqrt(x);

    return 0;
}