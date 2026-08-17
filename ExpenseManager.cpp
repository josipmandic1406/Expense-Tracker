//#include "Expense.h"
#include "ExpenseManager.h"

void ExpenseManager::addExpense(int amount, const std::string& description){
    Expense e (nextId, description, amount);
    expenses.push_back(e);
    nextId++;
}

void ExpenseManager::listExpenses() const{
    for (int i = 0; i<expenses.size() ; i++){
        expenses.at(i).PrintEverything();
    }
}

void ExpenseManager::printExpenseById(int id) const{ //const + const id
    for (int i = 0; i<expenses.size(); i++){
        if(expenses.at(i).GetID() == id){
            expenses.at(i).PrintEverything();
            break;
        }
    }

}

void ExpenseManager::printExpenseByDescription(const std::string& description) const{ //const + const description
    for (int i = 0; i<expenses.size(); i++){
        if(expenses.at(i).GetDescription() == description){
            expenses.at(i).PrintEverything();
        }
    }

}

void ExpenseManager::printExpenseByAmount(int amount) const{ //const + const amount
    for (int i = 0; i<expenses.size(); i++){
        if((int)expenses.at(i).GetAmount() == amount){
            expenses.at(i).PrintEverything();
        }
    }

}

void ExpenseManager::deleteExpenseByDescription(const std::string& description){
    for (int i = 0; i<expenses.size(); i++){
        if (expenses.at(i).GetDescription() == description){
            expenses.at(i).PrintEverything();
            expenses.erase(expenses.begin() + i);
            i--;
        }
    }
}

void ExpenseManager::deleteExpenseById(int id){
    for (int i = 0; i<expenses.size(); i++){
        if (expenses.at(i).GetID() == id){
            expenses.at(i).PrintEverything();
            expenses.erase(expenses.begin() + i);
            i--;
        }
    }
}

void ExpenseManager::deleteExpenseByAmount(int a){
    for (int i = 0; i< expenses.size(); i++){
        if (expenses.at(i).GetAmount() == a){
            expenses.at(i).PrintEverything();
            expenses.erase(expenses.begin() + i);
            i--;
        }
    }
}

int ExpenseManager::GetTotalAmount() const{ //const
    int total = 0;
    for (int i = 0; i<expenses.size(); i++){
        total += expenses.at(i).GetAmount();
    }
    return total;
}