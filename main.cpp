#include "trapezoid_map.h"
#include <iostream>
#include <sstream>
#include <ctime>

int main()
{
	TrapezoidMap map;
	std::vector<Segment> segments;

	std::string buf;
	while (std::getline(std::cin, buf))
	{
		std::stringstream ss(buf);
		float x1, y1, x2, y2;
		ss >> x1 >> y1 >> x2 >> y2;
		segments.push_back(Segment(Point(x1, y1), Point(x2, y2)));
	}

	clock_t begin = clock();
	map.buildMap(segments);
	clock_t end = clock();

	double elapsed = double(end - begin) / CLOCKS_PER_SEC;
	std::cout << "Time elapsed: " << elapsed << " sec\n";
	return 0;
}
