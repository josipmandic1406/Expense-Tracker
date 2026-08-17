# Expense Tracker

A console-based expense tracking application developed in C++.

## About the project

This project was created to practice object-oriented programming, STL containers and modular code organization in C++.

The application allows users to manage personal expenses through a text-based menu.

## Features

- Add a new expense.
- List all expenses.
- Search for an expense by ID.
- Search for expenses by description.
- Search for expenses by amount.
- Delete an expense by ID.
- Delete expenses by description.
- Delete expenses by amount.
- Calculate the total amount of all expenses.

## Technologies

- C++
- Object-oriented programming
- Standard Template Library
- `std::vector`
- Git and GitHub

## Project structure

```text
.
├── Expense.h
├── Expense.cpp
├── ExpenseManager.h
├── ExpenseManager.cpp
└── main.cpp
```

### `Expense`

Represents one expense and stores:

- ID
- Description
- Amount

### `ExpenseManager`

Manages the collection of expenses and provides functionality for:

- Adding expenses.
- Searching for expenses.
- Deleting expenses.
- Calculating the total amount.

## How to compile

Compile the project using a C++ compiler:

```bash
g++ -std=c++17 Expense.cpp ExpenseManager.cpp main.cpp -o expense_tracker
```

## How to run

On macOS or Linux:

```bash
./expense_tracker
```

On Windows:

```bash
expense_tracker.exe
```

## Current limitations

- Expenses are currently stored only in memory.
- Data is lost when the application is closed.
- The application uses a console-based interface.
- Input validation is currently limited.

## Planned improvements

- Add saving and loading expenses from a file.
- Add stronger input validation.
- Add unit tests.
- Improve the user interface.
- Add support for expense categories and dates.

## Author

Josip Mandić
