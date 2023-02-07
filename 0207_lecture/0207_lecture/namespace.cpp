#include <iostream>

namespace seoul {
	std::string lnum;
	std::string lmark;
}

namespace busan {
	std::string lnum;
	std::string lmark;
}


int main() {
	seoul::lnum = "02";
	seoul::lmark = "남산타워";
	std::cout << "seoul의 지역번호: " << seoul::lnum << std::endl << "seoul의 랜드마크: " << seoul::lmark << std::endl;
	using namespace busan;
	lnum = "051";
	lmark = "해운대";
	std::cout << "busan의 지역번호: " << lnum << std::endl << "busan의 랜드마크: " << lmark;

}