#include <iostream>

class Expense{
private:
    int id;
    std::string description;
    int amount;
public:
    Expense(int i, const std::string& d, int a);//konstruktor
    void SetID(int i);
    void SetDescription(const std::string& d);
    void SetAmount(int a);
    int GetID() const;
    std::string GetDescription() const;
    int GetAmount() const;
    void PrintEverything() const;
};