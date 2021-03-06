#include "clustering.h"

using namespace std;

void clustering::readData(string &inFile) {
    FILE* inputStream = fopen(inFile.c_str(), "r");
    while (parseLine(inputStream, points, dim));
    fclose(inputStream);
    
    clusterAssmts.resize(points.size()/dim);
    fill(clusterAssmts.begin(), clusterAssmts.end(), UNCLASSIFIED);
}