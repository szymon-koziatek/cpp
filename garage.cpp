#include <iostream>

class Vehicle{
    private:
    std::string color;
    std::string brand;
    int hp;
    double speedTop;
    int wheels;

    public:
    void setColor( std::string color){ this->color = color; }
    void setBrand( std::string brand){ this->brand = brand; }
    void setHp( int hp){ this->hp = hp; }
    void setSpeedTop( double speedTop){ this->speedTop = speedTop; }
    void setWheels( int wheels){ this->wheels = wheels; } 

    void printCarStat() { 
        std::cout << "Color:" << color << '\n';
        std::cout << "Brand:" << brand << '\n';
        std::cout << "Hp:" << hp << '\n';
        std::cout << "Top Speed:" << speedTop << '\n';
        std::cout << "Number of wheels:" << wheels << '\n';
        }


};

class Spot : public Vehicle{
    private:
    std::string firstName;
    std::string secondName;

    public:
    void setFirstName(std::string firstName){this->firstName = firstName;}
    void setSecondName(std::string secondName){this->secondName = secondName;}
    void printOwnerID() {std::cout << "OwnerID:" << firstName.at(0) << secondName.at(0) << '\n';}
};

int main(){
    //var spot a
    std::string colorSpotA = "empty";
    std::string brandSpotA = "empty";
    int hpSpotA = 0;
    double speedTopSpotA = 0;
    int wheelsSpotA = 0;
    std::string firstNameSpotA = "empty";
    std::string secondNameSpotA = "empty";
    //var spot b
    std::string colorSpotB = "empty";
    std::string brandSpotB = "empty";
    int hpSpotB = 0;
    double speedTopSpotB = 0;
    int wheelsSpotB = 0;
    std::string firstNameSpotB = "empty";
    std::string secondNameSpotB = "empty";

    //var spot c
    std::string colorSpotC = "empty";
    std::string brandSpotC = "empty";
    int hpSpotC = 0;
    double speedTopSpotC = 0;
    int wheelsSpotC = 0;
    std::string firstNameSpotC = "empty";
    std::string secondNameSpotC = "empty";

    //var spot d
    std::string colorSpotD = "empty";
    std::string brandSpotD = "empty";
    int hpSpotD = 0;
    double speedTopSpotD = 0;
    int wheelsSpotD = 0;
    std::string firstNameSpotD = "empty";
    std::string secondNameSpotD = "empty";


    int quit = 0;
while (quit == 0)
{

    Spot a;
    a.setColor(colorSpotA);
    a.setBrand(brandSpotA);
    a.setHp(hpSpotA);
    a.setSpeedTop(speedTopSpotA);
    a.setWheels(wheelsSpotA);

    a.setFirstName(firstNameSpotA);
    a.setSecondName(secondNameSpotA);

    //a.printOwnerID();
    //a.printCarStat();

    Spot b;
    b.setColor(colorSpotB);
    b.setBrand(brandSpotB);
    b.setHp(hpSpotB);
    b.setSpeedTop(speedTopSpotB);
    b.setWheels(wheelsSpotB);

    b.setFirstName(firstNameSpotB);
    b.setSecondName(secondNameSpotB);

    //b.printOwnerID();
    //b.printCarStat();

    Spot c;
    c.setColor(colorSpotC);
    c.setBrand(brandSpotC);
    c.setHp(hpSpotC);
    c.setSpeedTop(speedTopSpotC);
    c.setWheels(wheelsSpotC);

    c.setFirstName(firstNameSpotC);
    c.setSecondName(secondNameSpotC);

    //c.printOwnerID();
    //c.printCarStat();

    Spot d;
    d.setColor(colorSpotD);
    d.setBrand(brandSpotD);
    d.setHp(hpSpotD);
    d.setSpeedTop(speedTopSpotD);
    d.setWheels(wheelsSpotD);

    d.setFirstName(firstNameSpotD);
    d.setSecondName(secondNameSpotD);

    //c.printOwnerID();
    //c.printCarStat();

    //Vehicle v;
    //v.setColor("Red");
    //v.setBrand("Audi");
    //v.setHp(400);
    //v.setSpeedTop(242.5);
    //v.setWheels(4);

    //v.printCarStat();

    //std::string uID;
    //int login;


    int spot;
    std::cout << "******* welcome to the garage *******\n";
    //std::cout << "The garage is currently empty\n";
    std::cout << "To park a car Choose a spot(1-4)";
    std::cin >> spot;
    switch (spot)
    {
    case 1:
        std::cout << "you chose spot 1\n";
        if (colorSpotA == "empty"){
            std::cout << "this spot is empty\n";
            std::cout << "to park a vehicle fill in this form\n";
            std::cout << "First name:";
            std::cin >> firstNameSpotA;
            std::cout << "Second name:";
            std::cin >> secondNameSpotA;
            std::cout << "Color:";
            std::cin >> colorSpotA;
            std::cout << "Brand:";
            std::cin >> brandSpotA;
            std::cout << "Hp:";
            std::cin >> hpSpotA;
            std::cout << "Top Speed:";
            std::cin >> speedTopSpotA;
            std::cout << "Number of wheels:";
            std::cin >> wheelsSpotA;
            std::cout << "You just parked\n";
            std::cin.clear();
            fflush(stdin);
        }
        else{
        std::cout << "this spot is taken by:\n";
        a.printOwnerID();
        a.printCarStat();
        }
        break;
    case 2:
        std::cout << "you chose spot 2\n";
        if (colorSpotB == "empty"){
            std::cout << "this spot is empty\n";
            std::cout << "to park a vehicle fill in this form\n";
            std::cout << "First name:";
            std::cin >> firstNameSpotB;
            std::cout << "Second name:";
            std::cin >> secondNameSpotB;
            std::cout << "Color:";
            std::cin >> colorSpotB;
            std::cout << "Brand:";
            std::cin >> brandSpotB;
            std::cout << "Hp:";
            std::cin >> hpSpotB;
            std::cout << "Top Speed:";
            std::cin >> speedTopSpotB;
            std::cout << "Number of wheels:";
            std::cin >> wheelsSpotB;
            std::cout << "You just parked:";
            std::cin.clear();
            fflush(stdin);
        }
        else{
        std::cout << "this spot is taken by:\n";
        b.printOwnerID();
        b.printCarStat();
        }
        break;
    case 3:
        std::cout << "you chose spot 3\n";
          if (colorSpotC == "empty"){
            std::cout << "this spot is empty\n";
            std::cout << "to park a vehicle fill in this form\n";
            std::cout << "First name:";
            std::cin >> firstNameSpotC;
            std::cout << "Second name:";
            std::cin >> secondNameSpotC;
            std::cout << "Color:";
            std::cin >> colorSpotC;
            std::cout << "Brand:";
            std::cin >> brandSpotC;
            std::cout << "Hp:";
            std::cin >> hpSpotC;
            std::cout << "Top Speed:";
            std::cin >> speedTopSpotC;
            std::cout << "Number of wheels:";
            std::cin >> wheelsSpotC;
            std::cout << "You just parked\n";
            std::cin.clear();
            fflush(stdin);
        }
        else{
        std::cout << "this spot is taken by:\n";
        c.printOwnerID();
        c.printCarStat();
        }
        break;
    case 4:
        std::cout << "you chose spot 4\n";
        if (colorSpotD == "empty"){
            std::cout << "this spot is empty\n";
            std::cout << "to park a vehicle fill in this form\n";
            std::cout << "First name:";
            std::cin >> firstNameSpotD;
            std::cout << "Second name:";
            std::cin >> secondNameSpotD;
            std::cout << "Color:";
            std::cin >> colorSpotD;
            std::cout << "Brand:";
            std::cin >> brandSpotD;
            std::cout << "Hp:";
            std::cin >> hpSpotD;
            std::cout << "Top Speed:";
            std::cin >> speedTopSpotD;
            std::cout << "Number of wheels:";
            std::cin >> wheelsSpotD;
            std::cout << "You just parked\n";
            std::cin.clear();
            fflush(stdin);
        }
        else{
        std::cout << "this spot is taken by:\n";
        d.printOwnerID();
        d.printCarStat();
        }
        break;
    
    default:
        std::cout << "invalid spot\n";
        break;
    }
}
        /*
        std::cout << "1. Login 2. Signup";
        std::cin >> login;
        switch (login)
        {
        case 1:
            std::cout << "Enter uID\n";
            std::cin >> uID;


            break;
        case 2:


        default:
        break;
    }
    */
    //std::cout << "to park your car enter your owner ID\n";
    //std::cin >> uID;




    return 0;
}