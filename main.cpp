#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> //this is for the system
//
using namespace std;

void addContact(){
  cout<<"\n[Add Contact] Feature comming soon.\n";
  Contact c;
  cout<<"Enter name: ";
  cin.ignore();
  getline(cin, c.name);
  cout<<"Enter phone number: ";
  getline(cin, c.phone);
  cout<<"Enter your email: ";
  getline(cin, c.email);

  contacts.push_back(c);
  cout<< "\nContact added";
}

struct Contact {
  string name;
  string phone;
  string email;
};

vector<Contact> contacts;

void searchContact() {
  string query;
  cout<<"Enter name to search: ";
  cin.ignore();
  getline(cin, query);

  bool found = false;
  for(const auto& c: contacts) {
    if(c.name == query){
      cout<<"\nName: " <<c.name<<"\nPhone: "<<c.phone<<"\nEmail: "<< c.email<< '\n';
      found = true;
    }
  }
  if(!found) {
    cout<<"Contact not found.\n";
  }
}
self_exit(){
  cout<<"\nExiting program. Goodby!\n";
}

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
  return (0);
}
