#include <iostream>
#include <string>

using namespace std;

double calculateBill(double units) {
    double bill = 0.0;
    
    if (units > 1 && units < 100) {
        bill = units * 0.80;
        bill += bill * 0.02; 
    } else if (units >= 100 && units < 300) {
        bill = units * 1.0;
        bill += bill * 0.05; 
    } else if (units >= 300 && units < 500) {
        bill = units * 1.20;
        bill += bill * 0.07; 
    } else if (units >= 500 && units < 800) {
        bill = units * 2.0;
        bill += bill * 0.11; 
    } else if (units >= 800 && units < 1200) {
        bill = units * 2.50;
        bill += bill * 0.15; 
    } else if (units >= 1200) {
        bill = units * 3.40;
        bill += bill * 0.18;
    }
    
    return bill;
}

int main() {
    string name,contactNo, address, meterNo;
    
    double newReading, currentReading, oldReading, meterRent = 50.0;
    
    cout << "Enter customer name: ";
    getline(cin, name);
    
    cout << "Enter contact number: ";
    getline(cin, contactNo);
    
    cout << "Enter address: ";
    getline(cin, address);
    
    cout << "Enter meter number: ";
    getline(cin, meterNo);
    
    cout << "Enter new reading: ";
    cin >> newReading;
    
    cout << "Enter current reading: ";
    cin >> currentReading;
    
    cout << "Enter old reading: ";
    cin >> oldReading;
    
    double units = currentReading - oldReading;
    
    double bill = calculateBill(units);
    bill += meterRent;
    
    cout << "\n--- Electricity Bill ---" << endl;
    cout << "Customer Name: " << name << endl;
    cout << "Contact Number: " << contactNo << endl;
    cout << "Address: " << address << endl;
    cout << "Meter Number: " << meterNo << endl;
    cout << "New Reading: " << newReading << endl;
    cout << "Current Reading: " << currentReading << endl;
    cout << "Old Reading: " << oldReading << endl;
    cout << "Meter Rent: " << meterRent << endl;
    cout << "Total Units Consumed: " << units << endl<< endl;
    cout << "Bill Amount: Rs. " << bill << endl;
    
    return 0;
}
