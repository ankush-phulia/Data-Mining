#ifndef POINT_H
#define POINT_H

#include <vector>

typedef int pId;

class point {

    public :
        pId id;
        std::vector<double> attributes;

        point() {}
        point(int i, std::vector<double> &a);
};

#endif