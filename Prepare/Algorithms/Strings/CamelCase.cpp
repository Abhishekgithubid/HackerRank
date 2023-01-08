#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int camelcase(string s) {
int count=1;
int i=1;
//so we will run loop till s[i] exist and check character falls within range or not
while(s[i])
{
    if (s[i]>=65 & s[i]<=90)
    {
        count++;
    }
    i++;
}
return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
