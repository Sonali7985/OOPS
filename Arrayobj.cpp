#include <bits/stdc++.h>
#include <vector>
class Item {
    public:
    string type;
    Item(string t ):type(t)
}
using namespace std;

int main() {
	// your code goes here
	vector<Item>inventory;
	inventory.push_back(Item("Sword"));
	inventory.push_back(Item("Shield"));
	cout<< inventory[0].type;
}