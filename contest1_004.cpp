#include <bits/stdc++.h>

using namespace std;

long long result = 0l;
int n = 1, k = 1;
bool repeatFlag = false;
string s = "";

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    vector<int> *a = new vector<int>(n, 0);
    vector<int> *b = new vector<int>();

    for(int i=0;i<n;i++)
    {
        cin >> a->at(i);
    }

    cin.ignore();

    getline(cin, s);

    for(int i=0;i<n;i++)
    {
        if(repeatFlag)
        {
            b->push_back(a->at(i));
            if(s[i+1] != s[i])
            {
                if(b->size() <= k)
                {
                    for(int j=0;j<b->size();j++)
                    {
                        result += b->at(j);
                    }
                    repeatFlag = false;
                    b->resize(0);
                    continue;
                }
                else
                {
                    sort(b->begin(), b->end());
                    for(int j=(b->size()-1);j>=(b->size()-k);j--)
                    {
                        result += b->at(j);
                    }
                    repeatFlag = false;
                    b->resize(0);
                    continue;
                }
            } 
        }
        else
        {
            if(i == n-1)
            {
                result += a->at(i);
            }
            else
            {
                if(s[i+1] == s[i])
                {
                    repeatFlag = true;
                    b->push_back(a->at(i));
                }
                else
                {
                    result += a->at(i);
                }
            }
        }
    }

    cout << result << endl;

    return 0;
}