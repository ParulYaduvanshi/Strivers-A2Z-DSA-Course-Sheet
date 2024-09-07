#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string frequencySort(string s)
{
    // Step 1: Count the frequency of each character
    map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }

    // Step 2: Store the frequencies and characters in a vector of pairs
    vector<pair<int, char>> freq;
    for (auto i : mp)
    {
        freq.push_back(make_pair(i.second, i.first));
    }

    // Step 3: Sort the vector based on frequencies in descending order
    sort(freq.begin(), freq.end(), greater<pair<int, char>>());

    // Step 4: Construct the resulting string
    string result = "";
    for (auto i : freq)
    {
        result += string(i.first, i.second);
    }
    return result;
}
int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;

    cout << frequencySort(s);

    return 0;
}