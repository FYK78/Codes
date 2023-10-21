#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);
int cents;
int main(void)
{
    // Ask how many cents the customer is owed
    cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    cents = - 1;
    while (cents < 0)
    {
        cents = get_int("Cash Owed:\n");
    }
    return cents;
}

int calculate_quarters(int cent)
{
    // TODO
    int quarters = 0;
    while (cent >= 25)
    {
        cent -= 25;
        quarters += 1;
    }
    return quarters;
}

int calculate_dimes(int cent)
{
    // TODO
    int dimes = 0;
    while (cent >= 10)
    {
        cent -= 10;
        dimes += 1;
    }
    return dimes;
}

int calculate_nickels(int cent)
{
    // TODO
    int nickels = 0;
    while (cent >= 5)
    {
        cent -= 5;
        nickels += 1;
    }
    return nickels;
}

int calculate_pennies(int cent)
{
    // TODO
    int pennies = 0;
    while (cent >= 1)
    {
        cent -= 1;
        pennies += 1;
    }
    return pennies;
}
