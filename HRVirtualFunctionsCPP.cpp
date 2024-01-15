#include<iostream>
#include<string>
using namespace std;

class Person {
    protected:
        int age;
        string name;
    public:
        virtual void getdata() {
            cin >> name >> age;
        }
        virtual void putdata() {
            cout << name << " " << age << " ";
        }
};

class Professor : public Person {
    static int ctr;
    private:
        int publications;
        int cur_id = 0;
    public:
        Professor() 
        {
            ctr += 1;
            cur_id += ctr;
        }
        void getdata() override {
            Person::getdata();
            cin >> publications;
        }
        void putdata() override {
            Person::putdata();
            cout << publications << " " << cur_id << endl;
        }
};

class Student : public Person {
    static int ctr;
    private:
        int marks[6];
        int cur_id = 0;
        int sum_5 = 0;
    public:
        Student() {
            ctr += 1;
            cur_id += ctr;
        }

        void getdata() override {
            Person::getdata();
            for (int i = 0; i < 6; i++) {
                cin >> marks[i];
                sum_5 += marks[i];
            }
        }

        void putdata() override {
            Person::putdata();
            cout << sum_5 << " " << cur_id << endl;
        }

};

int Student::ctr = -1;
int Professor::ctr = 0;

int main() {
    Professor p1;
    Student s1;
    p1.getdata();
    p1.putdata();
    s1.getdata();
    s1.putdata();
    return 0;
}