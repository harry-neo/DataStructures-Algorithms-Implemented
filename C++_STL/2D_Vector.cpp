
    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long int
    #define ld long double
    #define p 1000000007
    #define inf 1e18
    #define endl "\n"
    #define pb emplace_back
    #define vi vector<int>
    #define vll vector<ll>
    #define vs vector<string>
    #define pii pair<int, int>
    #define pll pair<ll, ll>
    #define ump unordered_map
    #define mp map
    #define pq_max priority_queue<ll>
    #define pq_min priority_queue<ll, vll, greater<ll>>
    #define ff first
    #define ss second
    #define mid(l, r) (l + (r - l) / 2)
    #define loop(i, a, b) for (int i = (a); i <= (b); i++)
    #define looprev(i, a, b) for (int i = (a); i >= (b); i--)

    int main(){

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        vector<vector<int>> v;

        vector<int> v1 = {1, 2, 3};
        vector<int> v2 = {5, 8, 7};
        vector<int> v3 = {15, 11, 4};
        
        v.push_back(v1);
        v.push_back(v2);
        v.push_back(v3);

        cout<<v.size()<<"\n";

        for(auto vctr: v){
            for(auto it: vctr){
                cout<<it<<" ";
            }
            cout<<"\n";
        }

        for(int i=0; i<v.size(); i++){
            for(int j=0; j<v[i].size(); j++){
                cout<<v[i][j]<<" ";
            }
            cout<<"\n";
        }

        //define a 10x15 vector
        vector<vector<int>> vec(10, vector<int>(15,0));

        //array of vectors
        vector<int> arr[4];

        // 10x20x30
        vector<vector<vector<int>>> vec2(10, vector<vector<int>>(20, vector<int>(35,0)));


        return 0;
    }

    