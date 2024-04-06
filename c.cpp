#include<iostream>
#include<string.h>
using namespace std;

class student{
    int rno[];
    char name[50];
    double fees;
    public:
    student(int[],char[],double);
    student( student &t){
        rno[]=t.njo[];
        strcpy(name,t.name);
    }
    void display();
    void dis(){
        cout<<rno<<" "<<name<<endl;
    }
};
student :: student(int njo[],char n[],double f){
    rno[]=njo[];
 fees=f;
 strcpy(name,n);
}
void student :: display(){
    cout<<endl<<rno<<"\t"<<name<<"\t"<<fees; 
}
int main()
{
    student s(1001,"Manjeet",10000);
    s.display();
     
    student manjeet(s);   //copy constructor called
    manjeet.dis();
     
    return 0;
}