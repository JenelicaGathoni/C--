# include <iostream>
# include <cmath>
using std:: cout;
using std::cin;
int main(){
    int base, exponent;
    cout << "What's the base? ";
    cin >> base;
    cout << "What's the exponent?";
    cin >> exponent;
    double power = pow(base,exponent);
    cout << "The answer is " << power;

}