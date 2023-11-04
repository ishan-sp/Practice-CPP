#include<iostream>
#include<cstring>
using namespace std;
void print(char *s){
    while (*s != '\0'){
        cout << *s;
        s++;
    }
}
int main() {
    char s2[6];
    s2[0] = 'I';
    s2[1] = 's';
    s2[2] = 'h';
    s2[3] = 'a';
    s2[4] = 'n';
    s2[5] = '\0';
    print(s2);
    //char s3[6] = {'I', 's', 'h', 'a', 'n', '\0'};
    //cout << sizeof(s3)<<endl;
    char s1[] = "Hello";
    /*cout << strlen(s1) << endl;
    /cout << sizeof(s1);
    /print(s1);*/
    print(s1);
    cout <<"\n";
    

}