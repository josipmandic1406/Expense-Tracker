#include <vector>
#include "Expense.h"

class ExpenseManager{
private:
    int nextId = 0;
    std::vector <Expense> expenses;
public:
    void addExpense(int amount, const std::string& description);
    void listExpenses() const;
    void printExpenseById(int id) const;
    void printExpenseByDescription(const std::string& description) const;
    void printExpenseByAmount(int amount) const;
    void deleteExpenseByDescription(const std::string& description);
    void deleteExpenseById(int id);
    void deleteExpenseByAmount(int a);
    int GetTotalAmount() const;
};