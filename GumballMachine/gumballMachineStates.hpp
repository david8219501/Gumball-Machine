#ifndef GUMBALL_MACHINE_STATES_HPP
#define GUMBALL_MACHINE_STATES_HPP

#include "state.hpp"

class NoQuarterState : public State {
public:
    NoQuarterState() = default;
    ~NoQuarterState() = default;

    void insertQuarter(GumballMachine& gumballMachine) override;

};

class HasQuarterState : public State {
public:
    HasQuarterState() = default;
    ~HasQuarterState() = default;

    void turnCrank(GumballMachine& gumballMachine) override;
        void ejectQuarter(GumballMachine& gumballMachine) override;

};

class SoldState : public State {
public:
    SoldState() = default;
    ~SoldState() = default;

    void dispense(GumballMachine& gumballMachine) override;
};

class SoldOutState : public State {
public:
    SoldOutState() = default;
    ~SoldOutState() = default;
};

#endif // GUMBALL_MACHINE_STATES_HPP
