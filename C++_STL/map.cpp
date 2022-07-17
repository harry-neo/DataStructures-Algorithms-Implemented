
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
    // #define ump unordered_map
    // #define mp map
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

        map<string, int> mpp;
        mpp["adam"] = 99;
        mpp["striver"] = 35;
        mpp["raj"] = 46;
        mpp.emplace("harry", 81);
        mpp.emplace("neo", 36);
        mpp["raj"] = 55;

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
        
        // for(auto it = mpp.begin(); it!= mpp.end(); it++){
        //     cout<<it->first<<" "<<it->second<<"\n";
        // }

        //O(1) in all cases
        //O(N) in worst cases - N is the contaoner size
        unordered_map<string, int> uno_mpp;
        uno_mpp["adam"] = 99;
        uno_mpp["striver"] = 35;
        uno_mpp["raj"] = 46;
        uno_mpp.emplace("harry", 81);
        uno_mpp.emplace("neo", 36);
        uno_mpp["raj"] = 55;

        cout<<"Unordered Map\n";
        for(auto it: uno_mpp){
            cout<<it.first<<" "<<it.second<<"\n";
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