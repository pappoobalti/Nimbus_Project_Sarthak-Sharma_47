#ifndef LOAN_H
#define LOAN_H

typedef struct {
    int loanID;
    char borrowerName[50];
    float amount;
    float rate;
    int duration;
} Loan;

void inputLoan(Loan* l);
void displayLoan(Loan l);

#endif
