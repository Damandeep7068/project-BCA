#include<iostream>
using namespace std;

class geometricalShapes{
	public:
		float area();
		float perimeter();
};
class circle:public geometricalShapes{
	private:
		float radius;
	public:
		circle(float r):radius(r){}
		float area(){
			return 3.14*radius*radius;
		}
		float perimeter(){
			return 2*3.14*radius;
		}
};
class rectangle:public geometricalShapes{
	private:
		float length;
		float breadth;
	public:
		rectangle(float l,float b):length(l),breadth(b){}
		float area(){
			return length*breadth;
		}
		float perimeter(){
		    return 2*(length+breadth);
		}
};
class triangle:public geometricalShapes{
	private:
		float side1;
		float side2;
		float side3;
	public:
		triangle(float s1,float s2,float s3):side1(s1),side2(s2),side3(s3){}
		float area(){
			float s = (side1 + side2 + side3) / 2;
        return (s * (s - side1) * (s - side2) * (s - side3));
		}
		float perimeter(){
			return side1+side2+side3;
		}
};
int main(){
	circle c(6);
	rectangle r(2,4);
	triangle t(2,1,2);
	
	cout<<"Circle area="<<c.area()<<" , Perimeter="<<c.perimeter()<<endl;
	cout<<"Rectangle area="<<r.area()<<" , Perimeter="<<r.perimeter()<<endl;
	cout<<"Triangle area="<<t.area()<<" , Perimeter="<<t.perimeter()<<endl;
	return 0;
}
