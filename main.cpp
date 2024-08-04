#include <iostream>
#include "PhoneCall.h"
#include <fstream>

using namespace std;

int main()
{
    string number;
    cout << "Please enter a phone number to check: ";
    cin >> number;

    PhoneCall theCall(number);

    ifstream inStream;
    inStream.open("MyCalls.dat");
    if (!inStream) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }

    string v_number;
    int v_length, amt_of_calls_made, longest_call = 0;
    float v_rate, spent_amt;
    while (inStream >> v_number >> v_length >> v_rate) {
        PhoneCall currCall(v_number);
        currCall.setLength(v_length);
        currCall.setRate(v_rate);
        if (currCall == theCall) {
            amt_of_calls_made++;
            spent_amt += currCall.calcCharge();

            if (currCall.getLength() > longest_call) {
                longest_call = currCall.getLength();
            }
        }
    }
    inStream.close();

    cout << theCall << "\nTotal amount spent: " << spent_amt <<
        "\nNumber of calls made: " << amt_of_calls_made <<
        "\nLongest call made: " << longest_call << " min";

    return 0;
}
