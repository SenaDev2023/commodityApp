#include <iostream>
#include <string>
#include <iomanip> // For formatted date
using namespace std;

class Machine {
private:
    int machineId;                    // Unique identifier for the machine
    string name;                      // Name of the machine
    string type;                      // Type of the machine
    string description;               // Short description of the machine
    string serialNumber;              // Unique serial number of the machine
    string lastMaintenanceDate;       // Date of last maintenance in string format
    string maintenanceStatus;         // Status of maintenance (e.g., Completed, Due, Pending)
    bool isOperational;               // Flag indicating if the machine is operational
    string location;                  // Location of the machine
    string assignedOperator;          // Operator assigned to the machine

public:
    // Constructor to initialize machine details
    Machine(int id, const string& nm, const string& tp, const string& desc, const string& serial, 
            const string& maintenanceDate, const string& status, bool operational, const string& loc, const string& operatorName) 
        : machineId(id), name(nm), type(tp), description(desc), serialNumber(serial), 
          lastMaintenanceDate(maintenanceDate), maintenanceStatus(status), isOperational(operational), 
          location(loc), assignedOperator(operatorName) {}

    // Method to display machine details
    void displayMachineInfo() const {
        cout << "Machine ID: " << machineId << endl;
        cout << "Name: " << name << endl;
        cout << "Type: " << type << endl;
        cout << "Description: " << description << endl;
        cout << "Serial Number: " << serialNumber << endl;
        cout << "Last Maintenance Date: " << lastMaintenanceDate << endl;
        cout << "Maintenance Status: " << maintenanceStatus << endl;
        cout << "Operational Status: " << (isOperational ? "Operational" : "Not Operational") << endl;
        cout << "Location: " << location << endl;
        cout << "Assigned Operator: " << assignedOperator << endl;
    }

    // Method to update maintenance status
    void updateMaintenanceStatus(const string& status) {
        maintenanceStatus = status;
    }

    // Method to change operational status
    void changeOperationalStatus(bool status) {
        isOperational = status;
    }
};

int main() {
    // Example usage of Machine class
    Machine machine(1, "Pasteurizer", "Processing", "Used for pasteurizing milk", "SN12345", 
                    "2024-12-15", "Completed", true, "Milk Processing Unit", "John Doe");

    // Display machine details
    machine.displayMachineInfo();

    // Update maintenance status
    machine.updateMaintenanceStatus("Pending");
    cout << "\nAfter updating maintenance status:\n";
    machine.displayMachineInfo();

    // Change operational status
    machine.changeOperationalStatus(false);
    cout << "\nAfter changing operational status:\n";
    machine.displayMachineInfo();

    return 0;
}
