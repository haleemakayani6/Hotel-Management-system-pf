# Hotel-Management-system-pf
Cafeteria Management System
The Cafeteria Management System is a console-based application built in C++ to manage cafeteria orders, calculate bills, and generate sales reports. It allows customers to order from a predefined menu, tracks sales data, and provides options for weekly or monthly sales reports. This project is ideal for learning fundamental programming concepts such as loops, conditionals, functions, and arrays.
Table of Contents

Features
Technologies Used
Installation
Usage
File Structure
Contributing
License

Features

Menu Display: Displays a fixed menu with item names and prices.
Order Management: Enables customers to select items and specify quantities.
Bill Calculation: Calculates the total bill for each customer based on their orders.
Sales Tracking: Records the number of each item sold and total earnings across all customers.
Report Generation: Provides options to view weekly or monthly sales reports.
Customer Information: Collects customer name and phone number for each order.
Multiple Customers: Supports processing orders for multiple customers in one session.

Technologies Used

Programming Language: C++
Standard Libraries: <iostream>, <string>

Installation

Clone the Repository:
git clone https://github.com/your-username/cafeteria-management-system.git
cd cafeteria-management-system


Compile the Code:

Use a C++ compiler like g++ to compile the source code.

g++ -o cafeteria_system pf_project_new.cpp


Run the Application:

Execute the compiled binary.

./cafeteria_system



Usage

Start the Application:

Launch the program to access the Cafeteria Management System.


Enter Number of Customers:

Input the total number of customers who will place orders.


Customer Information:

For each customer, provide their name and phone number.


Place Orders:

View the menu and select items by entering the corresponding number (1-7).
Specify the quantity for each item.
Choose to order more items (y) or proceed to billing (n).


View Bill:

After completing the order, the total bill for the customer is displayed.


Generate Reports:

Enter 1 to view a weekly sales report or 2 for a monthly report.
Reports show item-wise sales counts and total earnings.


Handle More Customers:

Enter 8 to serve additional customers or 9 to exit the program.



File Structure
cafeteria-management-system/

├── pf_project_new.cpp  # Main source code file
└── README.md           # Project documentation

Key Components

totalbill Function: Calculates the cost of an item based on its price and quantity.
generateReport Function: Displays sales reports with item sales counts and total earnings.
customer Struct: Stores customer name and phone number.
Main Function: Manages user input, order processing, billing, and report generation.

Contributing
Contributions are welcome! To contribute:

Fork the repository.
Create a new branch (git checkout -b feature-branch).
Make your changes and commit (git commit -m "Add feature").
Push to the branch (git push origin feature-branch).
Create a Pull Request with a detailed description.

Please ensure your code:

Uses consistent naming conventions.
Includes comments for clarity.
Handles invalid user input gracefully.


