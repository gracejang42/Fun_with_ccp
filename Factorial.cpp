#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n;
    cout << "Please enter an interger: " << endl;
    cin >> n;
    int z = factorial(n);
    cout << z << endl;

    return 0;
}
int factorial(int n)
{
    int m = n;
    for (int y = 1; y < n; y++)
    { 
        m = m * y;
    }
    return m;
}
