#include <iostream>
using namespace std;

class Car{
    private:
    	int ReleaseYear;
        string customer;
        int speed;
	
    public:
    	Car(int Year, string Customer, int Speed){    //constructor
            ReleaseYear = Year;
            customer = Customer;
            speed = Speed;
        }
        
        int get_ReleaseYear(){
            return ReleaseYear;
        }
        
        string get_customer(){
            return customer;
        }
        
        int get_speed(){
            return speed;
        }
        
        void accelerate(){
            speed += 10;
        }
        
        void brake(){
            speed -= 10;
        }
};


int main() {
    Car car1(2000, "Tata", 0);
    
    //accelerate 5 times
    for(int i=0; i<5; i++){
    	car1.accelerate();
    }
    cout << "Car1 speed after accl 5 times = " << car1.get_speed() <<endl;
    
    //brake 5 times
    for(int i=0; i<5; i++){
    	car1.brake();
    }
    cout << "Car1 speed after brake 5 times = " << car1.get_speed();
    
    return 0;
}
