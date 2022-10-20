#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector <int> &v) 
{
	vector<int> res;
    vector<int>::iterator it = v.begin() + 1;
    int sumF, sumL, buff;
    for (size_t j = 1; j < v.size(); j++)
    {
        sumF = 0, sumL = 0, buff = 0;
        for (auto i = v.begin(); i != it; i++)
        {
            sumF += *i;
        }
        for (auto i = it; i != v.end(); i++)
        {
            sumL += *i;
        }
        buff = abs(sumF - sumL);
        res.push_back(buff);
        it++;
    }

    sort(res.begin(), res.end());
    return res[0];
}
int main()
{
    vector <int> vec{ 3,1,2,4,3 };
    cout << solution(vec);
}