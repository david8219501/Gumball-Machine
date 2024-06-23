#ifndef STATE_HPP
#define STATE_HPP

#include <iostream>

class GumballMachine;

class State {
public:
    State() = default;
    ~State() = default;

    virtual void insertQuarter(GumballMachine& gumballMachine);
    virtual void ejectQuarter(GumballMachine& gumballMachine);
    virtual void turnCrank(GumballMachine& gumballMachine);
    virtual void dispense(GumballMachine& gumballMachine);
};

#endif // STATE_HPP
