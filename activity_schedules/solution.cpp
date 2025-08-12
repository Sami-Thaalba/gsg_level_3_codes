#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<string> choices = {"Swimming", "Running ", "Football"};
int cnt = 0;
void recur(vector<string> sequence, string prev, int n)
{

    if (sequence.size() == n)
    {
        for (int i = 0; i < n; ++i)
        {
            cout << sequence[i] << (i == n - 1 ? "" : " ");
        }
        cout << endl;
        // cnt++; we can do this to count how many schedules or use the formula given
        return;
    }

    for (string s : choices)
    {
        if (s != prev)
        {
            sequence.push_back(s);
            recur(sequence, s, n);
            sequence.pop_back();
        }
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<string> sequence;
    recur(sequence, "", n);
    cnt = 3 * (int)pow(2, n - 1); // formula
    cout << cnt << endl;

    return 0;
}