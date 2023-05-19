#include <iostream>
using namespace std;

struct Node {
	int noMhs;
	string name;
	Node* next;
};

Node* START = NULL;

void addNode() {
	int nim;
	string nama;
	Node* nodeBaru = new Node();
	cout << "Masukkan NIM: ";
	cin >> nim;
	cout << "Masukan Nama: ";
	cin >> nama;
	nodeBaru->noMhs = nim;
	nodeBaru->name = nama;

	if (START == NULL || nim <= START->noMhs) {
		if (START != NULL && nim == START->noMhs)
		{
			cout << "NIM sudah ada" << endl;
			return;
		}

		nodeBaru->next = START;
		START = nodeBaru;
		return;
	}

	Node* previous = START;
	Node* curret = START;

	while ((curret != NULL) && (nim >= curret->noMhs))
	{
		if (nim == curret->noMhs)
		{
			cout << "NIM sudah ada" << endl;
			return;
		}
		previous = curret;
		curret = curret->next;
	}

	nodeBaru->next = curret;
	previous->next = nodeBaru;
}

bool serachNode(int nim, Node* curret, Node* previous) {
	previous = START;
	curret = START;
	while (curret != NULL && nim > curret->noMhs)
	{
		previous = curret;
		curret = curret->next;
	}

	if (curret == NULL)
	{
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
	Node* curret = START;
	Node* previous = START;
	if (serachNode(nim, previous, curret) == false)
		return false;
	previous->next = curret->next;
	if (curret == START)
		START = curret->next;
	return true;
}
bool listEmpty() {
	if (listEmpty()) {
		cout << "List Kosong" << endl;
		system("pause");
	}
}