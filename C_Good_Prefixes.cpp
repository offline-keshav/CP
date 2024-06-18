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

int count_good_prefixes(int n, const vector<int>& a) {
    int good_prefix_count = 0;
    long long prefix_sum = 0;
    int max_element = a[0];

    

    for (int i = 0; i < n; ++i) {

        

        prefix_sum += a[i];
        max_element = max(max_element, a[i]);
        if (prefix_sum - max_element == max_element) {
            ++good_prefix_count;
        }
        
    }

    return good_prefix_count ; 
}

int main() {

    Code By Keshav

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        cout << count_good_prefixes(n, a) << '\n';
    }

    return 0;
}