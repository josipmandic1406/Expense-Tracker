//#include "Expense.h"
#include "ExpenseManager.h"
#include <iostream>
#include <limits>
#include <string>

//lines of code(projekt): 286

int main(){
    ExpenseManager manager;
    while(1){
        std::cout<<"Pick function"<<std::endl;
        std::cout<<"1 - new expense"<<std::endl;
        std::cout<<"2 - find expense"<<std::endl;
        std::cout<<"3 - delete expense"<<std::endl;
        std::cout<<"4 - total amount spent"<<std::endl;
        std::cout<<"5 - list all expenses"<<std::endl;
        std::cout<<"0 - exit application"<<std::endl;
        int choice1;
        std::cin>>choice1;
        switch (choice1){
            case 1:{
                int a;
                std::string d;
                std::cout<<"Enter amount: "<<std::endl;
                std::cin>>a;
                std::cout<<"Enter description: "<<std::endl;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::getline(std::cin, d);
                manager.addExpense(a, d);
                break;
            }
            case 2: {
                std::cout<<"1 - find expense by ID"<<std::endl;
                std::cout<<"2 - find expense by amount"<<std::endl;
                std::cout<<"3 - find expense by description"<<std::endl;
                int choice2;
                std::cin>>choice2;
                switch (choice2){
                    case 1:{
                        std::cout<<"Enter ID: ";
                        int id;
                        std::cin>>id;
                        manager.printExpenseById(id);
                        break;
                    }
                    case 2:{
                        std::cout<<"Enter amouont: ";
                        int a;
                        std::cin>>a;
                        manager.printExpenseByAmount(a);
                        break;
                    }
                    case 3:{
                        std::cout<<"Enter description: ";
                        std::string d;
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        std::getline(std::cin, d);
                        manager.printExpenseByDescription(d);
                        break;
                    }
                    default: continue;
                }
                break;
            }
            case 3: {
                std::cout<<"1 - delete expense by id"<<std::endl;
                std::cout<<"2 - delete expense by amount"<<std::endl;
                std::cout<<"3 - delete expense by description"<<std::endl;
                int choice3;
                std::cin>>choice3;
                switch (choice3){
                    case 1:{
                        std::cout<<"Enter ID: ";
                        int id;
                        std::cin>>id;
                        manager.printExpenseById(id);
                        std::cout<<"Are you sure you want to delete this expense? Press 1 if yes: ";
                        int confirmation;
                        std::cin>>confirmation;
                        if(confirmation == 1){
                            manager.deleteExpenseById(id);
                            std::cout<<"Expense deleted."<<std::endl;
                        }
                        break;
                    }
                    case 2:{
                        std::cout<<"Enter amount: ";
                        int a;
                        std::cin>>a;
                        manager.printExpenseByAmount(a);
                        std::cout<<"Are you sure you want to delete this expense? Press 1 if yes: ";
                        int confirmation;
                        std::cin>>confirmation;
                        if(confirmation == 1){
                            manager.deleteExpenseByAmount(a);
                            std::cout<<"Expense deleted."<<std::endl;
                        }
                        break;
                    }
                    case 3:{
                        std::cout<<"Enter description: ";
                        std::string d;
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        std::getline(std::cin, d);
                        manager.printExpenseByDescription(d);
                        std::cout<<"Are you sure you want to delete this expense? Press 1 if yes: ";
                        int confirmation;
                        std::cin>>confirmation;
                        if(confirmation == 1){
                            manager.deleteExpenseByDescription(d);
                            std::cout<<"Expense deleted."<<std::endl;
                        }
                        break;
                    }
                    default: continue;
                }
                break;
            }
            case 4: {
                std::cout<<"Total amount spent: "<<manager.GetTotalAmount()<<std::endl;
                break;
            }
            case 5: {
                 manager.listExpenses();
                 break;
            }
            case 0: {
                return 0;
            }
            default: continue;
        }
    }
    return 0;
}