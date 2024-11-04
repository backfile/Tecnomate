#include <iostream>
#include <vector>
using namespace std;


struct cords{
	int x;
	int y;
};

cords EncontrarPosicion(vector<vector<char>>m, char a){
	cords t;
	for(size_t i=0;i<m.size();i++) { 
		for(size_t j=0;j<m[i].size();j++) { 
			if(m[i][j] ==  a){
				t.x = j;
				t.y = i;
			}
		}
	}
	return t;
}

int main() {
	int filas;
	int col;
	cin >> filas;
	cin >> col;
	vector<cords>cords_x_palabra;
	vector<int>rtas;
	
	vector<vector<char>>matriz(filas, vector<char>(col));
	
	for(int i=0;i<filas;i++) { 
		for(int j=0;j<col;j++) { 
			cin >> matriz[i][j];
		}
	}	
	
	int cant_palabras;
	int tamanio_palabra;
	string palabra;
	cin >> cant_palabras;
	
	for(int i=0;i<cant_palabras;i++) { 
		cords a;
		a.y = 0;
		a.x = 0;
		cords_x_palabra.push_back(a);
		cin >> tamanio_palabra;
		cin >> palabra;
		for(int j=0;j<tamanio_palabra;j++) { 
			cords t = EncontrarPosicion(matriz, palabra[j]);
			cords_x_palabra.push_back(t);	
		}
		int cont =0;
		for(size_t j=0;j<cords_x_palabra.size()-1;j++) { 
			cont += abs(cords_x_palabra[j].x -  cords_x_palabra[j+1].x) + abs(cords_x_palabra[j].y -  cords_x_palabra[j+1].y);
		}
	
		rtas.push_back(cont);
		cords_x_palabra.clear();
	}
	
	for(size_t i=0;i<rtas.size();i++) { 
		cout << rtas[i] <<endl;
	}
	return 0;
}


//	3 8
//	q w e r t y u i
//	a s d f g h j k
//	o l c v b n m p
//	1
//	4
//	gato;
