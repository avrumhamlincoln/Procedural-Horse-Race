#include <iostream>
#include <random>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

coin = dist(rd);

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
	for(int i = 0; i < 5; i++){
		if (coin  == 1){
			// I am stuck on how to get this working
		}
	}
}

void printLane(int horseNum, int* horses){

}
