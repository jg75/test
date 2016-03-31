#include <iostream>

using namespace std;

int GCD(int, int);

int main()
{
    int a, b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << GCD(a, b) << endl;

    return 0;
}

int GCD(int a, int b)
// Does really cool stuff that ancient dudes thought up
{
    if (b < a)
    {
        return GCD(b, a);
    }

    int r = b % a;

    if (r == 0)
    {
        return a;
    }

    return GCD(r, a);
}
