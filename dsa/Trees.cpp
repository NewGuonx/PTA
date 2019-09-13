// author - newguo@sonaspy.cn
// coding - utf_8

#include "Trees.h"

#define SIZE 20
using namespace std;
using namespace newtree;

int main(int argc, char const *argv[])
{
    /* code */
    //test();
    srand(time(NULL));
    int b[SIZE];
    generate(b, b + SIZE, [&]() { return rand() % 1000; });
    //iota(b, b + SIZE, 1);
    vector<int> a(b, b + SIZE), c = a, d;
    AVLTree<int> ax;
    ax.build(a);
    ax.printTree();

    return 0;
}