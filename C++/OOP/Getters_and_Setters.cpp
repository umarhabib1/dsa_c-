#include <iostream>
using namespace std;

class Stove{
    private:
    int temperature;
    public:

    Stove(int temp){
        setTemperature(temp);
    }

    int getTemperature(){
         return temperature;
    }

    void setTemperature(int temp){
        temperature = temp;
        if (temperature < 0)
        {
            temperature = 0;
        } else if (temperature >= 10)
        {
            temperature = 10;
            
        }
        
        
    }

};

int main(){
    /*

    Getters and setters are public member functions used to access and
     modify private data members of a class.

    They are public functions used to:

✅ Access private variables → Getter

✅ Modify private variables → Setter
    */
   Stove stove(1);
   cout<< stove.getTemperature();
   
}