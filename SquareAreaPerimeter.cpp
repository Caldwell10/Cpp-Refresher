# include <iostream>
using namespace std;

int omain() {
    float length;
    cout << "Enter the length of the square: ";
    cin>>length;

    float perimeter = length*4;
    float area = length*length;

    cout <<"Perimeter of the square: "<< perimeter << endl;
    cout <<"Area of the square: "<< area <<endl;

}