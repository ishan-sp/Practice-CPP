#include<iostream>
#define defaultDesc "No description provided"
#include<string>
using namespace std;

class Client {
    private:
        string desc;
    public:
        Client(int description) : desc{description} {} 
        Client() {
            desc = defaultDesc;
        }
};



int main() {
    

    return 0;
}