#include "generator.hpp"

#include <stdio.h>

generator<int> ints(int n) {
    for (int i = 0; i < n; ++i) {
        co_yield i;
    }
}

int main() {
    for (int i : ints(10)) {
        printf("%i\n", i);
    }
    printf("done\n");
    return 0;
}
