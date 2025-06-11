# Small Grocery Receipt Program

## Description

This is a simple C++ console application that simulates a small grocery store receipt system. The program allows users to select from a list of products (Canned Foods, Cup Noodles, Biscuits, Softdrinks), specify quantities, and generates a receipt showing the items purchased, their total cost, and the date of purchase. The receipt is displayed on the screen and saved to a text file.

## Features

- Menu-driven interface for product selection
- Calculates total cost based on user input
- Prints receipt with date and itemized list
- Saves receipt to a user-specified file

## How to Use

1. **Build the Program**
   - Make sure you have a C++ compiler (e.g., g++) installed.
   - Open a terminal in the project directory.
   - Compile the program:
     ```sh
     g++ Receipt.cpp -o receipt
     ```

2. **Run the Program**
   - In the terminal, run:
     ```sh
     ./receipt
     ```
     or on Windows:
     ```sh
     receipt.exe
     ```

3. **Follow the Prompts**
   - Enter a file name to save your receipt.
   - Select products by entering the corresponding number.
   - Enter the quantity for each product.
   - Enter `0` to finish and save the receipt.

4. **View the Receipt**
   - The receipt will be displayed in the console and saved to the file you specified.

## File Structure

- [Receipt.cpp](http://_vscodecontentref_/0) - Main program logic and user interaction
- [functions.cpp](http://_vscodecontentref_/1) - Functions for menu and order handling
- [Receipt.h](http://_vscodecontentref_/2) - Receipt class definition

## Example
Enter the file name to save the receipt: my_receipt.txt

= = = = = = = = = = = = = = = = = = = = = = = = = = || 1.Canned Foods || || 2.Cup Noodles || || 3.Biscuits || || 4.Softdrinks ||

Enter your choice (1-4), or 0 to exit: 1 How many cans do you want to order? 2 2 cans of Canned Foods have been added to your order.

...

Thank you for using our service. Your receipt has been saved to my_receipt.txt.