
class Solution {
public:
    string encode(vector<string>& strs) {
        string ans = "";

        for (auto& str : strs) {
            ans += to_string(str.size()) + ",";
        }

        ans += "#";

        for (auto& str : strs) {
            ans += str;
        }

        return ans;
    }

    vector<string> decode(string s) {
        if (s.empty()) return {};

        vector<string> ans;
        vector<pair<int, string>> raw;

        int i = 0;

        // Read the lengths
        while (s[i] != '#') {
            int j = i;

            while (s[j] != ',') {
                j++;
            }
            // start from i string index and take j-1 chars
            int n = stoi(s.substr(i, j - i));
            raw.push_back({n, ""});

            i = j + 1;
        }

        i++; // Skip '#'

        for (auto& it : raw) {
            int n = it.first;
            // start from i string index and take n chars
            it.second = s.substr(i, n);
            i += n;
        }

        
        for (auto& com : raw) {
            ans.push_back(com.second);
        }

        return ans;
    }
};
