#include <iostream>
using namespace std;
int main() {
  short int choice;

  while (true) {
    #ifdef _WIN32
      system(cls);
    #else
      system(clear);
    #endif

    cout << nContact Manager;
    cout << n1. Add contactn2. Search contactn3. Helpn4. Exitnn;
    cout << Enter choice: ;
    cin >> choice;

    switch (choice) {
      case 1: addContact(); break;
      case 2: searchContact(); break;
      case 3: help(); break;
      case 4: self_exit(); return 0;
    }

    cout << nPress Enter to continue...;
    cin.ignore(); // Clear leftover newline
    cin.get();    // Wait for user input
  }
}
