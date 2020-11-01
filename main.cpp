/*
Drew Meseck
10/26/2020
Discrete Structures: Homework5
*/

#include <stdio.h> 
#include <iostream>
#include <cmath>
using namespace std;


//Funciton that prints n elements of a arithmetic sequence and sums them O(n) takes first element, difference, and number of elements
bool sum_arithmetic(float a, float d, int n){
    cout << "A1 = " << a << "\nd = " << d << "\nn = " << n << endl; 
    float sum = 0;
    for (int i = 0; i < n; i++){
        cout << a << " ";
        sum += a;
        a = a + d;
    }
    cout << "\n" << "Sum: " << sum << endl;
    return true;
}

//Function that prints n elements of a geometric sequence and sums them O(n) takes first element, ratio, and number of elements
bool sum_geometric(float a, float r, int n){
    float sum = 0;
    cout << "Geometric Series with a0 = " << a << ",\nr = " << r << ", \nand n = " <<  n << endl;
    for (int i = 0; i < n; i++){
        cout << a << " ";
        sum += a;
        a *= r;
    }
    cout << "\n" << "Sum: " << sum << endl;
    return true;
}

//Function that checks if a geometric series is infinite O(1) takes the first element and the ratio
bool infinite_geo_sum(float a, float r){
    cout << "Checking infinite series with first element: " << a << " and ratio: " << r << endl;
    if(r >= 1.0)
    {
        cout << "The Infinite Series has No Sum\n";
        return false;
    }
    else
    {
        float sum = (a / (1 - r));
        cout << "The Infinite Series Has A Sum Of: " << sum << "\n"; 
    }
    return true;
}


int main(){
    //PROBLEM 1A OUTPUT
    cout << "ARITHMETIC EXAMPLE 1:\n";
    //a1 = 1, d = 5, n = 13
    sum_arithmetic(1, 5, 13);
    cout << endl;
    cout << "ARITHMETIC EXAMPLE 2:\n";
    //a1 = 8, d = 10, n = 50
    sum_arithmetic(8, 10, 50);
    cout << endl;
    cout << "ARITHMETIC EXAMPLE 3:\n";
    //a1 = 4, d = 30, n = 7
    sum_arithmetic(4, 30, 7);
    cout << endl;
    //PROBLEM 1A END
 
    //PROBLEM 1B OUTPUT
    // My arithmetic sequence begins at 38, ends at 116 and has a common difference of 13 (n = 7)
    cout << "CUSTOM ARITHMETIC SEQUENCE:\n";
    sum_arithmetic(38, 13, 7);
    //PROBLEM 1B END
    cout << "\n\n\n";

    //PROBLEM 2A OUTPUT
    cout << "GEOMETRIC EXAMPLE 1:\n";
    //a = 1, r = 3, n = 6
    sum_geometric(1, 3, 6);
    cout << endl;
    cout<< "GEOMETRIC EXAMPLE 2:\n";
    //a = 10, r = .5, n = 12
    sum_geometric(10, .5, 12);
    cout << endl;
    cout << "GEOMETRIC EXAMPLE 3:\n";
    //a = 4, r = -0.7, n = 20
    sum_geometric(4, -0.7, 20);
    cout << endl;
    //PROBLEM 2A END

    //PROBLEM 2B OUTPUT
    cout << "CUSTOM GEOMETRIC EXAMPLE:\n";
    // My geometric sequence begins at 1, ends at 1.57772e-030, and has a ratio of 0.5 (n = 100)
    sum_geometric(1, .5, 100);
    cout << endl;
    //PROBLEM 2B END

    cout << "\n\n\n";
    //Problem 3 OUTPUT
    cout << "INFINITE GEOMETRIC SUM EXAMPLE 1 (HAS INFINITE SUM):\n";
    //infinite geo sum with r < 1 gives an infinite sum
    bool has_sum = infinite_geo_sum(1, .5);
    cout << endl;
    cout << "INFINITE GEOMETRIC SUM EXAMPLE 2 (DOES NOT HAVE INFINITE SUM:\n";
    //infinite geo sum with r > 1 gives no infinite sum
    bool has_sum2 = infinite_geo_sum(1, 5);
    cout << "End of Homework 5" << endl;

    
    return 0;
}


