#include<iostream>
using namespace std;

class Rectangle{
    float length,breadth;

    public:
     
    Rectangle(){
        length=0;
        breadth=0;
    }

    Rectangle(float l,float b){
        length=l;
        breadth=b;
    }

    Rectangle(float side){
        length=side;
        breadth=side;
    }

    float area(){
        return length*breadth;
    }

};

int main(){
    Rectangle rect1;
    Rectangle rect2(5,10);
    Rectangle rect3(5);

    cout<<"Area of rect1 is: "<<rect1.area()<<endl;
    cout<<"Area of rect2 is:"<<rect2.area()<<endl;
    cout<<"Area of rect3 is: "<<rect3.area()<<endl;

    return 0;
}
