#include<iostream>
using namespace std;
class baseclass final

{
    public:
        virtual void perkenalan() {
            cout << "hallo saya adalah function dari base class" << endl
        }
};
class derivedClass : public baseclass
{
    public:
        void perkenalnan() override
         {
            cout << "hallo saya adalah function dari derived class" << endl;
        }
};

int main(){
    derivedClass a;
    a.perkenalan(); // Output: hallo saya adalah function dari derived class
    return 0;

}