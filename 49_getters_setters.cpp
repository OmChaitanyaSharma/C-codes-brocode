#include <iostream>
class stove
{
private:
    int temperature; // as it is a private attribute it cannot
    // be directly accessed by another fucntion to make it readable
    // we use getters and to make it writeable
    // we use setters
public:
    // rememeber to write the function of getters and setters inside the 
    //public attribute or elsed it wont work

    int getTemperature()
    { // this is getters 
        return temperature;
    }
    void settemperature(int temperature)
    {// this is setters
        if (temperature > 10)
        {
            this->temperature = 10;
        }
        else if (temperature < 0)
        {
            this->temperature = 0;
        }
        else
        {
            this->temperature = temperature;
        }
    }
};
int main()
{
    stove stove;
    stove.settemperature(17);
    int a= stove.getTemperature();
    std::cout<<a<<"\n";
    
}