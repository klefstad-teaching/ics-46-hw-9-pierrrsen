#include "ladder.h"
using namespace std;

int main() {
    set<string> s;
    load_words(s, "small.txt");
    for (const string& element : s) {
        cout << element << " ";
    }
}
