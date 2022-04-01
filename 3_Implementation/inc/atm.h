/**
 * @file atm.h
 * @author Siddharth Dagar
 * @brief 
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __ATM_H__
#define __ATM_H__

int mainMenu(void);
float checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
int menuExit(void);
int errorMessage(void);

#endif
