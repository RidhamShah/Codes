#include <algorithm>
#include <array>
#include <cassert>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) { os << '{'; string sep; for (const auto &x : v) os << sep << x, sep = ", "; return os << '}'; }
template<typename T, size_t size> ostream& operator<<(ostream &os, const array<T, size> &arr) { os << '{'; string sep; for (const auto &x : arr) os << sep << x, sep = ", "; return os << '}'; }
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

#ifdef NEAL_DEBUG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

template<typename T1, typename T2>
bool maximize(T1 &a, const T2 &b) {
    if (a < b) {
        a = b;
        return true;
    }

    return false;
}

template<typename T_vector>
void output_vector(const T_vector &v, bool add_one = false, int start = -1, int end = -1) {
    if (start < 0) start = 0;
    if (end < 0) end = int(v.size());

    for (int i = start; i < end; i++)
        cout << v[i] + (add_one ? 1 : 0) << (i < end - 1 ? ' ' : '\n');
}


const int N_MAX = 81;
const int16_t INF16 = 15005;

int N, zeros, ones;
vector<int> A;
int16_t retrieve_cost[N_MAX][N_MAX][2];
int16_t dp[N_MAX][N_MAX][N_MAX * N_MAX / 2];
int16_t next_dp[N_MAX][N_MAX][N_MAX * N_MAX / 2];

int main() {
    cin >> N;
    A.resize(N);

    for (auto &a : A)
        cin >> a;

    zeros = int(count(A.begin(), A.end(), 0));
    ones = int(count(A.begin(), A.end(), 1));

    for (int z = 0; z <= zeros; z++)
        for (int one = 0; one <= ones; one++) {
            vector<bool> bad(N, false);
            int a = 0, b = 0;

            for (int i = 0; i < N; i++)
                if (A[i] == 0)
                    bad[i] = a++ < z;
                else
                    bad[i] = b++ < one;

            int16_t first_z = INF16, first_o = INF16;
            int16_t index = 0;

            for (int i = 0; i < N; i++)
                if (!bad[i]) {
                    if (A[i] == 0)
                        first_z = min(first_z, index);
                    else
                        first_o = min(first_o, index);

                    index++;
                }

            retrieve_cost[z][one][0] = first_z;
            retrieve_cost[z][one][1] = first_o;
        }

    memset(dp, -63, sizeof(dp));
    dp[0][0][0] = 0;

    for (int prefix = 0; prefix < N; prefix++) {
        memset(next_dp, -63, sizeof(next_dp));

        for (int z = 0; z <= min(prefix, zeros); z++)
            for (int z_end = 0; z_end <= z; z_end++)
                for (int swaps = 0; swaps <= N * prefix - prefix * (prefix + 1) / 2; swaps++) {
                    int one = prefix - z;

                    // Get a 0
                    if (retrieve_cost[z][one][0] < INF16)
                        maximize(next_dp[z + 1][z_end + 1][swaps + retrieve_cost[z][one][0]], dp[z][z_end][swaps] + (z - z_end));

                    // Get a 1
                    if (retrieve_cost[z][one][1] < INF16)
                        maximize(next_dp[z][0][swaps + retrieve_cost[z][one][1]], dp[z][z_end][swaps]);
                }

        memcpy(dp, next_dp, sizeof(dp));
    }

    vector<int> answers(N * (N - 1) / 2 + 1, -INF16);

    for (int z = 0; z <= zeros; z++)
        for (int z_end = 0; z_end <= z; z_end++)
            for (int swaps = 0; swaps <= N * (N - 1) / 2; swaps++)
                maximize(answers[swaps], dp[z][z_end][swaps]);

    for (int s = 0; s < N * (N - 1) / 2; s++)
        maximize(answers[s + 1], answers[s]);

    output_vector(answers);
}

