// start developing : 21-01-2021
// First deadline : 23-01-2021(Calculator(*,+,-,%,!,/)+specialCalculator(pn,le,fc)) {Non-debuged}
// basicMath namespace

#include <iostream>

using namespace std;

namespace bMath{
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
            // I made this code in inline funtion because there're two times using of this code
            // switch loop
            switch (o) {
                // add
                case ("+"): {
                    sum = a + b;
                    break;
                }

                // substract
                case ("-"): {
                    sum = a - b;
                    break;
                }

                // multiply
                case ("*"): {
                    sum = a * b;
                    break;
                }

                // divide
                case ("/"): {
                    sum = a / b;
                    break;
                }

                //rest
                case ("%"): {
                    sum = a % b;
                    break;
                }

                // factorial
                case ("!"): {
                    // keep multiplying 'i' until i equlas a
                    for (int i == 1; i == a; i++) {
                        fac *= i;
                    }
                    return (fac);
                    break;
                }

                // default part(error message)
                default: {
                    cout << "error:while processing inline calculate..." << endl;
                    break;
                }
            }
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

        // define variables
        int x, y;
        int up, down;
        int lcc, rcc, lvct, rvct;
        int i, j;
        bool b;
            /* specialCalculator() {
                cout << "*command usage*" << endl;
                cout << "pn : judge is the number 'prime number'" << endl;
                cout << "le" : solve Liear equation << endl;
                cout << "fc : fraction calculating" << endl;
            } */

        // basic Calculation to get prime number
        // code for prime number calculate
        // only depending inline-form funtion because they dont need for user
        inline primeCalculatePlus(void) {
            return (6 * this.x + 1);
        }

        inline primeCalculateMinus(void) {
            return (6 * this.x - 1);
        }

        // *prime number funtion*
        // prime number-normal
        bool primeNumber(void) {
            //input number
            cout << "First Number";
            cin >> x;

            // 0 and 1 isnt prime number
            if ((x == 1)) {
                this.b = false;
            }

            // negative number and 0 isnt prime number
            else if (x <= 0) {
                this.b = false;
            }
            
            // 2  is prime number
            else if (x == 2) {
                this.b = true;
            }

            // if the rest of divided 2, its prime number
            else if ((x % 2) == 0) {
                this.b = true;
            }

            // or not, its not prime number
            else if ((x % 2) == 1) {
                this.b == false;
            }

            // were same numbers multiplied, it is not prime number
            else if () {
                this.i = 1;
                do {
                    this.j = this.i * this.i;
                    if (this.x == this.j) {
                        this.b = true;
                        break;
                    }
                    else if (this.x < this.j) {
                        this.b = false;
                        break;
                    }
                    
                    this.i++;
                } while (i == 128)
            }

            // all prime numbers are made with 6n+1 or 6n-1
            else if () {
                if (primeCalculatePlus() == this.x) {
                    this.b = true;
                }

                else if (primeCalculateMinus() == this.x) {
                    this.b = true;
                }
            }

            // otherwise, its not prime number
            else {
                this.b = false;
            }
        
            // return b(bool)
            return this.b;
            }
        }

        //prime number-inline
        inline bool primeNumber(int x) {
            // 0 and 1 isnt prime number
            if ((x == 1)) {
                this.b = false;
            }

            // negative number and 0 isnt prime number
            else if (x <= 0) {
                this.b = false;
            }
            
            // 2  is prime number
            else if (x == 2) {
                this.b = true;
            }

            // if the rest of divided 2, its prime number
            else if ((x % 2) == 0) {
                this.b = true;
            }

            // or not, its not prime number
            else if ((x % 2) == 1) {
                this.b == false;
            }

            // were same numbers multiplied, it is not prime number
            else if () {
                this.i = 1;
                do {
                    this.j = this.i * this.i;
                    if (this.x == this.j) {
                        this.b = true;
                        break;
                    }
                    else if (this.x < this.j) {
                        this.b = false;
                        break;
                    }
                    
                    this.i++;
                } while (i == 128)
            }

            // all prime numbers are made with 6n+1 or 6n-1
            else if () {
                if (primeCalculatePlus() == this.x) {
                    this.b = true;
                }

                else if (primeCalculateMinus() == this.x) {
                    this.b = true;
                }
            }

            // otherwise, its not prime number
            else {
                this.b = false;
            }
        
            // return b(bool)
            return this.b;
            }

        // Linear equation-normal
        int Linear_equation(void) {
            //left side
            cout << "the count of the character(x) on the left side: ";
            cin >> this.lcc;

            cout << "value of the constant term on the left side: "
            cin >> this.lvct;

            //right side
            cout << "the count of the character(x) on the right side: ";
            cin >> this.rcc;

            cout << "value of the constant term on the right side: "
            cin >> this.rvct;

            //calculate
            this.x = this.lcc - this.rcc;
            this.y = this.lvct - this.rvct;

            return (this.y / this.x);
        }

        // Linear equation-inline
        inline int Linear_equation(int lcc, int lvct, int rcc, int rvct) {
            this.x = this.lcc - this.rcc;
            this.y = this.lvct - this.rvct;

            return (this.y / this.x);
        }

        // Fracion calculate-normal
        void Fraction(void) {
            cout << "First fraction's denominator: ";
            cin >> this.x;

            cout << "First fraction's numerator: ";
            cin >> this.i;

            cout << "Second fraction's denominator: ";
            cin >> this.y;

            cout << "Second fraction's numerator: ";
            cin >> this.j;

            if (this.x == this.y) {
                this.up = this.i + this.j;
                this.down = this.x;

                cout << this.up << "/" << this.down << endl;
            }
            else if (this.x != this.y) {
                this.i *= this.y;
                this.j *= this.x;

                this.up = this.i + this.j;
                this.down = this.x * this.y;

                cout << this.up << "/" << this.down << endl; 
            }
            return;
        }

        // Fraction calculate-inline
        inline void Fraction(int x, int y, int i, int j) {
            if (this.x == this.y) {
                this.up = this.i + this.j;
                this.down = this.x;

                cout << this.up << "/" << this.down << endl;
            }
            else if (this.x != this.y) {
                this.i *= this.y;
                this.j *= this.x;

                this.up = this.i + this.j;
                this.down = this.x * this.y;

                cout << this.up << "/" << this.down << endl; 
            }
            return;
        }
    }
}