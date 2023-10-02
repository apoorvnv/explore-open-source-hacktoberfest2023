#include<iostream>
using namespace std;
class Student{
    public:  // Access Modifier
        int id;
        string name;
        string sub;
};

int main(){
    Student s1, s2;
    s1.id=1;
    s1.name="Apoorv";
    s1.sub="Maths";
    s2.id=2;
    s2.name="Pratham";
    s2.sub="English";

    cout<<"ID="<<s1.id<<" Name="<<s1.name<<" Sub="<<s1.sub<<endl;
    cout<<"ID="<<s2.id<<" Name="<<s2.name<<" Sub="<<s2.sub<<endl;
    return 0;
}