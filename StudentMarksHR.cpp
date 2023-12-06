#include<iostream>
#include<vector>
using namespace std;

class Student {
    static const int NUM_SUBJECTS = 5;
    private:
        int marks[NUM_SUBJECTS];
    public:
        void input(void) {
            for (int i = 0; i < 5; ++i)
            {
               cin >> marks[i];
            }
        }
        int calculateTotalScore() const {
            int sum = 0;
            for (int i = 0; i < NUM_SUBJECTS; ++i)
            {
                sum = sum + marks[i];
            }
            return sum;
        }
};

int main() 
{
    int number_of_students = 0;
    cin >> number_of_students;
    if (number_of_students == 0)
      return 0;

    Student** pStudents = new Student*[number_of_students];

    // Take all inputs of all students
    for (int i = 0; i < number_of_students; i++) {
        pStudents[i] = new Student();
        pStudents[i]->input();
    }
 
    int total_score_of_kristen = pStudents[0]->calculateTotalScore();
    int num_people_more = 0;

    for(int i = 1; i < number_of_students; i++) {
        int score_of_other = pStudents[i]->calculateTotalScore();
        if (score_of_other > total_score_of_kristen)
        {
            ++num_people_more; 
        }
    }
    cout << num_people_more;
    return 0;
}