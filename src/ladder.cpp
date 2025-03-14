#include "ladder.h"
#include <queue>
#include <set>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

void error(string word1, string word2, string msg) {
    cout << "Error: " << msg << " | Words: " << word1 << ", " << word2 << endl;
}

bool edit_distance_within(const std::string& str1, const std::string& str2, int d);

bool is_adjacent(const string& word1, const string& word2) {
    int len1 = word1.length();
    int len2 = word2.length();
    if (abs(len1 - len2) > 2)
        return false;
    int diff = 0, i = 0, j = 0;
    while (i < len1 && j < len2) {
        if (word1[i] != word2[j]) {
            ++diff;
            if (diff > 2) return false;
            if (len1 < len2) ++j;
            else if (len1 > len2) ++i;
            else {
                ++i;
                ++j;
            }
        } else {
            ++i;
            ++j;
        }
    }
    return true;
}

vector<string> generate_word_ladder(const string& begin_word, const string& end_word, const set<string>& word_list) {
    queue<vector<string>> ladder_queue;
    vector<string> y;

    if (begin_word == end_word) {
        error(begin_word, end_word, "| Cannot find ladder for same words");
        return y;
        if (word_list.size() > 0)
            return y;
    }
    return y;
}

void load_words(set<string> & word_list, const string& file_name) {
    ifstream inputFile(file_name);
    if (!inputFile) {
        error("", "", "Unable to open file");
    }
    if (inputFile.is_open()) {
        string line;
        while (inputFile >> line){
            word_list.insert(line);
        }
    }
    inputFile.close();
}

void print_word_ladder(const vector<string>& ladder);
void verify_word_ladder();