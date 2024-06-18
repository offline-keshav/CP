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

#define ll long long

ll performRitual(ll x, ll y, ll z) {
    ll result = 1;
    x %= z; 
    if (x == 0) return 0;  

    while (y > 0) {         
        if (y & 1) {        
            result = (result * x) % z; 
        }
        y >>= 1;             
        x = (x * x) % z;     
    }
    return result; 
}


int main() {

    Code By Keshav
    
    using namespace std; 

    int numQueries;
    cin >> numQueries; 

    while (numQueries--) {
        ll lowerBound, upperBound, key;
        cin >> lowerBound >> upperBound >> key;

        if (key >= 10) {   
            cout << 0 << endl;
            continue;       
        }

        ll maxDigit = 10 / key;  
        if (10 % key) {
            maxDigit++;        
        }

        
        ll highCount = performRitual(maxDigit, upperBound, 1000000007);
        ll lowCount = performRitual(maxDigit, lowerBound, 1000000007);
        ll validCount = (highCount - lowCount + 1000000007) % 1000000007; 

        cout << validCount << endl; 
    }
    

    return 0; 
}
