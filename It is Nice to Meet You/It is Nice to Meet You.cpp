#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare a string variable to store the user's name
    string name;

    // Prompt the user to enter their name
    cout << "Please enter your name: ";

    // Read the user's name using std::cin
    getline(cin, name);

    // Output a personalized greeting
    cout << "It is nice to meet you, " << name << "!" << endl;

    return 0;
}
