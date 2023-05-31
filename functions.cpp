#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>
#include <iomanip>
#include "Receipt.h"

using namespace std;

void instructions() {
    cout << "\n\n\n= = = = = = = = = = = = = = = = = = = = = = = = = =\n"
              << "||          1.Canned Foods            ||\n"
              << "||          2.Cup Noodles             ||\n"
              << "||          3.Biscuits                ||\n"
              << "||          4.Softdrinks              ||\n";
}

void order_canned_foods(Receipt& receipt) {
    int quantity;
    float price = 50;
    cout << "\nYou have selected Canned Foods. Each can costs ₱50.\n";
    cout << "How many cans do you want to order? ";
    std::cin >> quantity;
    float total_price = price * quantity;
    receipt.add_item(std::to_string(quantity) + " Canned Foods", total_price);
    cout << quantity << " cans of Canned Foods have been added to your order.\n";
}

void order_cup_noodles(Receipt& receipt) {
    int quantity;
    float price = 25;
    cout << "\nYou have selected Cup Noodles. Each cup costs ₱25.\n";
    cout << "How many cups do you want to order? ";
    std::cin >> quantity;
    float total_price = price * quantity;
    receipt.add_item(std::to_string(quantity) + " Cup Noodles", total_price);
    cout << quantity << " cups of Cup Noodles have been added to your order.\n";
}

void order_biscuits(Receipt& receipt) {
    int quantity;
    float price = 15;
    cout << "\nYou have selected Biscuits. Each pack costs ₱15.\n";
    cout << "How many packs do you want to order? ";
    std::cin >> quantity;
    float total_price = price * quantity;
    receipt.add_item(std::to_string(quantity) + " Biscuits", total_price);
    cout << quantity << " packs of Biscuits have been added to your order.\n";
}

void order_soft_drinks(Receipt& receipt) {
    int quantity;
    float price = 20;
    cout << "\nYou have selected Softdrinks. Each bottle costs ₱20.\n";
    cout << "How many bottles do you want to order? ";
    std::cin >> quantity;
    float total_price = price * quantity;
    receipt.add_item(std::to_string(quantity) + " Softdrinks", total_price);
    cout << quantity << " bottles of Softdrinks have been added to your order.\n";
}

