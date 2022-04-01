/**
 * @file balance.c
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

float checkBalance(float balance) {
    printf("You Choose to See your Balance\n");
    printf("\n\nYour Available Balance is:   $%.2f\n\n", balance);
    return balance;

}//Check Balance


