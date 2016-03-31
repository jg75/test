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
// Normalize the input so that the smaller number comes first
// so that a = smaller number and b = bigger number.
// Check the remainder of b / a.
//     If it's not zero replace b with a and a with the non-zero remainder
//     and then retry.
// Otherwise,
//     If it's 0 then the answer is a.
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
