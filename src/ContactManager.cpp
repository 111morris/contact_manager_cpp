#include "ContactManager.hpp"
#include <fstream>
#include <iostream>

#include <nlohmann/json.hpp>
using json = nlohmann::json;

ContactManager::ContactManager(const std::string& filePath) : filePath(filePath) {}

void ContactManager::load() {
    std::ifstream file(filePath);
    if (!file) return;

    json j;
    file >> j;

    contacts.clear();
    for (const auto& item : j) {
        contacts.push_back(Contact::fromJson(item));
    }
}

void ContactManager::save() const {
    json j;
    for (const auto& contact : contacts) {
        j.push_back(contact.toJson());
    }
    std::ofstream file(filePath);
    file << j.dump(4); // Pretty print with indent
}

void ContactManager::addContact(const Contact& contact) {
    contacts.push_back(contact);
}

void ContactManager::listContacts() const {
    if (contacts.empty()) {
        std::cout << "No contacts found.\n";
        return;
    }
    for (const auto& contact : contacts) {
        contact.display();
        std::cout << "----------------------\n";
    }
}

void ContactManager::searchContact(const std::string& keyword) const {
    for (const auto& contact : contacts) {
        if (contact.name.find(keyword) != std::string::npos) {
            contact.display();
            std::cout << "----------------------\n";
        }
    }
}

