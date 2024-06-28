#ifndef DATASTRUCTURES_HEAP_H
#define DATASTRUCTURES_HEAP_H
#include <iostream>
#include <vector>

class Heap
{
private:
    std::vector<int> heap;

    // Функция для перестройки кучи вверх
    void siftUp(int index)
    {
        if (index && heap[parent(index)] < heap[index])
        {
            std::swap(heap[index], heap[parent(index)]);
            siftUp(parent(index));
        }
    }

    // Функция для перестройки кучи вниз
    void siftDown(int index)
    {
        int left = leftChild(index);
        int right = rightChild(index);

        int largest = index;

        if (left < heap.size() && heap[left] > heap[index])
            largest = left;

        if (right < heap.size() && heap[right] > heap[largest])
            largest = right;

        if (largest != index)
        {
            std::swap(heap[index], heap[largest]);
            siftDown(largest);
        }
    }

    // Функция для вычисления родительского индекса
    int parent(int index)
    {
        return (index - 1) / 2;
    }

    // Функция для вычисления индекса левого ребенка
    int leftChild(int index)
    {
        return (2 * index) + 1;
    }

    // Функция для вычисления индекса правого ребенка
    int rightChild(int index)
    {
        return (2 * index) + 2;
    }

public:
    Heap(const std::vector<int> &mass) : heap(mass)
    {
        for (int i = 0; i < mass.size(); i++)
        {
            siftUp(i);
        }
    }

    void insert(int key)
    {
        heap.push_back(key);
        siftUp(heap.size() - 1);
    }

    void pop()
    {
        if (!heap.empty())
        {
            std::swap(heap[0], heap[heap.size() - 1]);
            heap.pop_back();
            siftDown(0);
        }
    }

    int getMax()
    {
        return heap[0];
    }

    void print()
    {
        for (int x : heap)
        {
            std::cout << x << " ";
        }
        std::cout << '\n';
    }
};

#endif // DATASTRUCTURES_HEAP_H