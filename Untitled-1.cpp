include<iostream>
using namespace std;
class student
{
    private:
    int rollno;
    string  name;
    public:
    //construtor
    student(int r,string name)
    {
        rollno=r;
        name=n;
        cout<<"student object created"<<endl;
    }
    //member funtion
    void display()
    {
        cout<<"roll no:"<<rollno<<endl;
        cout<<"name:"<<name<<endl;
    }
    //destructor
    ~student()
    {
    cout<<"student object destroyed"<<endl;
    }
};
int main()
{
    student s1(101,"arun");
    s1.display();
    return 0;
}