#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits> 

using namespace std;

string generatePassword(int length){
    string password;
    const string CHARACTERS ="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*";
    int charLen = CHARACTERS.length();

    srand(time(0));

    for (int i = 0; i < length; ++i) {
        int randomIndex = rand() % charLen;
        password += CHARACTERS[randomIndex];
    }

    return password;
}

int main() {
    int length;
    cout << "Enter the length of the password: ";
    cin >> length;
    
    if (length <=0) {
        cout << "Invalide length!";
        return 1;
    }

 
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password = generatePassword(length);
    cout << "Generated password: " << password << endl;

    return 0;
}