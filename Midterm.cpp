#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>


using namespace std;


int main()
{
    int Y, b, a;
    srand(time(0));
    a = rand() % (-100 -(-10)) + (-10);
    cout << "Enter a value for b: ";
    cin >> b;
    Y = exp(a) * (a / sqrt(pow(a, b) + sin(30))) + log(1000);
    cout << "The value of Y is: " << Y << endl;
}

