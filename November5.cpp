#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> words{"one", "two", "one", "three"};
template<typename T>
void uniqu(T begin, T end){
    sort(words.begin(), words.end());
    auto new_end = unique(words.begin(), words.end());
    words.erase(new_end, words.end());
    for(auto n : words){
        cout << n << " ";
    }

}
int main() {
    vector<string> words{"one", "two", "one", "three"};
    uniqu(words.begin(), words.end());
    return 0;
}
