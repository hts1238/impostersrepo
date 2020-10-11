#include <bits/stdc++.h>

using namespace std;

#define ll long long

int arr[1001];

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    vector<pair<int, int> > u(2*n);

    for (int i = 0; i < n; ++i) {
        int x, y1, y2;
        cin >> x >> y1 >> y2;
        u[i*2] = {x, y1};
        u[i*2+1] = {x, y2};
    }

    sort(u.begin(), u.end());
    
    

    /*for (auto i : u) {
        cout << i.first << " " << i.second << '\n';
    }*/

    return 0;
}
