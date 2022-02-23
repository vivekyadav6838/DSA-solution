#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'largestRectangle' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts INTEGER_ARRAY h as parameter.
 */

long largestRectangle(vector<int> h) {
     //stack<int> s2;
    
             int n=h.size();
        
        vector<int> nselIndex;
    stack<pair<int, int>> s;

    for(int i = 0; i < n; i++) {
        while(!s.empty() && s.top().first >= h[i]) {
            s.pop();
        }
        if(s.empty()) {
            nselIndex.push_back(-1);
        }
        else  {
            nselIndex.push_back(s.top().second);
        }
        s.push({h[i], i});
    }
        
        
    vector<int> nserIndex;
    stack<pair<int, int>> s1;

    for(int i = n - 1; i >= 0; i--) {
        while(!s1.empty() && s1.top().first >= h[i]) {
            s1.pop();
        }
        if(s1.empty()) {
            nserIndex.push_back(n);
        }
        else  {
            nserIndex.push_back(s1.top().second);
        }
        s1.push({h[i], i});
    }
    reverse(nserIndex.begin(), nserIndex.end());
        vector<int> ans;
    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        ans.push_back((nserIndex[i] - nselIndex[i] - 1) * h[i]);
        if(max < ans[i]) {
            max = ans[i];
        }
    }
    return max;
    }
    



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string h_temp_temp;
    getline(cin, h_temp_temp);

    vector<string> h_temp = split(rtrim(h_temp_temp));

    vector<int> h(n);

    for (int i = 0; i < n; i++) {
        int h_item = stoi(h_temp[i]);

        h[i] = h_item;
    }

    long result = largestRectangle(h);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
