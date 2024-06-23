#include "gumballMachine.hpp"

GumballMachine::GumballMachine(unsigned int countGumball)
: m_countGumball(countGumball)
, m_soldState(new SoldState())
, m_soldOutState(new SoldOutState())
, m_noQuarterState(new NoQuarterState())
, m_hasQuarterState(new HasQuarterState())
{
    m_currentStatus = (m_countGumball > 0) ? static_cast<State*>(m_noQuarterState) : static_cast<State*>(m_soldOutState);
}

GumballMachine::~GumballMachine() {
    delete m_soldState;
    delete m_soldOutState;
    delete m_noQuarterState;
    delete m_hasQuarterState;
}

void GumballMachine::setState(State* newState) {
    m_currentStatus = newState;
}

State* GumballMachine::getSoldState() const {
    return m_soldState;
}

State* GumballMachine::getSoldOutState() const {
    return m_soldOutState;
}

State* GumballMachine::getNoQuarterState() const {
    return m_noQuarterState;
}

State* GumballMachine::getHasQuarterState() const {
    return m_hasQuarterState;
}

unsigned int GumballMachine::getCount() const {
    return m_countGumball;
}

void GumballMachine::releaseBall() {
    if (m_countGumball != 0) {
        m_countGumball--;
    }
}
