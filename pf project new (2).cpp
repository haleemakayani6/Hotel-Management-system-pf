#include <iostream>
#include <string>
using namespace std;

// Function to calculate the total bill for an item
int totalbill(int itemprice, int itemquantity) {
    return  itemprice * itemquantity;
}

// Function to generate a sales report
void generateReport(int salesCount[], int totalSales, string reportType) {
    cout << "\n---- " << reportType << " Sales Report ----\n";
    cout << "Item 1 (Burger) sold: " << salesCount[0] << " times\n";
    cout << "Item 2 (Pizza) sold: " << salesCount[1] << " times\n";
    cout << "Item 3 (Fries) sold: " << salesCount[2] << " times\n";
    cout << "Item 4 (Tea) sold: " << salesCount[3] << " times\n";
    cout << "Item 5 (Sandwich) sold: " << salesCount[4] << " times\n";
    cout << "Item 6 (Samosa) sold: " << salesCount[5] << " times\n";
    cout << "Item 7 (Coffee) sold: " << salesCount[6] << " times\n";
    cout << "Total earnings: Rs." << totalSales << endl;
}
struct customer{
	string name;
	int phone;
};
int main() {
    // Menu Items and Prices
    int salesCount[7] = {0, 0, 0, 0, 0, 0, 0};
    int totalSales = 0;
    int burgerprice = 250, pizzaprice = 800, friesprice = 150;
    int teaprice = 100, sandwichprice = 130, samosaprice = 40, coffeeprice = 150;
    int choice, quantity;
    char orderMore;
    int s;
      cout << "--------------------------------------------\n";
        cout << "Welcome to the Cafeteria Management System!\n";
        cout << "--------------------------------------------\n";
    cout<<"enter total number of customers:";
    cin>>s;
    int arr[s];
    for(int i=0;i<=s;i++)
    { cout<<"\n   \tcustomer "<<i+1<<" .....\n";
    
	   customer c;
   cout<<"\nenter customer name:";
   cin>>c.name;
    cout<<"\nenter customer phone number:";
    cin>>c.phone;
    cout << "Welcome to the Cafeteria Management System!\n";
    cout << "--------------------------------------------\n";
    do {
        // Display menu
        cout << "Menu:\n";
        cout << "1. Burger - Rs." << burgerprice << endl;
        cout << "2. Pizza  - Rs." << pizzaprice << endl;
        cout << "3. Fries  - Rs." << friesprice << endl;
        cout << "4. Tea    - Rs." << teaprice << endl;
        cout << "5. Sandwich - Rs." << sandwichprice << endl;
        cout << "6. Samosa   - Rs." << samosaprice << endl;
        cout << "7. Coffee   - Rs." << coffeeprice << endl;

        // Take user input for item choice
        cout << "Enter the number of the item you want to order: ";
        cin >> choice;

        // Validate choice and update sales data
        if (choice >= 1 && choice <= 7) {
            cout << "Enter quantity: ";
            cin >> quantity;

            int itemPrice = 0;
            switch (choice) {
                case 1: itemPrice = burgerprice; break;
                case 2: itemPrice = pizzaprice; break;
                case 3: itemPrice = friesprice; break;
                case 4: itemPrice = teaprice; break;
                case 5: itemPrice = sandwichprice; break;
                case 6: itemPrice = samosaprice; break;
                case 7: itemPrice = coffeeprice; break;
            }

            totalSales = totalbill(itemPrice, quantity)+totalSales;
            salesCount[choice - 1] += quantity;
        } else {
            cout << "Invalid option. Please try again.\n";
            continue;
        }

        cout << "Do you want to order more? (y/n): ";
        cin >> orderMore;
    } while (orderMore == 'y' || orderMore == 'Y');

    // Display final bill
    cout << "--------------------------------------------\n";
    cout << "Your total bill is: Rs." << totalSales << endl;

    // Generate reports
    int reportChoice;
    cout << "Enter 1 for Weekly Report:";
    cin >> reportChoice;

    if (reportChoice == 1) {
        generateReport(salesCount, totalSales, "Weekly");
    cout << "Enter , 2 for Monthly Report, or any other key to exit: ";
    cin >> reportChoice;

    if (reportChoice == 2) {
        generateReport(salesCount, totalSales, "Monthly");
    } else {
        cout << "Thank you for visiting the cafeteria!\n";
    }
    int z;
    cout<<"enter 8 for more customers or enter 9 if there are no more customers:";
    cin>>z;
    if(z==8)
    {
    	continue;
	}
	if(z==9)
	{
		break;
	}
}
    

    return 0;
}
}
