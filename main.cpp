#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string, int> count;

    string word;

    while(cin >> word) {
        count[word] += 1;
    }

    for(auto const& x : count){
        cout << x.first << ":" << x.second << endl;
    }
    return 0;
}
