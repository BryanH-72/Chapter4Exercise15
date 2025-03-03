/* Program File Name:  Chapter4-Exercise15.cpp
Programmer: Bryan Hurley
Date:March 2025
Requirements: Write a program that asks for the weight of the package and the distance it is to be shipped, then displays the charges.
Input Validation: Do not accept values of 0 or less for the weight of the package. Do not accept weights of more than 20 kg (this is the maximum weight the company will ship).
Do not accept distances of less than 10 miles or more than 3,000 miles. These are the company's minimum and maximum shipping distances.
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double weight, rate;
    int distance;
    cout << "Enter package weight (in kg): ";
    cin >> weight;
    while (0 > weight || weight > 20){
        if (weight < 0) {
            cout << "The value entered for weight is too small. \n";
        }
        else {
            cout << "The value entered for weight is too large. \n";
        }
        cout << "Enter package weight (in kg): ";
        cin >> weight;
    }
    cout << "Enter shipping distance (in miles): ";
    cin >> distance;
    while (10 > distance || distance > 3000) {
        if (distance < 10) {
            cout << "The value entered for distance is too small. \n";
        }
        else {
            cout << "The value entered for distance is too large. \n";
        }
        cout << "Enter shipping distance (in miles): ";
        cin >> distance;
    }
    if (weight <= 2) {
        rate = 1.10;
    }
    else if (weight <= 6) {
        rate = 2.20;
    }
    else if (weight <= 10) {
        rate = 3.70;
    }
    else{
        rate = 4.80;
    }
    cout << setprecision(2) << fixed << "Weight: " << weight << " kg   |   Distance: " << distance << " Miles   |   Rate: $" << rate << " Per 500 miles.   |   Total Price: $" << (rate * distance / 500)<< endl;
}