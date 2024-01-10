#include<cstdio>
#include<cstring>
// Struct representing a bank account
struct BankAccount {
    char owner[50];
    float balance;
};

// Function to initialize a bank account
void initializeAccount(struct BankAccount* account, const char* owner, float balance) {
    strcpy_s(account->owner, owner);
    account->balance = balance;
}

// Function to deposit money into an account
void deposit(struct BankAccount* account, float amount) {
    account->balance += amount;
}

// Function to withdraw money from an account
void withdraw(struct BankAccount* account, float amount) {
    if (amount <= account->balance) {
        account->balance -= amount;
    }
    else {
        printf("Insufficient funds!\n");
    }
}


int main4() {
    // Create an account
    struct BankAccount myAccount;
    initializeAccount(&myAccount, "John Doe", 1000.0);

    // Deposit and withdraw money
    deposit(&myAccount, 500.0);
    withdraw(&myAccount, 200.0);

    return 0;
}