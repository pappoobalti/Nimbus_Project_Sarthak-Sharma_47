# Nimbus Loan Management System
A modular C-based loan management application that demonstrates clean coding practices using structures, dynamic memory, and multiple `.c` and `.h` files.

## Project Objective

The goal of this project is to build a mini Loan Management System with the capability to:
* Store multiple loan records
* Display formatted loan summaries
* Identify defaulters
* Calculate fines for delayed payments
* Display total amount issued as loans
* Demonstrate modular C programming (separate `.h` and `.c` files)


## Development Steps:

### 1️ Designing the Loan Structure (`loan.h`)

Defines the `Loan` structure containing:

* Borrower Name
* Loan ID
* Principal Amount
* Interest Rate
* Duration in Months

### 2️ Loan Operations (`loan.c`)

Contains functions for:
* Taking loan input
* Displaying details
* Summarizing loan information

### 3️ Fine Calculation (`fine.c`)

Calculates fine using:
fine = principal * 0.05 * delayed_months
(5% penalty per delayed month)

### 4️ Memory Management (`memory.c`)

Dynamically allocates space for multiple loan entries using `malloc()`.

### 5️ Reports Module (`reports.c`)

* Displays total loan amount issued
* Shows defaulters based on duration

### 6️ Main Program (`main.c`)

Controls overall logic:
* Number of loans
* Input loop
* Summary display
* Reports
* Fine calculation by selecting loan index


## Team Contributions :

### Sarthak Sharma

* Created the loan structure (`loan.h`)
* Wrote major parts of the overall code
* Performed full project debugging and validation
* Coordinated communication and integration of all modules
* Final testing and file structuring

### Abhay Pratap Singh

* Developed the fine calculation logic (`fine.c`)
* Resolved issues in fine computation formula
* Helped integrate fine calculation into main program

### Kavya Kushwaha

* Implemented memory allocation functions (`memory.c`)
* Designed dynamic storage system for loan records
* Ensured safe allocation and pointer handling

### Aradhya Chauhan

* Worked on Reports Module (`reports.c`)
* Implemented:
  * Total loan amount calculator
  * Defaulters detection
* Helped format report output


## Conclusion:
This project successfully demonstrates:
* Modular programming using multiple `.c` and `.h` files
* Structured data management
* Dynamic memory allocation
* Practical loan management logic
* Team collaboration
