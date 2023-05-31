#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>
#include <iomanip>

using namespace std;

const int NUM_CANNED_FOODS = 5;
const int NUM_CUP_NOODLES = 5;
const int NUM_BISCUITS = 5;
const int NUM_SOFT_DRINKS = 5;

class Receipt {
public:
    std::vector<std::string> get_items() const {
        return items;
    }

    void add_item(const std::string& name, float price) {
        items.push_back(name);
        prices.push_back(price);
    }

    void print() const {
        cout<<"\n\n\t\tSMALL GROCERY STORE\n";
        cout << "------------------------------------\n";
        cout << "Receipt\n";
        cout << "------------------------------------\n";
        cout << "Date: " << get_current_date() << "\n";
        cout << "Items:\n";
        for (const auto& item : items) {
            cout  << "\n\n- " <<"\t\t\t\t"<< item << "\n";
        }
        cout<< "------------------------------------\n";
        cout << "Total: \t\t\t\tP " << std::fixed << std::setprecision(2) << get_total() << "\n";
    }

    float get_total() const {
        float total = 0;
        for (const auto& price : prices) {
            total += price;
        }
        return total;
    }

    std::string get_current_date() const {
        std::time_t t = std::time(nullptr);
        char mbstr[100];
        std::strftime(mbstr, sizeof(mbstr), "%c", std::localtime(&t));
        return mbstr;
    }

private:
    std::vector<std::string> items;
    std::vector<float> prices;
};

#endif