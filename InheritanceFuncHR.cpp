#include<iostream>
#include<tuple>
using namespace std;
tuple<int, int, int> check(int a) {
    int count5 = 0, count3 = 0, count2 = 0;
    bool run = true;
    int temp = a;
    while(run) {
        if (temp%5 == 0) {
            temp /= 5;
            count5 += 1;
        }
        else {
            run = false;
        }
    }
    run = true;
    while(run) {
        if (temp%3 == 0) {
            temp /= 3;
            count3 += 1;
        }
        else {
            run = false;
        }
    }
    run = true;
    while(run) {
        if(temp%2 == 0) {
            temp /= 2;
            count2 += 1;
        }
        else {
            run = false;
        }
    }
    return make_tuple(count5, count3, count2);
}
class A
{
    public:
        A(){
            callA = 0;
        }
    private:
        int callA;
        void inc(){
            callA++;
        }

    protected:
        void func(int & a)
        {
            a = a * 2;
            inc();
        }
    public:
        int getA(){
            return callA;
        }
};

class B
{
    public:
        B(){
            callB = 0;
        }
    private:
        int callB;
        void inc(){
            callB++;
        }
    protected:
        void func(int & a)
        {
            a = a * 3;
            inc();
        }
    public:
        int getB(){
            return callB;
        }
};

class C
{
    public:
        C(){
            callC = 0;
        }
    private:
        int callC;
        void inc(){
            callC++;
        }
    protected:
        void func(int & a)
        {
            a = a * 5;
            inc();
        }
    public:
        int getC(){
            return callC;
        }
};

class D 
{

	int val;
	public:
		//Initially val is 1
		 D()
		 {
		 	val = 1;
		 }


		 //Implement this function
		 void update_val(int new_val)
		 {
            auto result = check(new_val);
            int c5 = get<0>(result);
            int c3 = get<1>(result);
            int c2 = get<2>(result);
            for(int i = 0; i < c5; i++) {
                C::func(new_val);
            }
            for(int j = 0; j < c3; j++) {
                B::func(new_val);
            }
            for(int k = 0; k < c2; k++) {
                C::func(new_val);
            }

			
		 }
		 //For Checking Purpose
		 void check(int); //Do not delete this line.
};
int main() {
    /*auto result = check(50);
    cout << get<0>(result) << endl;
    cout << get<1>(result) << endl;
    cout << get<2>(result) << endl;
    return 0;*/

}