# include <iostream>
using namespace std;

int main() {
    char character;
    cout << "Enter a character: ";
    cin >> character;

    if (isupper(character) == true) {
        cout << "The character is in uppercase" << endl;
    }
    else {
        cout << "The character is in lowercase" << endl;
    }
}