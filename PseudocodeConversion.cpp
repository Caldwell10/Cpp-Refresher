#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE];
    int sum = 0;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    float average = static_cast<float>(sum) / SIZE;
    cout << "Average is: " << average << endl;

    return 0;
}
