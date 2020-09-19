#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'ways' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER total
 *  2. INTEGER k
 */
int ways(int total, int k) {
    
    const int MOD = 1e9+7;
    int dp[k+1][total+1];

    for (int i = 1; i <= total; i++) {
        dp[1][i] = 1;
    }
    for (int i = 1; i <= k; i++) {
        dp[i][0] = 1;
    }
    for (int i = 2; i <= k; i++) {
        for (int j = 1; j <= total; j++) {
            if (j >= i) {
                dp[i][j] = (dp[i][j - i] + dp[i - 1][j])%MOD;

            } else {
                dp[i][j] = dp[i - 1][j];
            }

    }
  }
  return dp[k][total];
}

int main(){
    int total,k;
    cin >> total >> k;
    cout << ways(total,k) << endl;
}

// int main()
// {
//     ofstream fout(getenv("OUTPUT_PATH"));

//     string total_temp;
//     getline(cin, total_temp);

//     int total = stoi(ltrim(rtrim(total_temp)));

//     string k_temp;
//     getline(cin, k_temp);

//     int k = stoi(ltrim(rtrim(k_temp)));

//     int result = ways(total, k);

//     fout << result << "\n";

//     fout.close();

//     return 0;
// }

// string ltrim(const string &str) {
//     string s(str);

//     s.erase(
//         s.begin(),
//         find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//     );

//     return s;
// }

// string rtrim(const string &str) {
//     string s(str);

//     s.erase(
//         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//         s.end()
//     );

//     return s;
// }
