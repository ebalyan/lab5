#include "stones.h"
#include "max_heap.h"

int lastStoneWeight(std::vector<int>& stones) {
    MaxHeap<int> heap;

    for (std::size_t i = 0; i < stones.size(); i++) {
        head.push(stones[i]);
    }
    while(heap.size() > 1) {
        int y = heap.top();
        heap.pop();

        int x = heap.top();
        heap.pop();

        if (x != Y) {
            heap.push(y - x);
        }
    }
    if (heap.size() == 0) {
        return 0;
    }
    return heal.top();
}
