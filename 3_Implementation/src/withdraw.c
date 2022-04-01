/**
 * @file withdraw.c
 * @author Siddharth Dagar
 * @brief 
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include"atm.h"

float moneyWithdraw(float balance) {
    float withdraw;
    bool back = true;

    printf("You choose to Withdraw a money\n");
    printf("Your Balance is: $%.2f\n\n", balance);

    while (back) {
    printf("Enter your amount to withdraw:\n");
    scanf("%f", &withdraw);


    if (withdraw < balance) {
        back = false;
        balance -= withdraw;
        printf("\nYour withdrawing money is:  $%.2f\n", withdraw);
        printf("Your New Balance is:   $%.2f\n\n", balance);

    }

        else  {

        printf("----You don't have enough amount----\n");
        printf("Please contact to your Bank\n");
        printf("Your Balance is:   $%.2f\n\n", balance);

    }
    }
    return balance;


}//money withdraw
