class Solution {
public:

    string encode(vector<string>& strs) {
        string key;

        for(string s : strs) {
            key += to_string(s.size()) + "#" + s;
        }

        return key;
    }

    vector<string> decode(string key) {
        vector<string> dec;

        int i = 0;

        while(i < key.size()) {

            int pos = key.find('#', i);

            int len = stoi(key.substr(i, pos - i));

            string s = key.substr(pos + 1, len);

            dec.push_back(s);

            i = pos + 1 + len;
        }

        return dec;
    }
};