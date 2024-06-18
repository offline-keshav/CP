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

//Code
int find_optimal_x(int n) {
    int max_sum = 0;
    int optimal_x = 2;
    for (int x = 2; x <= n; ++x) {
        int k = n / x;
        int current_sum = x * k * (k + 1) / 2;
        if (current_sum > max_sum) {
            max_sum = current_sum;
            optimal_x = x;
        }
    }
    return optimal_x;
}

//Main
int main() {

    Code By Keshav
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << find_optimal_x(n) << '\n';
    }
    return 0;
}