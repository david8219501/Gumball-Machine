#ifndef GUMBALL_MACHINE_HPP
#define GUMBALL_MACHINE_HPP

#include "state.hpp"
#include "gumballMachineStates.hpp"

class GumballMachine {
public:
    GumballMachine(unsigned int countGumball);
    ~GumballMachine();

    void setState(State* newState);

    State* getSoldState() const;
    State* getSoldOutState() const;
    State* getNoQuarterState() const;
    State* getHasQuarterState() const;

    unsigned int getCount() const;
    void releaseBall();

    State* m_currentStatus; 
    unsigned int m_countGumball;

    SoldState* m_soldState;
    SoldOutState* m_soldOutState;
    NoQuarterState* m_noQuarterState;
    HasQuarterState* m_hasQuarterState;
};

#endif // GUMBALL_MACHINE_HPP
