#include <iostream>
using namespace std;
double exp(double a, double b) {
     double ans = 1;
            for (int i=1 ; i < (b+2) ; i+=1) {
                if (i !=1) {
                    ans *= a;
                }
            }
            return ans;
}
int fact(int n) {
    int ans = 1;
    for (int i=1 ; i < (n+1) ; i += 1){
        ans *= i;
    }
    return ans;
}
double sin(double x){
    double ans = 0;
    for (int i=1; i <15 ; i +=4 ){
        ans += (exp(x,i)/fact(i));
    }
    for (int i =3; i< 15 ; i+= 4){
        ans -= (exp(x,i)/fact(i));
    }
    return ans;
}
double cos(double x){
    double ans = 0;
    for (int i=0; i <15 ; i += 4 ){
        ans += (exp(x,i)/fact(i));
    }
    for (int i =2; i< 15 ; i+= 4){
        ans -= (exp(x,i)/fact(i));
    }
    return ans;
}
double tan(double x){
    double ans;
    ans = (sin(x)/cos(x));
    return ans;
}
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
            float x,y;
            cout << "Please enter first number ";
            cin >> x;
            cout << "Please enter second number ";
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
        case 2:
            int w;
            cout << "Please select the function 1 for sine, 2 for cos , 3 for tan";
            cin >> w;
            int s;
            cout << "The angle to worked upon is in -: 1 for Radian , 2 for Degrees";
            cin >> s;
            double deg;
            cout << "Please enter value";
            cin >> deg;
            switch(s) {
                case 1:
                    switch (w){
                        case 1:
                            cout << sin(deg);
                            break;
                        case 2:
                            cout << cos(deg);
                            break;
                        case 3:
                            cout << tan(deg);
                            break;
                    }
                case 2:
                    double deg_new = 0.0174533*deg;
                    switch (w){
                        case 1:
                            cout << sin(deg_new);
                            break;
                        case 2:
                            cout << cos(deg_new);
                            break;
                        case 3:
                            cout << tan(deg_new);
                            break;
                    }                 
            }
            break;
        case 3:
            int a,b;
            cout << "Please enter base ";
            cin >> a;
            cout << "Please enter power ";
            cin >> b;
            cout << exp(a,b);
            break;
    }
    return 0;
}
