#include <iostream>

using namespace std;

struct student{
    string fname;
    string sname;
    double gpa;
    string faculty;
    void print(){
        cout << fname << " " << sname << " " << gpa << " " << faculty << endl;
    }
};

int main(){

    student st;
    st.fname = "ABCD";
    st.sname = "XYZ";
    st.gpa = 3.5;
    st.faculty = "FIT";

    st.print();
    

    return 0;
}