#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int getMinimumCost(int k, vector<int> c) {
    int n = c.size();
    int min_cost = 0;
    int person = 0;
    int flowers_per_person[105];

    // sort array of costs
    sort(c.begin(), c.end());

    for (int i = 0; i < k; i++)
        flowers_per_person[i] = 0;

    for (int i = n - 1; i >= 0; i--) {
        min_cost += (flowers_per_person[person] + 1) * c[i];
        flowers_per_person[person]++;
        person++;
        
        if (person >= k)
            person = 0;
    }
    return min_cost;
}

int main(void)
{
    int n, k, input, minCost;
    vector<int> cost; 

    cin >> n;
    cin >> k;

    for (int i = 0; i < n; i++){
        cin >> input;
        cost.push_back(input);
    }
    minCost = getMinimumCost(k, cost);

    cout << "cost = " << minCost << endl;
    
    return 0;
}
