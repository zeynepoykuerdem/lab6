#include <iostream>

using namespace std;

double func(double);
double func();

int main() {
    int n;
    double result;
    cout << "Please enter a value: \n";
    cin >> n;
    result = func(n);
    cout << "The result is:\t" << result;
    return 0;
}

double func(double x) {
    if (x == 1) {
        return double((x / (x + 2)) - 10);
    } else {
        return double(func(x - 1) * ((x / (x + 2)) - 10));
    }


}

double func() {
    double n;
    cout << "Please insert a value: \t";
    cin >> n;
    if (n == 1) {
        return double((n / (n + 2)) - 10);
    } else {
        return double(func(n - 1) * ((n / (n + 2)) - 10));
    }
}

