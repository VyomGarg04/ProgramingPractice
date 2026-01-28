#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> productIDs;
    int choice, id,newId;

    do
    {
        cout << "\n--- Product ID CRUD Menu ---"<<endl;
        cout << "1. Create (Add Product ID)"<<endl;
        cout << "2. Read (Display Product IDs)"<<endl;
        cout << "3. Update (Increment all IDs by 1)"<<endl;
        cout << "4. Delete (Remove a Product ID)"<<endl;
        cout << "5. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            // CREATE
            cout << "Enter Product ID to add: ";
            cin >> id;
            productIDs.insert(id);
            cout << "Product ID " << id << " added.\n";
            break;
        }
        case 2:
        {
            // READ
            cout << "Current Product IDs: ";
            for (int i : productIDs)
            {
                cout << i << " ";
            }
            cout << "\n";
            break;
        }
        case 3:
        {
            // UPDATE
            cout << "Enter Product ID to update: ";
            cin >> id;
            auto it = productIDs.find(id);
            if (it != productIDs.end())
            {
                cout << "Enter new Product ID value: ";
                cin >> newId;
                productIDs.erase(it);     
                productIDs.insert(newId); 
                cout << "Product ID " << id << " updated to " << newId << ".\n";
            }
            else
            {
                cout << "Product ID not found.\n";
            }
            break;
        }
        case 4:
        {
            // DELETE
            cout << "Enter Product ID to remove: ";
            cin >> id;
            if (productIDs.erase(id))
            {
                cout << "Product ID " << id << " removed.\n";
            }
            else
            {
                cout << "Product ID not found.\n";
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