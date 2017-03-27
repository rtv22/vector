#include <vector.hpp>
#include <catch.hpp>

SCENARIO("vector init", "[init]") {
	vector_t vector;
	REQUIRE(vector.size() == 0);
	REQUIRE(vector.capacity() == 0);
}

SCENARIO("params", "[init with params]") {
	int init = 3;
	vector_t vector (init);
	REQUIRE(vector.size() == 3);
	REQUIRE(vector.capacity() == 6);
}

SCENARIO("copy", "[copy]") 
{
	vector_t A(1, 1);
	vector_t B(A);
	REQUIRE(B.size() == 1);
	REQUIRE(B.capacity() == 1);
}

