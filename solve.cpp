#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
#define pb push_back
#define vl vector<long long int>
#define ff first
#define ss second
#define fo(i, n) for (long long i = 0; i < n; i++)
#define in(n, a)                \
    for (int i = 0; i < n; i++) \
        cin >> a[i];
#define ou(n, a)                \
    for (int i = 0; i < n; i++) \
        cout << a[i];
#define out(n, a)               \
    for (int i = 0; i < n; i++) \
        cout << a[i] << ' ';

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        if (n == 2)
        {
            cout << "2" << endl;
            continue;
        }

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        ll ans = 0;
        for (int i = 1; i < n; i++)
        {
            reverse(arr.begin() + i, arr.end());
            ll sum = 0, mx = INT_MIN;
            for (int j = 0; j < n; j++)
            {
                mx = max((arr[j] * (j + 1)), mx);
                sum += (arr[j] * (j + 1));
            }
            sum -= mx;
            ans = max(ans, sum);
            reverse(arr.begin() + i, arr.end());
        }
        cout << ans << endl;
    }
    return 0;
}