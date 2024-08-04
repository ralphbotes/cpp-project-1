#ifndef PHONECALL_H
#define PHONECALL_H

#include <iostream>
#include <string>

using namespace std;

class PhoneCall {
    public:
        // Constructors
        PhoneCall();
        PhoneCall(const string &v_number);

        // Destructor
        ~PhoneCall();

        // Accessor methods
        string getNumber() const;
        int getLength() const;
        float getRate() const;

        // Mutator methods
        void setLength(int v_length);
        void setRate(float v_rate);

        float calcCharge() const;

        friend bool operator==(const PhoneCall& call1, const PhoneCall& call2);
        friend ostream& operator<<(ostream& os, const PhoneCall &call);

    private:
        string number;  // phone number (consisting of 10 digits) to which a call is placed
        int length;     // Representing the length of the call in minutes
        float rate;     // Representing the rate charged per minute.
};
#endif
