#include <iostream>
using namespace std;

class A{
public:
    class B{
    private:
        int var;

    public:
        B(int var){
            this->var = var;
        }

        int getVar(){
            return var;
        }
    };
};


int main(){

    A::B obj(11);

    cout << obj.getVar() << endl;

return 0;
}