
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

        multimap<string, int> mult_mpp;
        mult_mpp["adam"] = 99;
        mult_mpp["striver"] = 35;
        mult_mpp["raj"] = 46;
        mult_mpp.emplace("harry", 81);
        mult_mpp.emplace("neo", 36);
        mult_mpp["raj"] = 55;
        mult_mpp.emplace("harry", 32);

        //at(): returns a reference to mapped value of the element
        //identified with key. O(logn)
        cout<<mpp.at("raj")<<"\n";


        //count(): seraches the mapp for elements mapped by the given key
        //and returns 1 if found else 0
        if(mpp.count("raj"))
            cout<<"Key found!\n";
        else
            cout<<"Key not found!\n";
            
        //begin
        cout<<mpp.begin()->first<<"\n";
        cout<<mpp.begin()->second<<"\n";
        
        for(auto it:mpp){
           cout<<it.first<<" "<< it.second<<"\n";
        }

        return 0;
    }

    /*
    2
    5
    1 3 5 7 9
    6
    16 11 34 23 12  45
    */