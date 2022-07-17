// C++ STL Unorderd_map - Hashtable
// Search, Insertion & Deletion - O(1) average case, O(n) worst case

    #include <bits/stdc++.h>
    using namespace std;

    int main(){

        unordered_map<string, int> ump;

        //Insertion
        //1. pairs - unorderd_map stores values in the form of pairs
        pair<string, int> p("abc", 1);
        ump.insert(p);
        pair<string, int> p2("def", 2);
        ump.emplace(p2);

        ump["efg"] = 3;
        ump["pqr"] = 4;

        //Size
        cout<<ump.size()<<endl;

        //Find or access
        cout<<ump["abc"]<<endl; //1
        cout<<ump.at("def")<<endl;

        //diff b/n [] and at()
        cout<<ump["xyz"]<<endl; //pushes the key to the map with default value 0
        cout<<ump.at("xyz")<<endl; //throws out of range exception

        //Size
        cout<<ump.size()<<endl;

        //Check wheather a key is present
        if(ump.count("xyz") > 0)
            cout<<"Key is found\n";
        else
            cout<<"Key is not found\n";
        
        //Updating Keys
        ump["abc"] = 10;

        //erase/delete keys
        ump.erase("xyz");
        //Size
        cout<<ump.size()<<endl;       

        return 0;
    }

  