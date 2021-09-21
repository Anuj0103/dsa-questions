#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'extraLongFactorials' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void extraLongFactorials(int n) {
vector<int>res;
res.push_back(1);
for (int x=2; x<=n; x++) {
    int car=0;  //carry initally zero ha
    for (int i=0;i<res.size(); i++) {  //front se rear pe jaa rhe h
     int val=res[i]*x+car;          //total product
     res[i]=val%10;                 //non carry val
     car=val/10;
    }
    while(car!=0){
        res.push_back(car%10);
        car/=10;
    }
}
reverse(res.begin(), res.end());
for(int i=0;i<res.size();i++)
cout<<res[i];
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    extraLongFactorials(n);

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
