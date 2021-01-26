// start developing : 21-01-2021
// First deadline : 23-01-2021(Calculator(*,+,-,%,!,/)+specialCalculator(pn,le,fc)) {Non-debuged}
// basicMath namespace

#include <iostream>

using namespace std;

namespace bMath {
    
    //Calculator class
    class Calculator {
        /* Calculator() {
            cout << "*Operator information*" << endl;
            cout << "+ : add numbers" << endl;
            cout << "- : substract numbers" << endl;
            cout << "* : multiply numbers" << endl;
            cout << "% : the rest of the divided numbers" << endl;
            cout << "! : factorial(second number will be ignored)" << endl;
            } */

        //private
        // variables are private excepting a,b,o(because they have to changed by user)
        private:
        int sum, fac;
        
        // and baseCalc() is also private funtion becuase they dont have to call out of the object
        //base calculating coe
        inline int baseCalc(void){
            // I made code in inline funtion because there're two times using of code
            // switch loop
            if (o == '+') {
                sum = a + b;
            }

            else if (o == '-') {
                sum = a - b;
            }

            else if (o == '*') {
                sum = a * b;
            }

            else if (o == '/') {
                sum = a / b;
            }

            else if (o == '%') {
                sum = a % b;
            }

            else if (o == '!') {
                for (int i = 1; i == a; i++) {
                    fac *= i;
                }

                sum = fac;
            }

            else {
                cout << "error:while processing inline calculate..." << endl;
            }

            return (sum);
        }

        // public
        // a, b, o is public variable becuase users have to set their value
        // now the calculate and inline-calculate funtions are public because users have to call 'em to use it
        public:
        int a, b;
        char o;

        // normal calculate funtion
        int calculate(void) {

                // input first number(a, int)
                cout << "First Number: ";
                cin >> a;

                // inuput second number(b, int)
                cout << "Second Number: ";
                cin >> b;

                // input operator(c, char)
                cout << "Operator: ";
                cin >> o;
            
            //calculate numbers
            baseCalc();
        }

        // inline calculate funtion
        inline int calculate(int a, int b, char o) {
            // calculate numbers as same as not-inline calculate funtion
            baseCalc();
        }
    };
   
    //special calculator class
    class specialCalculator {

        public:
        /* specialCalculator() {
            cout << "*command usage*" << endl;
            cout << "pn : judge is the number 'prime number'" << endl;
            cout << "le" : solve Liear equation << endl;
            cout << "fc : fraction calculating" << endl;
        } */

        // base variable
        int x, y;

        // for fraction
        int up, down;

        // for equation
        int lcc, rcc, lvct, rvct;
                // *prime number funtion*
        // prime number-normal
        bool primeNumber(void) {
            //input number
            cout << "First Number";
            cin >> x;

            // 0 and 1 isnt prime number
            if ((x == 1)) {
                b = false;
            }

            // negative number and 0 isnt prime number
            else if (x <= 0) {
                b = false;
            }
            
            // 2  is prime number
            else if (x == 2) {
                b = true;
            }

            // if the rest of divided 2, its prime number
            else if ((x % 2) == 0) {
                b = true;
            }

            // or not, its not prime number
            else if ((x % 2) == 1) {
                b == false;
            }

            // were same numbers multiplied, it is not prime number
            else if (b = false) {
             i = 1;
                do {
                 j = i * i;
                    if  (x == j) {
                     b = true;
                        break;
                    }
                    else if  (x < j) {
                     b = false;
                        break;
                    }
                    
                 i++;
                } while (i == 128);
            }

            // all prime numbers are made with 6n+1 or 6n-1
            else if (b = false) {
                if (primeCalculatePlus() == x) {
                 b = true;
                }

                else if (primeCalculateMinus() == x) {
                 b = true;
                }
            }

            // otherwise, its not prime number
            else {
             b = false;
            }
        
            // return b(bool)
            return b;
            }
        

        //prime number-inline
        inline bool primeNumber(int x) {
            // 0 and 1 isnt prime number
            if ((x == 1)) {
             b = false;
            }

            // negative number and 0 isnt prime number
            else if (x <= 0) {
             b = false;
            }
            
            // 2  is prime number
            else if (x == 2) {
             b = true;
            }

            // if the rest of divided 2, its prime number
            else if ((x % 2) == 0) {
             b = true;
            }

            // or not, its not prime number
            else if ((x % 2) == 1) {
             b == false;
            }

            // were same numbers multiplied, it is not prime number
            else if (b = false) {
             i = 1;
                do {
                 j = i * i;
                    if  (x == j) {
                     b = true;
                        break;
                    }
                    else if  (x < j) {
                        b = false;
                        break;
                    }
                    
                 i++;
                } while (i == 128);
            }

            // all prime numbers are made with 6n+1 or 6n-1
            else if (b = false) {
                if (primeCalculatePlus() == x) {
                 b = true;
                }

                else if (primeCalculateMinus() == x) {
                 b = true;
                }
            }

            // otherwise, its not prime number
            else {
             b = false;
            }
        
            // return b(bool)
            return b;
            }

        // Linear equation-normal
        int Linear_equation(void) {
            //left side
            cout << "the count of the character(x) on the left side: ";
            cin >> lcc;

            cout << "value of the constant term on the left side: ";
            cin >> lvct;

            //right side
            cout << "the count of the character(x) on the right side: ";
            cin >> rcc;

            cout << "value of the constant term on the right side: ";
            cin >> rvct;

            //calculate
         x = lcc - rcc;
         y = lvct - rvct;

            return  (y / x);
        }

        // Linear equation-inline
        inline int Linear_equation(int lcc, int lvct, int rcc, int rvct) {
         x = lcc - rcc;
         y = lvct - rvct;

            return  (y / x);
        }

        // Fracion calculate-normal
        void Fraction(void) {
            cout << "First fraction's denominator: ";
            cin >> x;

            cout << "First fraction's numerator: ";
            cin >> i;

            cout << "Second fraction's denominator: ";
            cin >> y;

            cout << "Second fraction's numerator: ";
            cin >> j;

            if  (x == y) {
             up = i + j;
             down = x;

                cout << up << "/" << down << endl;
            }
            else if  (x != y) {
             i *= y;
             j *= x;

             up = i + j;
             down = x * y;

                cout << up << "/" << down << endl; 
            }
            return;
        }

        // Fraction calculate-inline
        inline void Fraction(int x, int y, int i, int j) {
            if  (x == y) {
             up = i + j;
             down = x;

                cout << up << "/" << down << endl;
            }
            else if  (x != y) {
             i *= y;
             j *= x;

             up = i + j;
             down = x * y;

                cout << up << "/" << down << endl; 
            }
            return;
        }


        private:
        int i, j;
        bool b;
        // basic Calculation to get prime number
        // code for prime number calculate
        // only depending inline-form funtion because they dont need for user
        inline int primeCalculatePlus(void) {
            return (6 * x + 1);
        }

        inline int primeCalculateMinus(void) {
            return (6 * x - 1);
        }
    };
}