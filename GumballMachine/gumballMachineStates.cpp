#include <iostream>

#include "./gumballMachineStates.hpp"
#include "gumballMachine.hpp"

// NoQuarterState
void NoQuarterState::insertQuarter(GumballMachine& gumballMachine) {
    std::cout << "Quarter inserted. You can now turn the crank." << std::endl;
    gumballMachine.setState(gumballMachine.getHasQuarterState());
}

// HasQuarterState
void HasQuarterState::turnCrank(GumballMachine& gumballMachine) {
    std::cout << "The gumball is out, take the gumball"<< std::endl;
    gumballMachine.setState(gumballMachine.getSoldState());
}

void HasQuarterState::ejectQuarter(GumballMachine& gumballMachine) {
    std::cout << "The currency you put in comes out" << std::endl;
    gumballMachine.setState(gumballMachine.getNoQuarterState());
}

// SoldState
void SoldState::dispense(GumballMachine& gumballMachine) {
    std::cout << "The gum is out, Thank you for your purchase." << std::endl;
    gumballMachine.releaseBall();
    if (gumballMachine.getCount() == 0) {
        std::cout << "Oops, out of gumballs!" << std::endl;
        gumballMachine.setState(gumballMachine.getSoldOutState());
    } else {
        gumballMachine.setState(gumballMachine.getNoQuarterState());
    }
}
