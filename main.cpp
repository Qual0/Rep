#include <iostream>
#include <vector>

using namespace std;

vector<int> s(vector<int> p, int y) {
    for (int j=0; j<p.size(); ++j) {
        p[j]+=y;
    }
    return p;
}

bool test() {
    vector<int> t1={1,2,3};
    vector<int> t2={874,73,952};
    vector<int> t3={9,2,-5};
    vector<int> o1={2,3,4};
    vector<int> o2={900,99,978};
    vector<int> o3={14,7,0};
    vector<int> r1=s(t1,1);
    vector<int> r2=s(t2,26);
    vector<int> r3=s(t3,5);
    for (int i=0; i<r1.size(); ++i) {
        if (o1[i]!=r1[i]) {
            return false;
        }
        if (o2[i]!=r2[i]) {
            return false;
        }
        if (o3[i]!=r3[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    test()==true ? cout << "Well done\n" : cout << "Rewrite!\n";
    return 0;
}
