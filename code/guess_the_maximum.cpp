#include <bits/stdc++.h>
using namespace std;

#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

#define endl '\n'
#define sz(s) ((int)((s).size()))
#define pb push_back

#define big long long = 1e18
#define sml long long  = -1e18
const ll mod = 1e9+7;

int main() {
    CODE_STARTS_FROM_HERE

    ll tc;
    cin >> tc;

    while(tc--) {
        ll n;
        cin >> n;

        ll arr[n];
        for(ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<ll> ans;

        for(int i = 0; i < n; i++) {
            ll max_val = arr[i];
            for(int j = i; j < n; j++) {
                max_val = max(max_val, arr[j]);
                ans.push_back(max_val - 1);
            }
        }

        sort(ans.begin(), ans.end());
        cout << ans[0] << endl;
    }

    return 0;
}
