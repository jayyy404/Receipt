/*Program Title: Small Grocery Receipt
  Submitted by: John Paul T. Sapasap
  Program Description: This program show the list of products and their prices as well as how many
  did the user buy and show the total cost into a text file everytime the program is run*/

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>
#include <iomanip>
#include "functions.cpp"


int main() {
    std::string file_name;
    std::cout << "Enter the file name to save the receipt: ";
    std::cin >> file_name;
    std::ofstream file(file_name);

    Receipt receipt;

    instructions();
    int choice;
    while (true) {
        std::cout << "\nEnter your choice (1-4), or 0 to exit: ";
        std::cin >> choice;
        switch (choice) {
            case 0:
                std::cout << "\nThank you for using our service. Your receipt has been saved to " << file_name << ".\n";
                receipt.print();
                file<<"\t\tSMALL GROCERY STORE\n";
                file << "------------------------------------\n";
                file << "Receipt\n";
                file << "------------------------------------\n";
                file << "Date: " << receipt.get_current_date() << "\n\n";
                file << "Items:\n";
                for (const auto& item : receipt.get_items()) {
                    file << "\n\n- " <<"\t\t\t\t"<< item << "\n";
                }
                file << "------------------------------------\n";
                file << "Total: \t\t\tP " << std::fixed << std::setprecision(2) << receipt.get_total() << "\n";
                file.close();
                return 0;
            case 1:
                order_canned_foods(receipt);
                break;
            case 2:
                order_cup_noodles(receipt);
                break;
            case 3:
                order_biscuits(receipt);
                break;
            case 4:
                order_soft_drinks(receipt);
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    }
}
