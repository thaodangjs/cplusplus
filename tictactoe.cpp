#include <iostream>
#include <string>
#include <ctime>

void drawBoard(char spaces[]);
void movePlayer(char *spaces, char player);
void moveComputer(char *spaces,char computer);
bool checkResult(bool running, char player);
bool checkTie();

int main(int argc, const char * argv[]) {
    
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    
    char player = 'X';
    char computer = 'O';
    bool running = true;
    while (running) {
        drawBoard(spaces);
        movePlayer(spaces,player);
        drawBoard(spaces);
        moveComputer(spaces, computer);
    }
    

    
    return 0;
}
void drawBoard(char spaces[]){
    std::cout << "     |     |     |\n";
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] <<"  |" << "\n";
    std::cout << "_____|_____|_____|\n";
    std::cout << "     |     |     |\n";
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] <<"  |" << "\n";
    std::cout << "_____|_____|_____|\n";
    std::cout << "     |     |     |\n";
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] <<"  |" << "\n";
    std::cout << "_____|_____|_____|\n";
    
};
void movePlayer(char *spaces,char player){
    int user;
    do{
        std::cout << "Enter number 1-9: ";
        std::cin >> user;
        user--;
        if(spaces[user] == ' '){
            spaces[user] = player;
            break;
        }
        
    }while(!(user < 8) || !(user > 0));
    
    
    
    
};
void moveComputer(char *spaces,char computer){
    srand(time(NULL));
    int num = rand() % 9;
    if(spaces[num] == ' '){
        spaces[num] = computer;
    }
    
};
bool checkResult(bool running, char player){
    if(){
        
    }
    return true;
};
bool checkTie(){
    return true;
};








