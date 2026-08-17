#include <iostream>
#include "Expense.h" //navodnici, a ne <>!!!

Expense::Expense(int i, const std::string& d, int a){//konstruktor
    id = i;
    description = d;
    amount = a;
}

void Expense::SetID(int i){
    id = i;
}

void Expense::SetDescription(const std::string& d){
    description = d;
}

void Expense::SetAmount(int a){
    amount = a;
}

int Expense::GetID() const{ //const
    return id;
}

std::string Expense::GetDescription() const{ //const
    return description;
}

int Expense::GetAmount() const{ //const
    return amount;
}

void Expense::PrintEverything() const{ //const
    std::cout<<"Expense ID: "<<id<<std::endl;
    std::cout<<"Expense description: "<<description<<std::endl;
    std::cout<<"Expense amount: "<<amount<<"€"<<std::endl;
}