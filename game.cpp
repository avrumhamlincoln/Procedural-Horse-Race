#include <iostream>
#include <random>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

const int NUM_HORSES = 5;
const int TRACK_LENGTH = 15;


std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

int coin = dist(rd);

int main(){
	int horses[] = {0, 0, 0, 0, 0};
	bool keepGoing = true;

	while(keepGoing){
		for (int i = 0; i < 5; i++){
			advance(i, horses);
			printLane(i, horses);
			if (isWinner(i, horses)){
				std::cout << "Horse" << i << "Wins!" << std::endl;
			}
		}
	
	}

}

void advance(int horseNum, int* horses){
	int coint = rand() % 2;
	horses[horseNum] += coin;
}

void printLane(int horseNum, int* horses){
	for (int i = 0; i < TRACK_LENGTH;, i++){
		if (i == horses[horseNum]){
			std::cout << horseNum;
		}
		else{
			std::cout << "."
		}
	}
}
