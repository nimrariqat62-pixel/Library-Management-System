#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

class Book {
public:
    int id;
    string title;
    string author;
    bool isAvailable;

    void input() {
        cout << "Enter Book ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Title: ";
        getline(cin, title);
        cout << "Enter Author: ";
        getline(cin, author);
        isAvailable = true;
    }

    void display() {
        cout << "ID: " << id << " | Title: " << title 
             << " | Author: " << author 
             << " | Available: " << (isAvailable ? "Yes" : "No") << endl;
    }
};

vector<Book> library;

void addBook() {
    Book b;
    b.input();
    library.push_back(b);
    cout << "Book Added Successfully!\n";
}

void viewBooks() {
    if (library.empty()) {
        cout << "No books available.\n";
        return;
    }
    for (auto &b : library) {
        b.display();
    }
}

void searchBook() {
    string key;
    cout << "Enter Title to Search: ";
    cin.ignore();
    getline(cin, key);
    bool found = false;
    for (auto &b : library) {
        if (b.title == key) {
            b.display();
            found = true;
        }
    }
    if (!found) cout << "Book Not Found!\n";
}

void updateBook() {
    int id;
    cout << "Enter Book ID to Update: ";
    cin >> id;
    for (auto &b : library) {
        if (b.id == id) {
            cout << "Enter New Title: ";
            cin.ignore();
            getline(cin, b.title);
            cout << "Updated Successfully!\n";
            return;
        }
    }
    cout << "Book ID Not Found!\n";
}

int main() {
    int choice;
    do {
        cout << "\n--- Library Management System ---\n";
        cout << "1. Add New Book\n";
        cout << "2. View All Books\n";
        cout << "3. Search Book\n";
        cout << "4. Update Book Record\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addBook(); break;
            case 2: viewBooks(); break;
            case 3: searchBook(); break;
            case 4: updateBook(); break;
            case 5: cout << "Exiting... Developed by Nimra Riqat\n"; break;
            default: cout << "Invalid Choice!\n";
        }
    } while (choice != 5);

    return 0;
}
