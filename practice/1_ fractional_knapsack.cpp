#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value, weight;
    Item(int v, int w) : value(v), weight(w) {}
};


bool cmp(Item a, Item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

double Knapsack(int W, vector<Item> &items)
{
    sort(items.begin(), items.end(), cmp); 
    int curWeight = 0;
    double finalValue = 0.0;

    for (auto item : items)
    {
        if (curWeight + item.weight <= W)
        {
            curWeight += item.weight;
            finalValue += item.value;
        }
        else
        {
            int remain = W - curWeight;
            finalValue += item.value * ((double)remain / item.weight);
            break;
        }
    }

    return finalValue;
}

int main()
{
    int n, W;
    cin >> n >> W;
    vector<Item> items;

    for (int i = 0; i < n; i++)
    {
        int value, weight;
        cin >> value >> weight;
        items.push_back(Item(value, weight));
    }

    cout << "Maximum value :" << Knapsack(W, items) << endl;
    return 0;
}
