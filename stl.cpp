#include <bits/stdc++.h>

using namespace std;

void explainPair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << "and" << p.second;

    pair<int, pair<int, int>> p = {2, {3, 4}};
    cout << p.first << " " << p.second.first << " " << p.second.second;
}

int main()
{
    explainPair();
}