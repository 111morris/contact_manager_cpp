#include <iostream>
#include <conio.h>
using namespace;

int main() {
  short int choice;
  system("cls");
  system("clear");
  cout<<"\nContact Manager";
  cout<<"\n1. Add contact\n2. Search contact\n3. help\n4. Exit\n\n";
  cin>>choice;

  switch (choice) {
    case 1:
    addContact();
    break;
    case 2:
    searchContact();
    break;
    case 3:
    help();
    break;
    case 4:
    self_exit();
    break;
    default:
    cout<<"\nInvalid input!";

  }
  return(0);
}
