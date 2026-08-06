/*
===========================================
    Schrödinger's Bug - ICPC Template
===========================================

Author      :
Team        : Schrödinger's Bug
Language    : C++17
Description : Base template for Competitive Programming

===========================================
*/

#include <bits/stdc++.h>
using namespace std;

//====================================================
// Type Aliases
//====================================================

using ll = long long;
using ull = unsigned long long;
using ld = long double;

using pii = pair<int, int>;
using pll = pair<ll, ll>;

using vi = vector<int>;
using vl = vector<ll>;
using vpi = vector<pii>;
using vpl = vector<pll>;

//====================================================
// Constants
//====================================================

constexpr int INF = 1e9;
constexpr ll LINF = 1e18;
constexpr int MOD = 1'000'000'007;
constexpr int MOD2 = 998244353;

//====================================================
// Macros
//====================================================

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define sz(x) ((int)(x).size())

//====================================================
// Utility Functions
//====================================================

template<typename T>
inline void chmax(T &a, T b) {
    if (b > a) a = b;
}

template<typename T>
inline void chmin(T &a, T b) {
    if (b < a) a = b;
}

//====================================================
// Solve
//====================================================

void solve() {

}

//====================================================
// Main
//====================================================

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}