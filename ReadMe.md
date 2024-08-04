# PhoneCall Class Application

## Overview

This project defines a class `PhoneCall` as an Abstract Data Type (ADT) and demonstrates its usage in an application program. The `PhoneCall` class represents a phone call and provides functionalities to calculate the charge for a call, compare phone calls, and input/output phone call details.

## Features

- **Member Variables:**
  - `number`: A string that holds the phone number (10 digits) to which a call is placed.
  - `length`: An integer representing the length of the call in minutes.
  - `rate`: A float representing the rate charged per minute.

- **Constructors:**
  - Default constructor: Initializes `number` to an empty string, `length` to 0, and `rate` to 0.
  - Overloaded constructor: Accepts a phone number and sets `length` and `rate` to 0.

- **Destructor:**
  - A destructor that does not perform any action.

- **Accessor Functions:**
  - Functions to return the values stored in each member variable (`getNumber()`, `getLength()`, `getRate()`).

- **Member Functions:**
  - `float calcCharge()`: Determines the amount charged for the phone call.

- **Operator Overloading:**
  - Equality operator (`==`): Compares two phone calls to check if they have been placed to the same number.
  - Stream extraction operator (`>>`): Inputs values of type `PhoneCall`.
  - Stream insertion operator (`<<`): Outputs values of type `PhoneCall`.

- **Application Program (main()):**
  - Determines the total amount spent on phone calls to a specific phone number in one month.
  - Uses the overloaded constructor to initialize a `PhoneCall` object to the specified number.
  - Reads phone calls from `MyCalls.dat` file and uses the overloaded equality operator to compare phone numbers.
  - Calculates the total amount spent, the number of calls made, and identifies the longest call to the specified number.

## Files

- `PhoneCall.h`: Header file containing the class definition and function prototypes.
- `PhoneCall.cpp`: Implementation file containing the function definitions.
- `main.cpp`: Application program demonstrating the usage of the `PhoneCall` class.
- `MyCalls.dat`: Data file containing the phone calls made during one month.

## Usage

1. **Compile the Program:**

   Open Code::Blocks, create a new project, and add the `PhoneCall.h`, `PhoneCall.cpp`, and `main.cpp` files to the project. Compile the project.

2. **Run the Program:**

   Execute the compiled program. The program will prompt you to enter the phone number for which you want to determine the total amount spent.

3. **Input the Phone Number:**

   Enter the phone number `0337698210` (or any other number you want to test).

4. **View the Results:**

   The program will read the phone calls from `MyCalls.dat`, compare them with the specified number, and display the total amount spent, the number of calls made, and the details of the longest call to the specified number.

## Example

