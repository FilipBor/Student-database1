#include <iostream>
#include "Classes.h"

int main() {
    student s(123424,"Mark","Twain","12/3/2001");
    subject g(4.5,"Maths");
    s.add_subject(g);
    s.show();
    subject b(4.5, "Physics");
    s.add_subject(b);
    s.show();
    student y = s;
    y.show();
    subject z = g;
    z.show();
    s+b;
    s.show();
    subject f(2.44, "DCT");
    s+f;
    s.show();
    std::string temp;
    std::cin>> temp;
    student e;
    if(temp =="add_stu")
    {
        e.add_stu();
    }
    e.show();
}
