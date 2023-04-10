#include <iostream>

int main() {
    char rpsPlayer;
    char botR = 'R';
    char botP = 'P';
    char botS = 'S';

    std::cout << "Rock Paper or Scissors(R - rock, P - Paper, S - scissors): ";
    std::cin >> rpsPlayer;

    srand(time(NULL));
    int randNum = (rand() % 3) + 1;

    switch(randNum) {
        case 1:
            std::cout << "Bot: " << botR << std::endl;
            std::cout << "Player: " << rpsPlayer << std::endl;

            switch (rpsPlayer) {
                case 'R':
                    std::cout << "Draw!" << std::endl;
                    break;
                case 'P':
                    std::cout << "Player Won!" << std::endl;
                    break;
                case 'S':
                    std::cout << "Bot Won!" << std::endl;
                    break;
            }
            break;
        case 2:
            std::cout << "Bot: "  << botP << std::endl;
            std::cout << "Player: " << rpsPlayer << std::endl;

            switch (rpsPlayer) {
                case 'R':
                    std::cout << "Bot Won!" << std::endl;
                    break;
                case 'P':
                    std::cout << "Draw!" << std::endl;
                    break;
                case 'S':
                    std::cout << "Player Won!" << std::endl;
                    break;
            }
            break;
        case 3:
            std::cout << "Bot: "  << botS << std::endl;
            std::cout << "Player: " << rpsPlayer << std::endl;

            switch (rpsPlayer) {
                case 'R':
                    std::cout << "Player Won!" << std::endl;
                    break;
                case 'P':
                    std::cout << "Bot Won!" << std::endl;
                    break;
                case 'S':
                    std::cout << "Draw!" << std::endl;
                    break;
            }
            break;
    }

    return 0;
}
