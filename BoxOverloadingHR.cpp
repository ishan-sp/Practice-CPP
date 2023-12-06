#include<bits/stdc++.h>
#include<iostream>

using namespace std;
class Box {
    private:
        int l;  
        int b; 
        int h; 

    public:
        Box() 
        : l{0}, b{0}, h{0}
        {}
        Box(int length, int breadth, int height) 
        : l {length}, b {breadth}, h{height}
        {}
        Box(const Box& other) {
            l = other.getLength();
            b = other.getBreadth();
            h = other.getHeight();
        }
        int getLength() const {
           return l;

        }
        int getBreadth() const{
            return b;
        }
        int getHeight() const {
            return h;
        }
        long long CalculateVolume() {
            return static_cast<long long>(l) * static_cast<long long>(b) * static_cast<long long>(h);
        }
        bool operator<(const Box&other)
        {
          if (l < other.getLength() ||
              (b < other.getBreadth() && l == other.getLength()) ||
              (h < other.getHeight() && l == other.getLength() && b == other.getBreadth()))
          {
            return true;
          }
          else
          {
            return false;
          }
        }
        friend ostream& operator<<(ostream& myOutputStream, const Box& box) {
            myOutputStream << box.l << " " << box.b << " " << box.h;
            return myOutputStream;
    }
};

//below code is a part of test case implementation by Hacker Rank

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}