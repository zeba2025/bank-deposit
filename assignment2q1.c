#include <stdio.h>
typedef struct Customer {
    int Acc_no;
    char name[100];
    float balance;
} Customer;

float deposit(float bal, char *name, int no) {
    float amount;
    printf("Enter an amount to deposit: ");
    scanf("%f", &amount);

    bal += amount;
    printf("Account Number: %d\n", no);
    printf("Name: %s\n", name);
    printf("Current Amount: %.2f\n", bal);

    return bal;
}

float withdraw(float balance, char *name, int no) {
    float amount;
printf("Enter an amount to withdraw: ");
scanf("%f", &amount);

    if (amount > balance) {
        printf("Error: Insufficient balance.\n");
    } else {
 balance -= amount;
    printf("Account Number: %d\n", no);
 printf("Name: %s\n", name);
printf("Current Amount: %.2f\n", balance);
    }

    return balance;
}

int main() {
    Customer c1;

    printf("Create a new account\n");
    printf("Account Number: ");
    scanf("%d", &c1.Acc_no);

    printf("Name: ");
    getchar();
    gets(c1.name);
    printf("Balance: ");
    scanf("%f", &c1.balance);
    printf("Account Number: %d\n", c1.Acc_no);
    printf("Name: %s\n", c1.name);
    printf("Current Amount: %.2f\n", c1.balance);

    c1.balance = deposit(c1.balance, c1.name, c1.Acc_no);

    c1.balance = withdraw(c1.balance, c1.name, c1.Acc_no);
 c1.balance = withdraw(c1.balance, c1.name, c1.Acc_no);
    return 0;
}
