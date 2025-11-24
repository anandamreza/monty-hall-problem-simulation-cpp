#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL));
    int numRand = (rand()%3)+1;
    int doorPick;
    int doorSwitch;
    int hostOpen;
    int doorPick2;
    std::string chooseSwitch;
    
    std::cout << "******* Welcome To Monty Hall! *******\n";
    std::cout << " DOOR 1         DOOR 2         DOOR 3 \n\n";
    std::cout << "PICK A DOOR : ";
    std::cin >> doorPick;

    do{
        hostOpen = (rand()%3)+1;
    }while(hostOpen == numRand || hostOpen == doorPick);

    do{
        doorPick2 = (rand()%3)+1;
    }while(doorPick2 == hostOpen || doorPick2 == doorPick);

    std::cout << "\nThe Host Open DOOR " << hostOpen << ". . . IT WAS A GOAT! ! !\n";
    std::cout << "\nSWITCH TO DOOR " << doorPick2 << "? (y/n) : ";
    std::cin >> chooseSwitch;

    if(chooseSwitch == "y"){
        do{
            doorSwitch = (rand()%3)+1;
        }while(doorSwitch == hostOpen || doorSwitch == doorPick);

        doorPick = doorSwitch;
    }

    std::cout << "\n************ FINAL RESULT ************\n";
    std::cout << "YOUR CHOSEN DOOR : " << doorPick << '\n';
    std::cout << "CAR IS IN DOOR   : " << numRand << '\n';
    
    if(doorPick == numRand){
        std::cout << "YOU WIN! ! !\n";
    } else {
        std::cout << "YOU LOSE! ! !\n";
    }

    return 0;
}