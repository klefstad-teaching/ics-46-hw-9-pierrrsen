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

bool edit_distance_within(const std::string& str1, const std::string& str2, int d) {
    int len1 = str1.length();
    int len2 = str2.length();
    if (abs(len1 - len2) > d)
        return false;

    vector<vector<int>> m(len1 + 1, vector<int>(len2 + 1, 0));
    for (int i = 0; i <= len1; ++i) m[i][0] = i;
    for (int j = 0; j <= len2; ++j) m[0][j] = j;

    for (int i = 1; i <= len1; ++i) {
        for (int j = 1; j <= len2; ++j) {
            if (str1[i - 1] == str2[j - 1])
                m[i][j] = m[i - 1][i - 1];
            else {
                m[i][j] = 1 + min({m[i - 1][j], m[i][j-1], m[i-1][j-1]});
            }

            if (m[i][j] > d) return false;
        }
    }

    return m[len1][len2] <= d;
}

bool is_adjacent(const string& word1, const string& word2) {
    return edit_distance_within(word1, word2, 1);
}

vector<string> generate_word_ladder(const string& begin_word, const string& end_word, const set<string>& word_list) {
    if (begin_word == end_word) {
        error(begin_word, end_word, "| Cannot find ladder for same words");
        return {};
    }

    queue<vector<string>> ladder_queue;
    set<string> visited;

    ladder_queue.push({begin_word});
    visited.insert(begin_word);

    while (!ladder_queue.empty()) {
        vector<string> ladder = ladder_queue.front();
        ladder.pop();
        string lastWord = ladder.back();
        for (word : word_list) {
            if (is_adjacent(last_word, word)) {
                if (!visited.find(word)){
                    visited.insert(word);
                    vector<string> new_ladder = ladder;
                    new_ladder.push_back(word);
                    if (word = end_word)
                        return new_ladder;
                    ladder_queue.push(new_ladder);
                }
            }
        }
    }
    return {};
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

void print_word_ladder(const vector<string>& ladder) {
    for (word : ladder)
        cout << word << ", ";
}

void verify_word_ladder() {
    for (size_t i = 1; i < ) {

    }
}