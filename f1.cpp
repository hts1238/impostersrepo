#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int r, f;
    cin >> r >> f;

    int d = r - f;

    if (r > 5 && d > 1) {
        cout << "No solution";
        return 0;
    }
    if (d > 3) {
        cout << "No solution";
        return 0;
    }

    if (r > 5) {
        cout << "Russia" << '\n' << "";
        for (int i = 0; i < r; ++i) {
            cout << '+';
        }
        cout << '\n';
        for (int i = 0; i < f; ++i) {
            cout << '+';
        }
        cout << "-";
        return 0;
    }
    if (r == 1 && f == 0) {
        cout << "Russia" << '\n' << "----+"
                         << '\n' << "-----";
        return 0;
    }
    if (r == 2 && f == 0) {
        cout << "Russia" << '\n' << "---++"
                         << '\n' << "----";
        return 0;
    }
    if (r == 2 && f == 1) {
        cout << "Russia" << '\n' << "----++"
                         << '\n' << "----+";
        return 0;
    }
    if (r == 3 && f == 0) {
        cout << "Russia" << '\n' << "+++"
                         << '\n' << "---";
        return 0;
    }
    if (r == 3 && f == 1) {
        cout << "Russia" << '\n' << "+++-"
                         << '\n' << "--+-";
        return 0;
    }
    if (r == 3 && f == 2) {
        cout << "Russia" << '\n' << "+++--"
                         << '\n' << "-++--";
        return 0;
    }
    if (r == 4 && f == 1) {
        cout << "Russia" << '\n' << "++++"
                         << '\n' << "--+";
        return 0;
    }
    if (r == 4 && f == 2) {
        cout << "Russia" << '\n' << "-++++"
                         << '\n' << "--++";
        return 0;
    }
    if (r == 4 && f == 3) {
        cout << "Russia" << '\n' << "-++++"
                         << '\n' << "-+++-";
        return 0;
    }
    if (r == 5 && f == 2) {
        cout << "No solution";
        return 0;
    }
    if (r == 5 && f == 3) {
        cout << "Russia" << '\n' << "+++++"
                         << '\n' << "+-++";
        return 0;
    }
    if (r == 5 && f == 4) {
        cout << "Russia" << '\n' << "+++++"
                         << '\n' << "++++-";
        return 0;
    }

    cout << "No solution";

    return 0;
}
