#include "ladder.h"
using namespace std;

int main() {
    set<string> s;
    load_words(s, "small.txt");
    
    if (edit_distance_within("cat", "bits", 2))
        cout << "Valid" << endl;
}
