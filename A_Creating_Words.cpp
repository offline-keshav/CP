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
void sol()
{
    string a, b;
    cin >> a;
    cin >> b;

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    cout << a << " " << b << '\n';

}

//Main
int main()
{
    Code By Keshav
    
    int tests;
    cin >> tests;

    while (tests-- > 0)
    {

        sol();
    }
}