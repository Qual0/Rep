#include "Tests.h"

vector<int> s(vector<int> p, int y) {
    for (int j = 0; j < p.size(); ++j) {
        p[j] += y;
    }
    return p;
}