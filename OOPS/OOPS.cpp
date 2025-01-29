#include <iostream>
using namespace std;

//class is a blueprint and no memory allocation is required 
class Teacher{
    
    private:
    //properties and attributes
    int salary;
    
    //methods/member function
    void incomeNet(){
        cout<<salary<<endl;
    }
    public:
    // constructor_non-parameterised
    Teacher(){
        dept="science";
    }
    //constructor_parameterised
    Teacher(int salary/*here input has same name as of the variable assigned */,int a,int w){
        this->salary=salary;//{this} pointer is used here to bring clarification with same name pointer and input 
        age=a;
        wives=w;
    }
    //NOTE: CONSTRUCTOR OVERLOADING{POLYMORPHISM} -> here the Teacher name constructors are available without any error because they have different numbers of parameter
    //constructor_copy
    Teacher(Teacher &original_OBJ){
        cout<<"this is a custom copy constructor"<<endl;
        salary=original_OBJ.salary;
        age=original_OBJ.age;
        wives=original_OBJ.wives;

    }
    //destructor ->same syntax as constructor and opposite of constructor  
    // ~Teacher(){
    //     delete ptr;
    // }


    
    //properties and attributes
    int age;
    string dept;
    int wives;
    //methods/member function
    int experience(){
        return age-20;
    }

    // protected: {it is also a access modifier }

    //setter Function
    void setSalary(double s){
        salary=s;
    }
    //getter Function 
    int getSalary(){
        return salary ;
    }
};

int main(){
    cout<<"sumit"<<endl;
    Teacher t1(100000,50,2);
    cout<<t1.wives<<endl;
    cout<<t1.age<<endl;
    cout<<t1.experience()<<endl;
    Teacher t2(t1);
    cout<<t2.age<<endl;
    cout<<t2.wives<<endl;
    cout<<t2.getSalary()<<endl;
    



    

    

    return 0;
}