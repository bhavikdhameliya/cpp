#include <iostream>
using namespace std;

class large{


 friend void number(large a);
    int x,y; 

     public:
    void getdata(int a, int b){
        x=a, y=b;
    }
};

   void number(large a)
   {
        if(a.x>a.y){
            cout<<"x is large "<<endl;
            
        }
        else{
            cout<<"y is large "<<endl;
        }

    }



int main ()
{
    large t;
    t.getdata (20,10);
    number(t);

    return 0;
}