#include <iostream>
using namespace std;
 // Разворот числа
void Sum(int a)
{
    if (a > 0)
    {
        cout << a % 10;
        Sum(a / 10);
    }
}

int main()
{
    int a;
    cin >> a;
    Sum(a);
}

// Степень числа
int degreeofnumber(int number, int degree) {

    if (degree == 0)return 1;
    return number * degreeofnumber(number, degree - 1);
}
int main() {
    int number;
    int degree;
    cout << "enter a number: ";
    cin >> number;
    cout << "enter the degree: ";
    cin >> degree;
    int result = degreeofnumber(number, degree);
    cout << result;
}

// Сумма чисел в диапазоне
int Sum(int a, int b)
{
    if (a > b)return 0;
    return a + Sum(a + 1, b);
}

int main() {
    int a;
    int b;
    cout << "Enter the first number in the range: ";
    cin >> a;
    cout << "Enter a lower number in the range of: ";
    cin >> b;
    int sum = Sum(a, b);
    cout << sum;
}
