#include<iostream>
using namespace std;

class Density {
    private:
        double river, land, thresh, pop, area, den;
    public:
        Density(double r, double l, double p, double a) {
            river = r;
            land = l;
            thresh = r/l;
            pop = p;
            area = a;
            den = p/a;
        }
        friend class th;
};

class th {
    public:
    th(double r, double l, double p, double a) : Density(r, l, p, a) {}
        check() {
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
    th t(5000, 600, 10, 15);
    t.check();

    return 0;
}