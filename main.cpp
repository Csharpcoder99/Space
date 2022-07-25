//
//  main.cpp
// This is inspired by Return to Space on Netflix

#include <iostream>
#include <unistd.h>
#include <ctime>
#include <fstream>
using namespace std;

int main() {
    // insert code here...

    system("clear");

    class breathTaker
    {
        public:
        int breathTaker_damage;
        int lasting_affects;
        

    };

    class Radiation
    {
        public:
        int damage;
        
    };
    
    class People
    {
        public:
        int total_people;
        int person1_health;
        int person2_health;
        int person1_breath;
        int person2_breath;
        string name1;
        string name2;
        
    };
    
    class Rocket_2
    {
        public:
        int speed;
        int weight;
        double distance;
        double direction;
        string name;
        
    };
    
    class Spacestation
    {
        public:
        int id;
        double direction;
        double distance;
    };
    class Rocket
    {
        
       public:
       int speed;
       int weight;
       double direction;
       double distance;
       string name;
        
    };
    class Earth
    {
        public:
        int gravity;
        int gravity_2;
        double direction;
        double distance;
        string name;
    };

    int randomNumber = rand();
    
    Rocket rocket;
    rocket.speed = 1000;
    rocket.weight = 989;
    rocket.direction = 572.47;
    rocket.distance = 98.786;
    rocket.name = "Falcon 9";
    
    Earth earth;
    earth.gravity = 999;
    earth.gravity_2 = 200;
    earth.direction = 326.321;
    earth.distance = 800.321;
    
    Spacestation station;
    station.direction = 574.47; 
    station.distance = 100.786; // distance from earth
    station.id = randomNumber;

    Rocket_2 rocket_2;
    rocket_2.speed = 400;
    rocket_2.weight = 221;
    rocket_2.direction = 326.321;
    rocket_2.distance = 800.321;
    
    People people;
    people.total_people = 2;
    people.name1 = "Bob";
    people.name2 = "Doug";
    people.person1_health = 200;
    people.person2_health = 200;
    people.person1_breath = 400;
    people.person2_breath = 400;

    
    Radiation radiation;
    radiation.damage = 30;

    breathTaker Breathtaker;
    Breathtaker.breathTaker_damage = 20;
    Breathtaker.lasting_affects = 30;

    
    
    
    
    
    if (rocket.speed > earth.gravity )
    {
        for (int i = 0; i < 1; i++)
        {
            cout << rocket.name << " will be launching in " << endl;
            
            cout << "3" << endl;
            sleep(1);
            cout << "2" << endl;
            sleep(1);
            cout << "1" << endl;
            sleep(1);
            
            cout << rocket.name << " reach low orbit" << endl;
            people.person1_health = people.person1_health - radiation.damage;
            people.person2_health = people.person2_health - radiation.damage;
            //time code
            /* Declaring argument for time()
            time_t tt;
          
            //Declaring variable to store return value of
            // localtime()
            struct tm * ti;
          
            // Applying time()
            time (&tt);
          
            // Using localtime()
            ti = localtime(&tt);
          
            cout << "Current Day, Date and Time is: " << asctime(ti);
            */
            
            rocket.direction = 572.47 + 2;
            
            if (rocket.direction == station.direction)
            {

                people.person1_health = 170 - radiation.damage;
                people.person2_health = 170 - radiation.damage;
                cout << "Rocket and Space station Stats: " << endl;
                cout << rocket.name << " is facing the the space station" << endl;
                cout << "Station Direction: " << station.direction << endl;
                cout << "Rocket Direction:  " << rocket.direction << endl;
                cout << "Station Distance: "  << station.distance << endl;
                cout << "Rocket Distance: " << rocket.distance << endl;

                cout << endl;

                cout << "Person Stats" << endl;
                cout << people.name1 << " Health: " << people.person1_health << endl;
                cout << people.name2 << " Health: " << people.person2_health << endl;
                cout << people.name1  << " Air: " << people.person1_breath << " " << people.name2 << " Air: " << people.person2_breath << endl;
                
                rocket.distance = 98.786 + 2;
                
                if (rocket.distance == station.distance)
                {   

                    cout << "Updated Breath Stats: " << endl;
                    
                    people.person1_breath = 400 - Breathtaker.breathTaker_damage - Breathtaker.lasting_affects;
                    cout << people.name1 << " Air: " << people.person1_breath << endl;
                    people.person2_breath = 400 - Breathtaker.breathTaker_damage - Breathtaker.lasting_affects;
                    cout << people.name2 << " Air: " << people.person2_breath << endl;
                    cout << endl;
                    sleep(1);
                    cout << rocket.name << " reached the space station" << endl;
                    sleep(1);
                    people.person1_health = 120 - radiation.damage;
                    people.person2_health = 120 - radiation.damage;
                    //Declaring argument for time()
                    time_t tt;

                  
                    //Declaring variable to store return value of
                    // localtime()
                    struct tm * ti;
                  
                    // Applying time()
                    time (&tt);
                  
                    // Using localtime()
                    ti = localtime(&tt);
                  
                    cout << "Current Day, Date and Time is: " << asctime(ti);
                    //asctime(ti) encrypted into number bytes 
                    //1652697093
                    //1652697112
                    
                    cout << rocket.name << " will be leaving in " << endl;
                    cout << "4" << endl;
                    sleep(1);
                    cout << "3" << endl;
                    sleep(1);
                    cout << "2" << endl;
                    sleep(1);
                    cout << "1" << endl;

                    swap (rocket_2.direction, earth.direction);
                        
                    if (rocket_2.direction == earth.direction)
                    {
                        cout << "Rocket_2 direction is facing earth_direction" << endl;
                        people.person1_health = 140 - radiation.damage;
                        people.person2_health = 140 - radiation.damage;

                        if (rocket_2.distance == earth.distance)
                        {

                            cout << rocket.name << " is leaving the station" << endl;
                            people.person1_health = 110 - radiation.damage;
                            people.person2_health = 110 - radiation.damage;
                            
                            ofstream data;
                            data.open("Data source.txt");
                            data << "This data was created by the simulation not to used" << endl;
                            data << "This data is not accurate." << endl;
                            data << "The program was created for the following reasons: Fun, Tournament, Competitive programming" << endl;
                            data.close();
                            
                            ofstream Rocket_data;
                            Rocket_data.open("Space data/Rocket_1 data.txt");
                            Rocket_data << "Rocket Name: " << rocket.name << endl;
                            Rocket_data << "Rocket Speed: " << rocket.speed << endl;
                            Rocket_data << "Rocket Weight: " << rocket.weight << endl;
                            Rocket_data << "Rocket Direction: " << rocket.direction << endl;
                            Rocket_data << "Distance: " << rocket.distance << endl;
                            Rocket_data.close();

                            ofstream Rocket_2;
                            Rocket_2.open("Space data/Rocket_2 Data.txt");
                            Rocket_2 << "Rocket Name: " << rocket_2.name << endl;
                            Rocket_2 << "Rocket Speed: " << rocket_2.speed << endl;
                            Rocket_2 << "Rocket Weight: " << rocket_2.weight << endl;
                            Rocket_2 << "Rocket Direction: " << rocket_2.direction << endl;
                            Rocket_2 << "Rocket Distance: " << rocket_2.distance << endl;
                            Rocket_2.close(); // closing the function will create the file that stores the data for the rocket
                            
                            ofstream People;
                            People.open("Space data/Astronaut_1 data.txt");
                            People << "Astronaut Name: " << people.name1 << endl;
                            People << "Astronaut Health: " << people.person1_health << endl;
                            People << "Astronaut Air Tank: " << people.person1_breath << endl;
                            People.close();

                            ofstream People_2;
                            People_2.open("Space data/Astronaut_data 2.txt");
                            People_2 << "Astronaut Name: " << people.name2 << endl;
                            People_2 << "Astronaut Health: " << people.person2_health << endl;
                            People_2 << "Astronaut Air Tank: " << people.person2_breath << endl;
                            People_2.close();

                            ofstream Earth_data;
                            Earth_data.open("Space data/earth data.txt");
                            Earth_data << "Earth Gravity: " << earth.gravity << endl;
                            Earth_data << "Earth Direction: " << earth.direction << endl;
                            Earth_data << "Earth Distance: " << earth.distance << endl;
                            Earth_data.close();

                            ofstream Station;
                            Station.open("Space data/station data.txt");
                            Station << "Station Id: " << station.id << endl;
                            Station << "Direction: " << station.direction << endl;
                            Station << "Distance: " << station.distance << endl;
                            Station.close();
                            
                            if (rocket_2.speed > earth.gravity_2)
                            {
                                cout << people.name1 << " and " << people.name2 << " successfully reached earth with the help of "  << rocket.name << endl;
                                exit(1);

                            }
                            else
                            {
                                cout << rocket.name << " blew up trying to reach earth " << endl;
                                exit(1);

                        
                            }
                            
                                
                        }
                    }
                        
                    
                    
                }
                
                
                
                
            }
            else
            {
                cout << rocket.name << " is not facing the space station" << endl;
                cout << rocket.direction << endl;
            }
            
            
        }
    }else
    {
        cout << rocket.name << " blew up in the process of launching" << endl;
        exit(1);
    }
    
    
    
    
    return 0;
}
