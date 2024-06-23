#include <iostream>
#include <string>
#include "gumballMachine.hpp"

using namespace std;

int main() {
    unsigned int initialGumballCount;
    cout << "Welcome to the Gumball Machine!" << endl;
    cout << "Please enter the initial gumball count:" << endl;
    cin >> initialGumballCount;

    GumballMachine gumballMachine(initialGumballCount);

    while (true) 
        cout << "==============================" << endl;
        cout << "Please select an action:" << endl;
        cout << "1. Insert Quarter" << endl;
        cout << "2. Eject Quarter" << endl;
        cout << "3. Turn Crank" << endl;
        cout << "4. Take the gumball" << endl;
        cout << "5. Exit" << endl;


        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                gumballMachine.m_currentStatus->insertQuarter(gumballMachine);
                break;
            case 2:
                gumballMachine.m_currentStatus->ejectQuarter(gumballMachine);
                break;
            case 3:
                gumballMachine.m_currentStatus->turnCrank(gumballMachine);
                break;
            case 4:
                gumballMachine.m_currentStatus->dispense(gumballMachine);
                break;
            case 5:
                cout << "Exiting the system." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please choose again." << endl;
                break;
        }
    }

    return 0;
}
