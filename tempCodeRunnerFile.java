#include<iostream>
#include<string>
using namespace std;

class Person {
protected:
    int age;
    string name;
};

class Professor : protected Person {
    static int ctr;
    int cur_id; // Removed the initialization here
private:
    int publications;
public:
    Professor() 
    {
        ctr += 1;
        cur_id = ctr; // Initialize cur_id here
    }
    void get_data() {
        cout << "Enter name, age, and publications: ";
        cin >> name >> age >> publications;
    }
    void put_data() {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};

class Student : protected Person {

};

int Professor::ctr = 0;

int main() {
    Professor p1;
    Professor p2;
    p1.get_data();
    p2.put_data();
    return 0;
}
