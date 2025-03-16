#include "ladder.h"
using namespace std;

int main() {
    set<string> s;
    load_words(s, "small.txt");
    
    if (edit_distance_within("apple", "appl", 1))
        cout << "Valid" << endl;
}
