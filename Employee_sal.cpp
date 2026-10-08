#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<int, pair<string, double>> employees;

    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int id;
        string name;
        double salary;

        cout << "\nEnter Employee ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;

        employees[id] = {name, salary};
    }

    cout << "\n===== EMPLOYEE DETAILS =====\n";

    for (auto employee : employees) {
        cout << "ID: " << employee.first << endl;
        cout << "Name: " << employee.second.first << endl;
        cout << "Salary: Rs." << employee.second.second << endl;
        cout << "--------------------------\n";
    }

    int searchID;

    cout << "\nEnter Employee ID to search: ";
    cin >> searchID;

    auto result = employees.find(searchID);

    if (result != employees.end()) {
        cout << "\nEmployee Found!\n";
        cout << "ID: " << result->first << endl;
        cout << "Name: " << result->second.first << endl;
        cout << "Salary: Rs." << result->second.second << endl;
    }
    else {
        cout << "\nEmployee not found.";
    }

    return 0;
}
