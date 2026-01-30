#include <iostream>
#include <cstdlib>
#include <ctime>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

const int NUM_HORSES = 5;
const int TRACK_LENGTH = 15;

int main(){

	srand(time(NULL));

	int horses[] = {0, 0, 0, 0, 0};
	bool keepGoing = true;

	while(keepGoing){
		for (int i = 0; i < 5; i++){
			advance(i, horses);
			printLane(i, horses);
			if (isWinner(i, horses)){
				keepGoing = false;
				std::cout << "Horse " << i << " Wins!" << std::endl;
			}
		}

		std::cout << "Press Enter for the next flip..." << std::endl;
		std::cin.get();
	}

}

void advance(int horseNum, int* horses){
	int coin = rand() % 2;
	horses[horseNum] += coin;
}

void printLane(int horseNum, int* horses){
	for (int i = 0; i < TRACK_LENGTH; i++){
		if (i == horses[horseNum]){
			std::cout << horseNum;
		}
		else{
			std::cout << ".";
		}
	}
	std::cout << std::endl;
}

bool isWinner(int horseNum, int* horses) {
	return (horses[horseNum] >= TRACK_LENGTH - 1);
}
