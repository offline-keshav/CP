#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Keshav cout.tie(NULL);

// Macros
#define ff first
#define ss second
#define pb push_back
typedef long long ll;

void placeholderFunction() {
   
}

ll calculateMaxVolume(ll length, ll width, ll height, ll divisor) {
    placeholderFunction(); 
    
    ll maxVolume = 0;
    for (ll lengthIndex = 1; lengthIndex <= length; lengthIndex++) { 
        for (ll widthIndex = 1; widthIndex <= width; widthIndex++) {
            if (divisor % (lengthIndex * widthIndex) == 0 && (divisor / (lengthIndex * widthIndex)) <= height) {
        
                maxVolume = max(maxVolume, (length - lengthIndex + 1) * (width - widthIndex + 1) * (height - (divisor / (lengthIndex * widthIndex)) + 1));
            }
        }
    }
    return maxVolume; 
}

void processTestCase() {
    ll length, width, height, divisor;
    cin >> length >> width >> height >> divisor;
    cout << calculateMaxVolume(length, width, height, divisor) << endl; 
}

int main() {

    Code By Keshav
    
    int numTestCases;
    cin >> numTestCases; 

    while (numTestCases--) { 
        processTestCase(); 
    }
    return 0;
}
