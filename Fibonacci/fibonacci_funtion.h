#include <iostream>

using namespace std;

namespace Fibonacci {
    long int result;

    class Fibonacci {
        int Fib(int n) {
            if (n < 0) {
                cout << "incorrect input" << endl;
            }
            else if (n == 1) {
                return (0);
            }
            else if (n == 2) {
                return (1);
            }
            else {
                return (Fib(n - 1) + Fib(n - 2));
            }
        }
    };
}