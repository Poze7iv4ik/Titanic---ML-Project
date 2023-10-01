// lessone 1
//task 1 Cat

#include <iostream> //для ввода вывода
#include <string>
using namespace std; //чтоб не писать std

int main()
{   //A+B
    int A = 0;
    int B = 0;
    int sum;
    cin >> A >> B;
    sum = A + B;
    cout << "sum: " << sum << endl;

    //Cat
    int age = 0;
    float ves;
    float tailLenght;
    char catName = 'w';
    ves = 0.6f;

    //console input

    cout << "input cat data:\n";
    cin >> age >> ves;
    cin >> tailLenght >> catName;

    cout << "cat data:\n";
    cout << "age: " << age << "\n";
    cout << "ves: " << ves << "\n";
    cout << "catName: " << catName << "\n";
    cout << "tailLenght: " << tailLenght << endl;

}