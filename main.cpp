//
//  main.cpp
//  Division Calculator
//
//  Created by Nathan Kibbe on 9/19/21.
//

#include <iostream>
using namespace std;

int main() {
    int userNum;
    int x;
    cout << "Enter Dividend and Divisor: " << endl;
    cin >> userNum;
    cin >> x;
    
    int ans1 = userNum / x;
    int ans2 = ans1 / x;
    int ans3 = ans2 / x;
    
    cout << ans1 << " " << ans2 << " " << ans3 << endl;
}
