#include<iostream>
#include<string>

using namespace std;



class Student {
    private:
        string first_name;
        string last_name;
        int age;
        int standard;
    public:
        void set_first_name(string fname) {
            first_name = fname;
        }
        void set_last_name(string lname) {
            last_name = lname;
        }
        void set_age(int age) {
            this->age = age;
        }
        void set_standard(int std) {
            standard = std;
        }

        string get_first_name(void) {
            return first_name;
        }
        string get_last_name(void) {
            return last_name;
        }
        int get_age(void) {
            return age;
        }
        int get_standard(void) {
            return standard;
        }
};
int age;
string fname;
string lname;
int stnd;
int main() {
    Student s1;
    cin >> age >> fname >> lname >> stnd;
    s1.set_first_name(fname);
    s1.set_last_name(lname);
    s1.set_age(age);
    s1.set_standard(stnd);
    string name_result = s1.get_last_name() + ", " + s1.get_first_name();
    cout << s1.get_age() << endl;
    cout << name_result << endl;
    cout << s1.get_standard() << endl <<endl;

    string result = to_string(s1.get_age()) + "," + s1.get_first_name() + "," + s1.get_last_name() + "," + to_string(s1.get_standard());
    cout << result;
    return 0;
}