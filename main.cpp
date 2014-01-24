#include "trapezoid_map.h"
#include <iostream>
#include <sstream>

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

	//assert(map.validateSegments(segments));
	map.buildMap(segments);
	
	/*
	segments.push_back(Segment(Point(0, 0), Point(2, 2)));
	segments.push_back(Segment(Point(2, 2), Point(4, 0)));
	segments.push_back(Segment(Point(4, 0), Point(2, -2)));
	segments.push_back(Segment(Point(2, -2), Point(0, 0)));

	map.buildMap(segments);
	map.clear();
	segments.clear();

	std::vector<Trapezoid*> trapezoids;
	segments.push_back(Segment(Point(1, 3), Point(3, 3)));
	segments.push_back(Segment(Point(4, 1), Point(6, 1)));
	segments.push_back(Segment(Point(2, 2), Point(5, 2)));

	assert(map.validateSegments(segments));
	map.buildMap(segments);
	map.getTrapezoids(trapezoids);
	map.clear();
	segments.clear();
	
	segments.push_back(Segment(Point(1, 1), Point(3, 1)));
	segments.push_back(Segment(Point(2, 3), Point(6, 3)));
	segments.push_back(Segment(Point(4, 2), Point(5, 2)));

	assert(map.validateSegments(segments));
	map.buildMap(segments);
	map.getTrapezoids(trapezoids);
	map.clear();
	segments.clear();
	
	segments.push_back(Segment(Point(2, 3), Point(5, 3)));
	segments.push_back(Segment(Point(1, 1), Point(4, 1)));
	segments.push_back(Segment(Point(3, 2), Point(6, 2)));

	assert(map.validateSegments(segments));
	map.buildMap(segments);
	map.getTrapezoids(trapezoids);
	map.clear();
	segments.clear();

	segments.push_back(Segment(Point(2, 1), Point(5, 1)));
	segments.push_back(Segment(Point(1, 3), Point(4, 3)));
	segments.push_back(Segment(Point(3, 2), Point(6, 2)));
	
	assert(map.validateSegments(segments));
	map.buildMap(segments);
	map.getTrapezoids(trapezoids);
	map.clear();
	segments.clear();
	
	segments.push_back(Segment(Point(1, 5), Point(3, 3)));
	segments.push_back(Segment(Point(2, 1), Point(5, 1)));
	segments.push_back(Segment(Point(4, 2), Point(6, 4)));

	assert(map.validateSegments(segments));
	map.buildMap(segments);
	map.getTrapezoids(trapezoids);
	map.clear();
	segments.clear();
	*/
	return 0;
}
