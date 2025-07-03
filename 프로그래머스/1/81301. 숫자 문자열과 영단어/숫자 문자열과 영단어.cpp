#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string s) {
    map<string, string> digitWords;
    digitWords["zero"] = "0";
    digitWords["one"] = "1";
    digitWords["two"] = "2";
    digitWords["three"] = "3";
    digitWords["four"] = "4";
    digitWords["five"] = "5";
    digitWords["six"] = "6";
    digitWords["seven"] = "7";
    digitWords["eight"] = "8";
    digitWords["nine"] = "9";

    for (map<string, string>::iterator it = digitWords.begin(); it != digitWords.end(); ++it) {
        string word = it->first;
        string digit = it->second;

        size_t pos = s.find(word); 
        while (pos != string::npos) { 
            s.replace(pos, word.length(), digit); 
            pos = s.find(word, pos + digit.length()); 
        }
    }

    return stoi(s);
}