#include <iostream>
using namespace std;

class rectangle {
private:
double l;
double w;
public:
void initData(double len, double wid) {
l= len;
w = wid;
}
double calculateArea() {
return l*w;
}
double calculateperimeter() {
return 2*(l+w);
}
};
int main() {
rectangle rec;
rec.initData(10,20);
cout << "Area of rectangle = " << rec.calculateArea() << endl;
cout << "Perimeter of rectangle= " << rec.calculateperimeter() << endl;
return 0;
}
