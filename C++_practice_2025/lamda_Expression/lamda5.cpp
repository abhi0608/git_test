#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v {100, 20, 4, 200, 1};
    
    int res = accumulate(v.begin(), v.end(),0);
    cout << res << '\n';
    
    res = accumulate(v.begin(), v.end(), 1,
        [](int x, int y){return x*y;});
    cout << res;
    return 0;
}