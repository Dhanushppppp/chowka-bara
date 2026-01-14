#include<iostream>
using namespace std;

int main() {
	// 5*5 grid representation: 1 for 'x', 0 or empty
	int grid[5][5] = {
	{0, 0, 1, 0, 0},
	{0, 0, 0, 0, 0},
	{1, 0, 1, 0, 1},
	{0, 0, 0, 0, 0},
	{0, 0, 1, 0, 0},
};

  //display the grid
  for(int i=0; i<5; i++){
  	for(int j=0; j<5; j++){
  		if(grid[i][j] == 1)
  		  std::cout<<"[X]";
  		else
  		  std::cout<<"[ ]";
	  }
	  std::cout<<std::endl;
  }

  return 0;
}
