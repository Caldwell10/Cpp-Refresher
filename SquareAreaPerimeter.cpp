# include <iostream>
using namespace std;

int main() {
    float length;
    cout << "Enter the length of the square: ";
    cin>>length;

    float perimeter = length*4;
    float area = pow(length,2);

    cout <<"Perimeter of the square: "<< perimeter << endl;
    cout <<"Area of the square: "<< area <<endl;

}