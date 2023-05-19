#include <iostream>
using namespace std;

struct Node
{
	int noMhs;
	string name;
	Node* next;
};

Node* STRAT = NULL;

void addNote() {
	int nim;
	string nama;
	Node* nodeBaru = new Node();
	cout << "Masukkan NIM: ";
	cin >> nim;
	cout << "Masukkan Nama: ";
	cin >> nama;
	nodeBaru->noMhs = nim;
	nodeBaru->name = nama;

	if (STRAT == NULL || nim <= START->noMhs) {
		if (STRAT != NULL && nim == START->noMhs) {
			cout << " NIM sudah ada" << endl;
		}
	}
	
	Node* curret = START;
	Node* previous = START;

	while ((curret != NULL) && (nim >= curret->noMhs))
	{
		
	}
	
}

bool searchNode(int nim, Node* curret, Node* previus) {
	previus = START;
	curret = START;
	while (curret != NULL && nim > curret->)
	{
		previus = curret;
		curret = curret->next;
	}
	if (curret == NULL) {
		return false;
	}
	else if (curret->noMhs == nim)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool deleteNode(int nim) {
	Node* curret = STRAT;
	Node* previous = STRAT;
	if (searchNode(nim, previous, curret) == false)
		return false;
	previous->next = curret->next;
	if (curret == STRAT)
		START = curret->next;
	return true;
}

bool listEmpty() {
	if (START == NULL)
		return true;
	else
		return false;
}