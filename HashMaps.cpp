#include <iostream>
#include <unordered_map>
using namespace std;
void searchKey(unordered_map<string, int> &myMap, string key)
{
    // Search for a key
    if (myMap.find(key) != myMap.end())
    {
        cout << key << " found with price: " << myMap[key] << endl;
    }        
    else
    {
        cout << key << " not found!" << endl;
    }
}
int main()
{
    string key;
    // Hashmap
    unordered_map<string, int> myMap;
    myMap["Apple"] = 50;
    myMap["Banana"] = 60;
    myMap["Guava"] = 70;

    // Update value
    myMap["Banana"] = 100;

    // Access a value
    cout << "Price of Apple: " << myMap["Apple"] << endl;

    // Traverse Map
    for (auto pair : myMap)
    {
        cout << "Price of " << pair.first << ": " << pair.second << endl;
    }
    cout << "Enter a key to search value of: ";
    cin >> key;
    searchKey(myMap, key);
    
    // Delete a key
    myMap.erase("Guava");
    cout << "After deleting Guava: " << endl;
    for (auto pair : myMap)
    {
        cout << "Price of " << pair.first << ": " << pair.second << endl;
    }
    

}