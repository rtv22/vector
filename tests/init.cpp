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
	vector_t vector(1);
	vector_t vector_1(vector);
	REQUIRE(B.size() == 1);
}

SCENARIO("size", "[size]")
{
	vector_t vector;
	REQUIRE(vector.size()==0);
}

SCENARIO("capacity", "[capacity]")
{
	vector_t vector;
	REQUIRE(vector.capacity()==0);
}
