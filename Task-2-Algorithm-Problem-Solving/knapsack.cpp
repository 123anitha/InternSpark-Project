#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int value, weight;
    double ratio;
};

bool compare(Item a, Item b) {
    return a.ratio > b.ratio;
}

double fractionalKnapsack(int capacity, vector<Item>& items) {
    for (auto& item : items)
        item.ratio = (double)item.value / item.weight;

    sort(items.begin(), items.end(), compare);

    double totalValue = 0.0;
    for (auto& item : items) {
        if (capacity >= item.weight) {
            capacity -= item.weight;
            totalValue += item.value;
        } else {
            totalValue += item.ratio * capacity;
            break;
        }
    }
    return totalValue;
}

int main() {
    int capacity = 50;
    vector<Item> items = {{60, 10}, {100, 20}, {120, 30}};

    double maxValue = fractionalKnapsack(capacity, items);
    cout << "Maximum value in Knapsack = " << maxValue;
    return 0;
}
