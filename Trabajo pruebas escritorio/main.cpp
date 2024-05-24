#include <algorithm>
#include <cmath>
#include <vector>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	std::vector<int> data = {3,4,-1,-10,6};
	auto comp =[](int a, int b){ return a < b;};
	std::sort(data.begin(),data.end(),comp);
	for(int i=0;i<5;++i){
		std::cout<< "data [" << i << "]: " << data[i]<< "\n";
	}
	return 0;
}
