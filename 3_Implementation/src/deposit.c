/**
 * @file deposit.c
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

float moneyDeposit(float balance) {
    float deposit;
    printf("You choose to Deposit a money\n");
    printf("Your Balance is: $%.2f\n\n", balance);
    printf("Enter your amount to Deposit\n");
    scanf("%f", &deposit);


    balance += deposit;

    printf("\nYour New Balance is:   $%.2f\n\n", balance);
    return balance;

}//money deposit
