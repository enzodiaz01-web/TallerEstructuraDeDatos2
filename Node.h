#pragma once
struct Node {
    int x;
    int y;
    int value;
    Node* next;

    Node(int posX, int posY, int val) {
        x = posX;
        y = posY;
        value = val;
        next = nullptr;
    }
};