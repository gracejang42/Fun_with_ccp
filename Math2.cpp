#include <iostream>
using namespace std;

int main()
{
    bool stop = false;
    while (!stop)
    {
        string op;
        int bound;

        cout << "Please enter an operation or Q to quit:";
        cin >> op;

        if (op == "Q")
        {
            stop = true;
        }
        else if (op != "add" && op != "subtract" && op != "multiply" && op != "divide" && op != "modulo")
        {
            cout << "Invalid operation!" << endl;
        }
        else
        {
            cout << "Please enter a bound: ";
            cin >> bound;

            if (op == "add")
            {
                int sum = 0;
                for (int i=0; i<=bound; i++)
                sum += i;
                cout << sum << endl; 
            }
            else if (op == "subtract")
            {
                int difference = 0;
                for (int i=1; i<=bound; i++)
                difference -= i; 
                cout << difference << endl; 
            }
            else if (op == "multiply")
            {
                int product = 0;
                for (int i=2; i<=bound; i++)
                product *= i; 
                cout << product << endl; 
            }
            else if (op == "divide")
            {
                double quotient = 1000000;
                for (int i=1; i<=bound; i++)
                quotient /= i; 
                cout << quotient << endl; 
            }
            else if (op == "modulo")
            {
                int result = 1000000;
                for (int i= 10; i<=bound; i++)
                result %= i; 
                cout << result << endl; 
            }
        }

        return 0;
    }