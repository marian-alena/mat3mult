#include <iostream>
#include <Eigen/Dense>
#include "time.h"

int main(){
	clock_t start,end;
	size_t n=1000;
	Eigen::MatrixXd a=Eigen::MatrixXd::Random(n,n);
	Eigen::MatrixXd b=Eigen::MatrixXd::Random(n,n);

	// perform matrix multiplication and time it
	std::cout<<"Starting matrix multiplication..."<<std::endl;
	start=clock();
	Eigen::MatrixXd c=a*b;
	end=clock();
	std::cout<<(double)(end-start)/CLOCKS_PER_SEC<<std::endl;

	return 0;
}
