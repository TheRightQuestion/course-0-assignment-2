#include <iostream>
#include <string>
using namespace std;

int main() {
  float total_boat_weight = 0;

  float boat_hull_weight = 12000.0 ;
  total_boat_weight = total_boat_weight + boat_hull_weight;

  float average_passenger_weight = 35.3;
  float num_passengers = 300;
  float total_passenger_weight = average_passenger_weight * num_passengers;
  total_boat_weight = total_boat_weight - total_passenger_weight;

  float food_weight = 190.1;
  total_boat_weight = total_boat_weight + food_weight;

  cout << "The total weight of the boat is " << total_boat_weight << endl;
}
