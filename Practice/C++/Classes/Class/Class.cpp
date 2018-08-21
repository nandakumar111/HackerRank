#include <iostream>
#include <sstream>
using namespace std;

class Student{
  private:
    int age;
    int std;
    string frstname;
    string lstname;
  public:
    void set_age(int a){
        age = a;
    }
    void set_standard(int s){
        std = s;
    }
    void set_first_name(string frst){
        frstname = frst;
    }
    void set_last_name(string last){
        lstname = last;
    }
    int get_age(){
        return age;
    }
    int get_standard(){
        return std;
    }
    string get_first_name(){
        return frstname;
    }
    string get_last_name(){
        return lstname;
    }
    string to_string(){
        ostringstream agestr,stdstr;
        agestr << age;
        stdstr << std;
        return agestr.str()+','+frstname+','+lstname+','+stdstr.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}