#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Keshav cout.tie(NULL);

// Macros
#define ff first
#define ss second
#define pb push_back

pair<int, int> find_center(const vector<string> &grid, int n, int m)
{
    int min_row = n, max_row = -1, min_col = m, max_col = -1;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (grid[i][j] == '#')
            {
                if (i < min_row)
                    min_row = i;
                if (i > max_row)
                    max_row = i;
                if (j < min_col)
                    min_col = j;
                if (j > max_col)
                    max_col = j;
            }
        }
    }

    int center_row = (min_row + max_row) / 2 + 1;
    int center_col = (min_col + max_col) / 2 + 1;

    return {center_row, center_col};
}

int main()
{
    Code By Keshav


        int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> grid(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> grid[i];
        }

        pair<int, int> center = find_center(grid, n, m);
        cout << center.ff << " " << center.ss << '\n';
    }

    return 0;
}