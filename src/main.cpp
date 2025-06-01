#include "ContactManager.hpp"
#include <iostream>

int main() {
    ContactManager manager("contacts.json");
    manager.load();

    while (true) {
        std::cout << "1. Add Contact\n2. List Contacts\n3. Search Contact\n4. Save & Exit\n> ";
        int choice;
        std::cin >> choice;
        std::cin.ignore(); // ignore leftover newline

        if (choice == 1) {
            std::string name, phone, email;
            std::cout << "Name: "; std::getline(std::cin, name);
            std::cout << "Phone: "; std::getline(std::cin, phone);
            std::cout << "Email: "; std::getline(std::cin, email);
            manager.addContact(Contact(name, phone, email));
        } else if (choice == 2) {
            manager.listContacts();
        } else if (choice == 3) {
            std::string keyword;
            std::cout << "Search by name: ";
            std::getline(std::cin, keyword);
            manager.searchContact(keyword);
        } else if (choice == 4) {
            manager.save();
            std::cout << "Contacts saved. Goodbye!\n";
            break;
        } else {
            std::cout << "Invalid choice.\n";
        }
    }

    return 0;
}

