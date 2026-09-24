#include <iostream>
#include <Eigen/Dense>
#include "time.h"

int main(){
	clock_t start, end;
	size_t n = 1000;
    size_t mLoops = 10;
	Eigen::MatrixXd a = Eigen::MatrixXd::Random(n,n);
	Eigen::MatrixXd b = Eigen::MatrixXd::Random(n,n);
    Eigen::MatrixXd c;

	// perform matrix multiplication for loops and time it
	std::cout << "Starting matrix multiplication, " << mLoops << " loops..." << std::endl;
	start = clock();
    for (size_t i = 0; i < mLoops; i++)
    {
	    c = a * b;
    }
	end = clock();
	std::cout << (double)(end - start)/(CLOCKS_PER_SEC * mLoops) << std::endl;

	return 0;
}
