#include "List.h"
#include <iostream>
using namespace std;

List::List() {
    first = NULL;
    last = NULL;
}

void List::create() {
    Node* temp = new Node;
    int n;
    cout << "Enter an Element: ";
    cin >> n;
    temp->info = n;
    temp->next = NULL;
    if (first == NULL) {
        first = temp;
        last = first;
    } else {
        last->next = temp;
        last = temp;
    }
}

void List::insert() {
    Node* prev = NULL;
    Node* cur = first;
    int count = 1, pos, ch, n;
    Node* temp = new Node;
    cout << "Enter an Element: ";
    cin >> n;
    temp->info = n;
    temp->next = NULL;
    cout << "\nINSERT AS\n1: FIRST NODE\n2: LAST NODE\n3: IN BETWEEN FIRST & LAST NODES\n";
    cout << "Enter Your Choice: ";
    cin >> ch;
    switch (ch) {
        case 1:
            temp->next = first;
            first = temp;
            break;
        case 2:
            last->next = temp;
            last = temp;
            break;
        case 3:
            cout << "\nEnter the Position to Insert: ";
            cin >> pos;
            while (count != pos) {
                prev = cur;
                cur = cur->next;
                count++;
            }
            if (count == pos) {
                prev->next = temp;
                temp->next = cur;
            } else {
                cout << "Not Able to Insert" << endl;
            }
            break;
    }
}

void List::delet() {
    Node* prev = NULL;
    Node* cur = first;
    int count = 1, pos, ch;
    cout << "DELETE\n1: FIRST NODE\n2: LAST NODE\n3: IN BETWEEN FIRST & LAST NODES\n";
    cout << "Enter Your Choice: ";
    cin >> ch;
    switch (ch) {
        case 1:
            if (first != NULL) {
                cout << "\nDeleted Element is " << first->info;
                first = first->next;
            } else {
                cout << "\nNot Able to Delete" << endl;
            }
            break;
        case 2:
            while (cur != last) {
                prev = cur;
                cur = cur->next;
            }
            if (cur == last) {
                cout << "\nDeleted Element is: " << cur->info;
                prev->next = NULL;
                last = prev;
            } else {
                cout << "\nNot Able to Delete" << endl;
            }
            break;
        case 3:
            cout << "\nEnter the Position of Deletion: ";
            cin >> pos;
            while (count != pos) {
                prev = cur;
                cur = cur->next;
                count++;
            }
            if (count == pos) {
                cout << "Deleted Element is: " << cur->info;
                prev->next = cur->next;
            } else {
                cout << "\nNot Able to Delete" << endl;
            }
            break;
    }
}

void List::display() {
    Node* temp = first;
    if (temp == NULL) {
        cout << "List is Empty" << endl;
    }
    while (temp != NULL) {
        cout << temp->info << "-->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void List::search() {
    int value, pos = 0;
    bool flag = false;
    if (first == NULL) {
        cout << "List is Empty" << endl;
        return;
    }
    cout << "Enter the Value to be Searched: ";
    cin >> value;
    Node* temp = first;
    while (temp != NULL) {
        pos++;
        if (temp->info == value) {
            flag = true;
            cout << "Element " << value << " is Found at " << pos << " Position" << endl;
            return;
        }
        temp = temp->next;
    }
    if (!flag) {
        cout << "Element " << value << " not Found in the List" << endl;
    }
}
