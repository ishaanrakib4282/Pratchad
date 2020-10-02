#include <bits/stdc++.h>

using namespace std;

class Line {
public:
    double a, b;
    double intersect(Line l) {
        int err = -1;

        if(this->a == l.a) throw err;

        double x = (this->b - l.b) / (l.a - this->a);

        return x;
    }
};

int main()
{
//    Line l1,l2;
//    l1.a=2, l1.b=2, l2.a=4, l2.b=4;

    Line line[5];
    for(int i=0;i<5;i++) {
        line[i].a = rand()%10+1;  ///to keep values for a between 1 to 10
        line[i].b = rand()%10+1;  ///to keep values for b between 1 to 10

        cout<< "Line" << i+1 << " is y = " << line[i].a << "x + "<< line[i].b <<endl;
    }
    cout<<endl;

    for(int i=0;i<5;i++) {
        for(int j=i+1;j<5;j++) {
            try {
//                cout << "The lines intersect on x coordinate at point: " << l1.intersect(l2) << endl;
                cout << "Line" <<i+1<< " and Line" <<j+1<< " intersect on x coordinate at point: " << line[i].intersect(line[j]) << endl;
            }
            catch (int err) {
                cout << "The lines are parallel" << endl;
            }
        }
    }

    return 0;
}
