# include <iostream>
using namespace std;

int main() {
    int radius;
    cout << "Enter radius: ";
    cin >> radius;

    float volume =4.0/3.0 *3.14* pow(radius,3);
    cout << "Volume of the sphere is: " << volume<<endl;
    return 0;
}