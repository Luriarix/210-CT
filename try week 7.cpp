#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

class Node {
public:
	int value;
	int list{};
	Node(int val) {
		this->value = val;
		this->list;
	}
	void addEdge(Node* i) {
		if (i != NULL)
		{
			this->list = i->value;

		}
	}

};

class Graph
{
public:
	Node* nodes;
	int i, z = 1;
	int lis{};
	Graph() {
		this->nodes = (Node*)i;
	}
	void addNode(Node* n) {

		if (n != NULL) {
			this->i = n->value;

			if (n->value < 4) {
				//if (n->value % 2 == 1){
				n->addEdge(new Node(z));
				z++;
				/*	}
				else if (n->value % 2 == 0)
				{
				n->addEdge(new Node(z));
				z++;
				n->addEdge(new Node(z));
				z++;
				}*/
			}

			else if (n->value == 4) {
				z = 1;
				n->addEdge(new Node(z));
			}
			else {
				cout << "Conected to node: ";
				cin >> z;
				n->addEdge(new Node(z));
			}
			cout << "Node " << i << " is conected to node " << z << "." << endl;

		}
	}
};

int main()
{
	int i, j;
	Graph* g = new Graph();
	for (i = 1; i <= 4; i++) {
		g->addNode(new Node(i));
	}

	cout << "Add a new node: ";
	cin >> j;
	g->addNode(new Node(j));
}