#include "./state.hpp"

void State::insertQuarter(GumballMachine& gumballMachine) {
    std::cout << " In the current situation, it is not possible to insert currency " << std::endl;
}

void State::ejectQuarter(GumballMachine& gumballMachine) {
    std::cout << " In the current situation, it is not possible to eject currency " << std::endl;
}

void State::turnCrank(GumballMachine& gumballMachine) {
    std::cout << " In the current situation, it is not possible to turn the crank " << std::endl;
}

void State::dispense(GumballMachine& gumballMachine) {
    std::cout << " In the current situation, it is not possible to dispense " << std::endl;
}
