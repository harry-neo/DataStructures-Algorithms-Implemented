
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

        // Multiset - sotes all elements(duplicates) in soretd order
        multiset<int> mst;
        int n;cin>>n;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            mst.insert(x);
        }

        cout<<mst.size()<<"\n";
        for(auto ele:mst){
            cout<<ele<<" ";
        }
        cout<<endl;
        
        //mst.find(12); ->returns the first instance of 12

        //Unordered Multiset  -Stores all elements(duplicates) in random order
        unordered_multiset<int> uno_mst;
        cin>>n;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            uno_mst.insert(x);
        }

        cout<<uno_mst.size()<<"\n";
        for(auto ele: uno_mst){
            cout<<ele<<" ";
        }
        cout<<endl;

        return 0;
    }

    /*
    11
16 11 34 23 12 45 16 34 12 45 67 
11
16 11 34 23 12 45 16 34 12 45 67 
    */