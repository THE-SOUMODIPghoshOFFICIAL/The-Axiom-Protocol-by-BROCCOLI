/* * Problem 1.2 
 * The distance between two cities (in kilometers) is input through the 
 * keyboard. Write a program to convert and print this distance in meters, 
 * feet, inches and centimeters. 
 */

/* Conversion of distance in C++ */ 
#include <iostream> // Use iostream for C++ input/output

// Using namespace std to avoid prefixing std:: to cout, cin, etc.
using namespace std; 

int main( ) 
{ 
    float  km, m , cm, ft, inch; 
    
    // Use cout for output
    cout << "Enter the distance in Kilometers: "; 
    
    // Use cin for input
    cin >> km; 
    
    /* Calculations remain the same */
    m = km * 1000; 
    cm = m * 100; 
    inch = cm / 2.54f; // Using 2.54f to explicitly make it a float
    ft = inch / 12; 
    
    // Use cout to print the results
    cout << "Distance in meters = " << m << endl; 
    cout << "Distance in centimeter = " << cm << endl; 
    cout << "Distance in feet = " << ft << endl; 
    cout << "Distance in inches = " << inch << endl; 
    
    return 0; 
}
