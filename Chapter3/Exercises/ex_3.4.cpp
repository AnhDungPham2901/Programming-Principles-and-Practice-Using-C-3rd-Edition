/*
[4] Read a sequence of double values into a vector. 
Think of each value as the distance between two cities along a given route. 
Compute and print the total distance (the sum of all distances). 
Find and print the smallest and greatest distance between two neighboring cities. 
Find and print the mean distance between two neighboring cities.
*/

#include "../../PPPHeaders.h"

double find_median(vector<double> data) {
    ranges::sort(data);
    if(data.size() % 2 != 0) {
        return data[data.size()/2];
    } else {
        double upper = data[data.size()/2];
        double lower = data[data.size()/2 -1];
        double median = (upper + lower) / 2;
        return median;
    }
}

int main() {
    double find_median(vector<double> data);
    vector<double> distances;
    double total_distance = 0;
    for(double distance; cin >> distance;) {
        distances.push_back(distance);
        total_distance += distance;
    }
    cout << "Total distance: " << total_distance << '\n';

    ranges::sort(distances);
    cout << "Smallest distance: " << distances[0] << '\n';
    cout << "Greatest distance: " << distances[distances.size() - 1] << '\n';
    double distance_median = find_median(distances);
    cout << "Median distance: " << distance_median << '\n';
    return 0;
}