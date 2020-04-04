#include <iostream>

using namespace std;

struct student{
    string fname;
    string sname;
    double gpa;
    string faculty;
    //constructor
    /*student(string _fname, string _sname, double _gpa, string _faculty){
        fname = fname;
    }*/
    student(string fname, string sname, double gpa, string faculty){
        this->fname = fname;
        this->sname = sname;
        this->gpa = gpa;
        this->faculty = faculty;
    }
    void print(){
        cout << fname << " " << sname << " " << gpa << " " << faculty << endl;
    }
};

void f(student st){
    st.fname = "Bob";
    cout << st.fname << endl;
}

int main(){
    student st("ABCD", "XYZ",3.5, "FIT");
    f(st);
    st.print();
    cout << st.fname << endl;

    return 0;
}