#include "PhoneCall.h"
#include <fstream>
#include <string>

using namespace std;

// Constructors
PhoneCall::PhoneCall() : number(""), length(0), rate(0) {};
PhoneCall::PhoneCall(const string &v_number) : number(v_number), length(0), rate(0) {};

// Destructor
PhoneCall::~PhoneCall() {};

// Accessor methods
string PhoneCall::getNumber() const {
    return number;
};
int PhoneCall::getLength() const {
    return length;
};
float PhoneCall::getRate() const {
    return rate;
};

// Mutator methods
void PhoneCall::setLength(int v_length) {
    length = v_length;
};
void PhoneCall::setRate(float v_rate) {
    rate = v_rate;
};

float PhoneCall::calcCharge() const {
    return length*rate;
};

bool operator==(const PhoneCall& call1, const PhoneCall& call2) {
    if (call1.number == call2.number) {
        return true;
    }
    return false;
};

ostream& operator<<(ostream& os, const PhoneCall &call) {
    os << "Number: " << call.number;
    return os;
};
