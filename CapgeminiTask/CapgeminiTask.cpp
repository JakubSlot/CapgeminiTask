#include <iostream>
#include <list>
#include <../../../../../../capgeminiTask/CapgeminiTask/CapgeminiTask/Phone.h>

using namespace std;

int main()
{
    list<Phone> phones;
    int choice;
    Phone* p = new Phone();
    cout << "Welcome to the mobile phone shop\n";
    do {
        cout << "Please make your selection\n";
        cout << "1 - Adding a phone\n";
        cout << "2 - Deleting a phone\n";
        cout << "3 - Reports\n";
        cout << "4 - Quit\n";
        cout << "Selection: ";
        cin >> choice;
        switch (choice) {
        case 1: {
              cout << "Enter Brand name:";
              cin >> p->brandName;
              cout << "Enter Model name:";
              cin >> p->modelName;
              cout << "Enter Form factor:";
              cin >> p->formFactor;
              cout << "Enter Year of issue:";
              cin >> p->yearOfIssue;
              cout << "Enter Screen size:";
              cin >> p->screenSize;
              cout << "Enter Price:";
              cin >> p->price;
              phones.push_back(*p);
              cout << p->toString() << " added\n";
              break;
        }
        case 2: {
            int i = 0;
            cout << "Chose number of phone to delete:\n";
            for (Phone p : phones) {
                cout << ++i << ". " << p.toString() << endl;
            }
            int number;
            cin >> number;
            auto it = phones.begin();
            advance(it, number-1);
            phones.erase(it);
            break;
        }
        case 3: {
            int choice2;
            do {
                cout << "Select raport\n";
                cout << "1 - Show all phones by the same brand\n";
                cout << "2 - Show all phones of a given form factor and screen size\n";
                cout << "3 - Show the name of the brand with the maximum quantity of the phones\n";
                cout << "4 - Show TOP-3 screen sizes (popularity is determined by the number of phones with the screen size)\n";
                cout << "5 - Back to previous menu\n";
                cout << "Selection: ";
                cin >> choice2;
                switch (choice2) {
                case 1: {
                    string brand;
                    cout << "Enter phone brand:";
                    cin >> brand;
                    for (Phone p : phones) {
                        if (p.brandName == brand)
                            cout << p.toString() << endl;
                    }
                    break;
                }
                case 2: {
                    string fForm;
                    int sSize;
                    cout << "Enter factory form:";
                    cin >> fForm;
                    cout << "Enter screen size:";
                    cin >> sSize;
                    for (Phone p : phones) {
                        if (p.formFactor == fForm && p.screenSize == sSize)
                            cout << p.toString() << endl;
                    }
                    break;
                }
                case 3: {
                    //Show the name of the brand with the maximum quantity of the phones\n";
                    break;
                }
                case 4:{
                    //Show TOP-3 screen sizes (popularity is determined by the number of phones with the screen size)\n";
                    break;
                }
                case 5:
                    main();
                    break;
                default:
                    cout << "Select raport\n";
                    cout << "1 - Show all phones by the same brand\n";
                    cout << "2 - Show all phones of a given form factor and screen size\n";
                    cout << "3 - Show the name of the brand with the maximum quantity of the phones\n";
                    cout << "4 - Show TOP-3 screen sizes (popularity is determined by the number of phones with the screen size)\n";
                    cout << "5 - Back to previous menu\n";
                    cout << "Selection: ";
                    cin >> choice2;
                }
            } while (choice2 != 5);
            break; 
        }
        case 4:
            cout << "Goodbye!";
            break;
        default:
            cout << "Please make your selection\n";
            cout << "1 - Adding a phone\n";
            cout << "2 - Deleting a phone\n";
            cout << "3 - Reports\n";
            cout << "4 - Quit\n";
            cout << "Selection: ";
            cin >> choice;
        }
    } while (choice != 4);
    delete p;
    system("PAUSE");
    return EXIT_SUCCESS;
    
    
}