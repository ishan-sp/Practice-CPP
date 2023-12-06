#include <iostream>
#include <vector>

class Person {
public:
    std::string name;
    std::string role;

    Person(const std::string& n, const std::string& r) : name(n), role(r) {}

    virtual void displayInfo() const {
        std::cout << "Name: " << name << "\nRole: " << role << std::endl;
    }

    virtual void performAction() const = 0;
};

class GroundPersonnel : public Person {
private:
    bool online;
    bool active;

public:
    GroundPersonnel(const std::string& n) : Person(n, "Ground Personnel"), online(false), active(false) {}

    void setOnlineStatus(bool status) {
        online = status;
    }

    void setActiveStatus(bool status) {
        active = status;
    }

    bool isOnline() const {
        return online;
    }

    bool isActive() const {
        return active;
    }

    void performAction() const override {
        std::cout << name << " is providing on-site assistance." << std::endl;
    }
};

class Operator : public Person {
private:
    std::vector<GroundPersonnel*> availablePersonnel;

public:
    Operator(const std::string& n) : Person(n, "Operator") {}

    void assignEmergency(GroundPersonnel* personnel) {
        if (personnel->isOnline() && personnel->isActive()) {
            std::cout << name << " assigned emergency to " << personnel->name << "." << std::endl;
        } else {
            std::cout << "No available and active personnel to assign." << std::endl;
        }
    }

    void addAvailablePersonnel(GroundPersonnel* personnel) {
        availablePersonnel.push_back(personnel);
    }

    void displayAvailablePersonnel() const {
        std::cout << "Available Personnel:\n";
        for (const auto& personnel : availablePersonnel) {
            personnel->displayInfo();
            std::cout << "Online: " << (personnel->isOnline() ? "Yes" : "No") << " | Active: " << (personnel->isActive() ? "Yes" : "No") << "\n";
            std::cout << "-------------------------\n";
        }
    }

    void performAction() const override {
        std::cout << name << " is coordinating emergency response." << std::endl;
    }
};

class Client : public Person {
public:
    Client(const std::string& n) : Person(n, "Client") {}

    void raiseEmergencyRequest(Operator& operatorPerson, GroundPersonnel& personnel) {
        std::cout << name << " has raised an emergency request." << std::endl;
        operatorPerson.assignEmergency(&personnel);
    }

    void performAction() const override {
        // Additional functionality for the client can be added here.
        std::cout << name << " is waiting for assistance." << std::endl;
    }
};

class EmergencyResponderSystem {
private:
    std::vector<Person*> personnel;

public:
    void addPerson(Person* p) {
        personnel.push_back(p);
    }

    void displayPersonnelInfo() const {
        for (const auto& person : personnel) {
            person->displayInfo();
            person->performAction();
            std::cout << "-------------------------\n";
        }
    }
};

int main() {
    EmergencyResponderSystem system;

    GroundPersonnel groundPerson1("John Doe");
    groundPerson1.setOnlineStatus(true);
    groundPerson1.setActiveStatus(true);

    GroundPersonnel groundPerson2("Jane Smith");
    groundPerson2.setOnlineStatus(true);
    groundPerson2.setActiveStatus(false);

    Operator systemOperator("Chris Brown");
    systemOperator.addAvailablePersonnel(&groundPerson1);
    systemOperator.addAvailablePersonnel(&groundPerson2);

    Client emergencyClient("Alice Johnson");

    system.addPerson(&groundPerson1);
    system.addPerson(&groundPerson2);
    system.addPerson(&systemOperator);
    system.addPerson(&emergencyClient);

    system.displayPersonnelInfo();

    // Example usage of client raising an emergency request
    emergencyClient.raiseEmergencyRequest(systemOperator, groundPerson1);

    // Display available personnel after an emergency request
    systemOperator.displayAvailablePersonnel();

    return 0;
}
