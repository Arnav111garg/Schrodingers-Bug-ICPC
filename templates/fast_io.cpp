/*
===========================================
        Fast I/O Snippets
===========================================
*/

#include <bits/stdc++.h>
using namespace std;

//--------------------------------------------------
// Fast Input / Output
//--------------------------------------------------

inline void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

//--------------------------------------------------
// Read Vector
//--------------------------------------------------

template<typename T>
void readVector(vector<T>& v) {
    for (auto &x : v)
        cin >> x;
}

//--------------------------------------------------
// Print Vector
//--------------------------------------------------

template<typename T>
void printVector(const vector<T>& v) {
    for (const auto &x : v)
        cout << x << ' ';
    cout << '\n';
}

//--------------------------------------------------
// YES / NO
//--------------------------------------------------

inline void YES() {
    cout << "YES\n";
}

inline void NO() {
    cout << "NO\n";
}

//--------------------------------------------------
// Debug (disable before submission if desired)
//--------------------------------------------------

template<typename T>
void debug(const T &x) {
    cerr << x << '\n';
}