//class for machines

using System;

namespace DairyDocApp.Models
{
    public class Machine
    {
        public int MachineId { get; set; }  // Unique identifier for the machine
        public string Name { get; set; }    // Name of the machine (e.g., Separator, Pasteurizer)
        public string Type { get; set; }    // Type of the machine (e.g., Separator, Butter Churn, etc.)
        public string Description { get; set; } // Short description of the machine
        public string SerialNumber { get; set; } // Unique serial number of the machine
        public DateTime LastMaintenanceDate { get; set; } // Date of last maintenance
        public string MaintenanceStatus { get; set; } // Status of the maintenance (e.g., Completed, Due, Pending)
        public bool IsOperational { get; set; } // Flag indicating if the machine is currently operational
        public string Location { get; set; } // Location where the machine is situated (e.g., Cheese Factory, Milk Processing)
        public string AssignedOperator { get; set; } // Operator assigned to the machine (if applicable)

        // Constructor to initialize machine details
        public Machine(int machineId, string name, string type, string description, string serialNumber, DateTime lastMaintenanceDate, string maintenanceStatus, bool isOperational, string location, string assignedOperator)
        {
            MachineId = machineId;
            Name = name;
            Type = type;
            Description = description;
            SerialNumber = serialNumber;
            LastMaintenanceDate = lastMaintenanceDate;
            MaintenanceStatus = maintenanceStatus;
            IsOperational = isOperational;
            Location = location;
            AssignedOperator = assignedOperator;
        }

        // Method to display machine details
        public void DisplayMachineInfo()
        {
            Console.WriteLine($"Machine ID: {MachineId}");
            Console.WriteLine($"Name: {Name}");
            Console.WriteLine($"Type: {Type}");
            Console.WriteLine($"Description: {Description}");
            Console.WriteLine($"Serial Number: {SerialNumber}");
            Console.WriteLine($"Last Maintenance Date: {LastMaintenanceDate.ToShortDateString()}");
            Console.WriteLine($"Maintenance Status: {MaintenanceStatus}");
            Console.WriteLine($"Operational Status: {(IsOperational ? "Operational" : "Not Operational")}");
            Console.WriteLine($"Location: {Location}");
            Console.WriteLine($"Assigned Operator: {AssignedOperator}");
        }

        // Method to update maintenance status
        public void UpdateMaintenanceStatus(string status)
        {
            MaintenanceStatus = status;
        }

        // Method to change operational status
        public void ChangeOperationalStatus(bool status)
        {
            IsOperational = status;
        }
    }
}
