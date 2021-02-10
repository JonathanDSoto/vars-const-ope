#include <iostream>
#include <math.h>
using namespace std;

#define PI 3.1416;
const float PI2 = 3.1416;

int main() {

    int age;
    float score;
    char letter;
    bool flag;

    double result = sqrt(age);

    int num1 = 2, num2 = 8;
    cout << num1 + num2 << endl;

    cout << num2 - num1 << endl;

    cout << num1 * num2 << endl;

    cout << num2 / num1 << endl;

    cout << num1 + num2 * num1 / num2 << endl;

    cout << 5 % 3 << endl;

    cout << (num1!=num2 || true ) << endl;

    num1++;

    cout << num1 << endl;

    num2--;

    cout << num2 << endl;
    return 0;
}
