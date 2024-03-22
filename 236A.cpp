#include <iostream>

using namespace std;

int main() {    
    string letters; cin >> letters;
    string distinct_letters = "";

    for(char e: letters) {
        if (distinct_letters.find(e) == string::npos) { // Explanation at the end
            distinct_letters += e;
        }
    }

    // cout << distinct_letters << endl;
    int nodc = size(distinct_letters);
    // cout << nodc << endl;

    if (nodc % 2 != 0) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }

    return 0;
}

// g.find(i): This part of the expression calls the find function on the string g, attempting to locate the first occurrence of the character 
// i within the string. If i is found in g, find returns the index (position) where i is located in the string. If i is not found, find returns a
// special constant value called string::npos, indicating that the character was not found in the string.