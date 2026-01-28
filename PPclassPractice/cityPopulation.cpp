#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;


int main()
{
    unordered_map<string,int> city;
    int choice,value,newPop;
    string key;

    do
    {
        cout << "\n--- City Population Menu ---"<<endl;
        cout << "1. Create (Add City name and population)"<<endl;
        cout << "2. Read (Display City name and population)"<<endl;
        cout << "3. Update (update city population)"<<endl;
        cout << "4. Delete (Remove a city)"<<endl;
        cout << "5. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            // CREATE
            cout << "Enter city name: ";
            cin >> key;
            cout << "Enter city population: ";
            cin >> value;
            city[key] = value;
            cout << "City " << key << " added.\n";
            break;
        }
        case 2:
        {
            // READ
            cout << "Current City names: "<<endl;
            for (auto i : city)
            {
                cout<<"City name: "<<i.first<< "    Population: "<<i.second << endl;
            }
            cout << "\n";
            break;
        }
        case 3:
        {
            // UPDATE
            cout << "Enter City name to update: ";
            cin >>key;
            auto it = city.find(key);

            if (it != city.end())
            {
                cout << "Enter new population value: ";
                cin >> newPop;
                it->second = newPop;
                cout << "City name " << key << " updated to " << newPop << ".\n";
            }
            else
            {
                cout << "City name not found.\n";
            }
            break;
        }
        case 4:
        {
            // DELETE
            cout << "Enter City name to remove: ";
            cin >> key;
            if (city.erase(key))
            {
                cout << "City " << key << " removed.\n";
            }
            else
            {
                cout << "City not found.\n";
            }
            break;
        }
        case 5:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}