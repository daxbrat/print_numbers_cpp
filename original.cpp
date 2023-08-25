#include <iostream>
#include <vector>
using namespace std;

int main () {
    
    char selection {};
    vector<int> listing {};

    
    do {
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        
        cin >> selection;
        
        if (selection == 'P' || selection == 'p') {
            if (listing.size() == 0) {
                cout << "[] - the list is empty\n" << endl;
            } else {
                    cout << "[ ";
                for (auto num: listing) {
                    cout << num << " ";
                }
            cout << "]\n" << endl;
            }
        } else if (selection == 'A' || selection == 'a') {
            int add_number{};
            cout << "Enter a number to add: ";
            cin >> add_number;
            listing.push_back(add_number);
            cout << add_number << " added\n" << endl;
        } else if (selection == 'M' || selection == 'm') {
            if (listing.size() == 0) {
                cout << "Unable to calculate the mean - no data" << endl;
            } else {
            double total{};
            double mean{};
            for (auto num: listing) {
                total += num;
            }
            mean = total / listing.size();
            cout << "The mean is: " << mean << "\n" << endl;
            }
        
        
        } else if (selection == 'S' || selection == 's' ) {
            if (listing.size() == 0) {
                cout << "Unable to determine the smallest number - the list is empty" << endl;
            } else {
            int smallest {listing.at(0)};
             for (auto num: listing) {
                if (num < smallest) {
                 smallest = num;
                }
             }
                cout << "The smallest number is " << smallest << "\n" << endl;
            } 
            
        } else if (selection == 'L' || selection == 'l' ) {
            if (listing.size() == 0) {
                cout << "Unable to determine the largest number - the list is empty" << endl;
            } else {
            int largest {listing.at(0)};
             for (auto num: listing) {
                if (num > largest) {
                 largest = num;
                }
             }
             cout << "The largest number is " << largest << "\n" << endl;
            } 
                
        } else if (selection != 'Q' && selection != 'q') {
                cout << "Unknown selection, please try again\n" << endl;
            }
             
        
    } while (selection != 'Q' && selection != 'q');
    cout << "\nGoodbye..." << endl;
    
    
    return 0;
}
