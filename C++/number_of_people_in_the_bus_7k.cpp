#include <iostream>
#include <numeric>
#include <utility>
#include <vector>

/**
https://www.codewars.com/kata/5648b12ce68d9daa6b000099

There is a bus moving in the city which takes and drops some people at each bus
stop.

You are provided with a list (or array) of integer pairs. Elements of each pair
represent the number of people that get on the bus (the first item) and the
number of people that get off the bus (the second item) at a bus stop.

Your task is to return the number of people who are still on the bus after the
last bus stop (after the last array). Even though it is the last bus stop, the
bus might not be empty and some people might still be inside the bus, they are
probably sleeping there :D

Take a look on the test cases.

Please keep in mind that the test cases ensure that the number of people in the
bus is always >= 0. So the returned integer can't be negative.

The second value in the first pair in the array is 0, since the bus is empty in
the first bus stop.
*/

// Works but linter recommends using std::accumulate instead of a raw loop
unsigned int number(const std::vector<std::pair<int, int>>& busStops) {
  int passengers_in_the_bus = 0;
  for (const auto stop : busStops) {
    passengers_in_the_bus += stop.first - stop.second;
  }

  return passengers_in_the_bus;
}

// Using linter's suggestion
unsigned int number2(const std::vector<std::pair<int, int>>& busStops) {
  return std::accumulate(busStops.begin(), busStops.end(), 0,
                         [](int sum, const std::pair<int, int>& stop) {
                           return sum + stop.first - stop.second;
                         });
}
