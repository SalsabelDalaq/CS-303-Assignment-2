#include "List.h"
#include <iostream>
using namespace std;

int main() {
    List l;
    int ch;
    while (1) {
        cout << "\n**** MENU ****" << endl;
        cout << "1: CREATE\n2: INSERT\n3: DELETE\n4: SEARCH\n5: DISPLAY\n6: EXIT" << endl;
        cout << "Enter Your Choice: ";
        cin >> ch;
        switch (ch) {
            case 1:
                l.create();
                break;
            case 2:
                l.insert();
                break;
            case 3:
                l.delet();
                break;
            case 4:
                l.search();
                break;
            case 5:
                l.display();
                break;
            case 6:
                exit(0);
        }
    }
}
