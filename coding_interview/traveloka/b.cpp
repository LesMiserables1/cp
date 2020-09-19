#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'minimumGroups' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY predators as parameter.
 */

int minimumGroups(vector<int> predators) {
    int max = 1;
    int arrLen = predators.size();
    for (int i = 0; i < predators.size(); i++)
    {
        int a = i;
        int counter = 1;
        while (predators[a] > -1 && predators[a] < arrLen && counter < arrLen)
        {
            a = predators[a];
            counter++;
        }

        if (counter > max)
            max = counter;
    }
    return max;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string predators_count_temp;
    getline(cin, predators_count_temp);

    int predators_count = stoi(ltrim(rtrim(predators_count_temp)));

    vector<int> predators(predators_count);

    for (int i = 0; i < predators_count; i++) {
        string predators_item_temp;
        getline(cin, predators_item_temp);

        int predators_item = stoi(ltrim(rtrim(predators_item_temp)));

        predators[i] = predators_item;
    }

    int result = minimumGroups(predators);

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
