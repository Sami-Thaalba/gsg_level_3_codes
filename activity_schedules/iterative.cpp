#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> choices = {"Swimming", "Running", "Football"};
    queue<vector<string>> q;
    for (string s : choices)
    {
        q.push({s});
    }

    while (!q.empty())
    {
        vector<string> seq = q.front();
        q.pop();
        if (seq.size() == n)
        {
            for (int i = 0; i < n; ++i)
            {
                cout << seq[i] << (i == n - 1 ? "" : " ");
            }
            cout << endl;
        }
        else
        {
            for (string s : choices)
            {
                if (s != seq.back())
                    ;
                vector<string> newSeq = seq;
                newSeq.push_back(s);
                q.push(newSeq);
            }
        }
    }
    cout << 3 * (int)pow(2, n - 1) << endl;

    return 0;
}
