Trapezoidal map
---------------

This is a C++ implementation of trapezoidal map structure
which is designed for quick (in O(n\*logN)) point
localization in planar graphs.

The implementation is only for academic purpose and
contains tons of govnocode. Please do not use it yourself!

Input: a set of *non-intersecting* line segments (however,
they can share common endpoints).

Provides: the query for a trapezoid which contains the given point.

The current version provides only an interface for benchmarking.
Use the commands below to try it:

	make
	./run_test.sh NUM_POINTS

You will need the second version of python and the following
extra packages:

* numpy
* scipy
