#include <iostream>
using namespace std;
int main() {
    cout << "Welcome to calculator" << endl;
    int m1;
    cout << "Which operation do you want to perform? Enter -:" << endl
         << "1 for Algebraic operations" << endl
         << "2 for Trigonometric operations" << endl
         << "3 for Exponentiation" << endl;
    cin >> m1;
    switch (m1){
        case 1:
            int x,y;
            cout << "Please enter first number";
            cin >> x;
            cout << "Please enter second number";
            cin >> y;
            int m2;
            cout << "Please enter" << endl
            << "1 for Addition" << endl
            << "2 for Subtraction" << endl
            << "3 for Multiplication" << endl
            << "4 for Division" << endl;
            cin >> m2;
            switch (m2){
                case 1:
                    cout << x + y;
                    break;
                case 2:
                    cout << x - y;
                    break;
                case 3:
                    cout << x*y;
                    break;
                case 4:
                    cout << x/y;
                    break;
            }
            break;
        case 3:
            int a,b;
            cout << "Please enter base";
            cin >> a;
            cout << "Please enter power";
            cin >> b;
            for (int i=1 ; i < b+1 ; i+=1) {
                if (i !=1) {
                    a *= a;
                }
            }
            cout << a;
            break;
    }
    return 0;
}