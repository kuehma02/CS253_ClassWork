#include "Customer.hpp"

Customer::Customer(double loan, int term) {
    this->loan = loan;
    this->term = term;
}

ostream& operator<<(ostream& os, const Customer& c) {
    os << "Loan: $" << fixed << setprecision(2) << c.loan << "; Term: " << c.term << " months";
    return os;
}