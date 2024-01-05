// 2020556026 Yusuf Göktaş
#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept>

using namespace std;

bool hasNumber(const string& str) {
    for (char c : str) {
        if (isdigit(c)) {
            return true;
        }
    }
    return false;
}

bool hasChar(const string& str) {
    for (char c : str) {
        if (isalpha(c)) {
            return true;
        }
    }
    return false;
}

int main() {
    string name, surname, number;
    bool validName = false;
    bool validSurname = false;
    bool validNumber = false;

    while (!validName || !validSurname || !validNumber) {
        try {
            if (!validName) {
                cout << "Name :\n";
                cin >> name;
                if (hasNumber(name)) {
                    throw runtime_error("You used a number in the name.");
                }
                validName = true;
            }

            if (!validSurname) {
                cout << "Surname :\n";
                cin >> surname;
                if (hasNumber(surname)) {
                    throw runtime_error("You used a number in the surname.");
                }
                validSurname = true;
            }

            if (!validNumber) {
                cout << "Number :\n";
                cin >> number;
                if (hasChar(number)) {
                    throw runtime_error("You used a character in the student number.");
                }
                validNumber = true;
            }
            break;
        } catch (const runtime_error& error) {
            cout << error.what() << endl;
        }
    }

    cout << "\n" << endl;
    cout << name << " " << surname << " " << number << endl;

    return 0;
}
