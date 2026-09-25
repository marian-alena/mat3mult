#include <iostream>
#include <Eigen/Dense>
#include "time.h"

int main(){
    // Check for Clang
    #if defined(__clang__)
        std::cout << "Compiler: Clang\n";
        std::cout << "Version: " << __clang_major__ << "." << __clang_minor__ << "." << __clang_patchlevel__ << "\n";
    // Check for GCC
    #elif defined(__GNUC__)
        std::cout << "Compiler: GCC\n";
        std::cout << "Version: " << __GNUC__ << "." << __GNUC_MINOR__ << "." << __GNUC_PATCHLEVEL__ << "\n";
    // Check for Microsoft Visual C++
    #elif defined(_MSC_VER)
        std::cout << "Compiler: MSVC\n";
        std::cout << "Internal Version Toolset: " << _MSC_VER << "\n";
    #else
        std::cout << "Unknown Compiler\n";
    #endif

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
	std::cout << (double)(end - start)/(CLOCKS_PER_SEC * mLoops) << " seconds per loop" << std::endl;

	return 0;
}
