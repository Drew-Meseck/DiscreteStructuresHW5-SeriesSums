/*
Drew Meseck
10/26/2020
Discrete Structures: Homework5
*/

#include <stdio.h> 
#include <iostream>
#include <cmath>
using namespace std;



float sum_arithmetic(float a, float d, int n){
    float sum = 0;
    for (int i = 0; i < n; i++){
        cout << a << " ";
        sum += a;
        a = a + d;
    }
    cout << "\n";
    return sum;
}


float sum_geometric(float a, float r, int n){
    float sum = 0;
    for (int i = 0; i < n; i++){
        cout << a << " ";
        sum += a;
        a *= r;
    }
    cout << "\n";
    return sum;
}

bool infinite_geo_sum(float a, float r){
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
    cout << sum_arithmetic(1, 5, 13);
    cout << "\n";
    cout << sum_geometric(1, 3, 6);
    cout << "\n";
    bool has_sum = infinite_geo_sum(1, .333333333333);
    
    return 0;
}


