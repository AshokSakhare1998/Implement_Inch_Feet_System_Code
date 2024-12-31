#include<iostream>
#include<bits/stdc++.h>

using namespace std;
struct c{
    double feet;
    double inch;
    
};
class inchfeet{
    private:
    struct c length;
    public:
    inchfeet(){}
    inchfeet(double feet,double inch){
        length.inch=inch;
        length.feet=feet;
        
    }
    inchfeet(inchfeet& var){
        length.inch=var.length.inch;
        length.feet=var.length.feet;
        
    }
    void print(){
        cout<<length.feet<<"feet and "<<length.inch<<"inches"<<endl;
    }
    
    double inches() { return length.inch; }
    double feet() { return length.feet; }
    
    inchfeet operator+(inchfeet& obj1){
        inchfeet var;
        var.length.feet=length.feet+obj1.length.feet;
        var.length.inch=length.inch+obj1.length.inch;
        if(var.length.inch>=12.0){
            var.length.feet++;
            var.length.inch-12.0;
            
            
            
        }
        return var;
        
        
    }
    inchfeet operator-(inchfeet& obj1)
    {
        inchfeet var;
        struct c temp = length;
        if (temp.feet > obj1.length.feet) {
            if (temp.inch < obj1.length.inch) {
                temp.feet--;
                temp.inch += 12;
            }
            var.length.feet = temp.feet - obj1.length.feet;
            var.length.inch = temp.inch - obj1.length.inch;
        }
        else {
            cout << "Negative Length is not Possible\n";
        }
        return var;
    }
};

int main(){
    
    inchfeet a(11,4), b(5,8);
    inchfeet c;
    c=a-b;
    a.print();
    b.print();
    c.print();
    return 0;
    return 0;
    
}