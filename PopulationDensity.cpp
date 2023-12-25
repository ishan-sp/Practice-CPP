#include<iostream>
#include<cmath>
using namespace std;

class Density {
    public:
        double den, population, area;
        double thresh, riverArea, landArea;
    public:
        Density(double p, double a, double r, double l) : population{p}, area{a}, riverArea{r}, landArea{l} {
            den = p/a;
            thresh = r/p;
        }
};

class Threshold : public Density {
    public:
        Threshold(int p, int a, int r, int l) : Density(p, a, r, l) {}
        void check() {
            double temp = abs(thresh- den);
            if (thresh > den) {
                cout << "Population in the region exceeds the threshold by " << temp*population << endl;
            }
            else if(thresh < den) {
                cout << "Population in the region exceeds the threshold by " << temp*population << endl;
            }
            else {
                cout << "Population in the region is at the threshold level" << endl;
            }
        }
};

int main() {
    Threshold t1(5000, 4000, 60, 50);
    t1.check();

    return 0;
}