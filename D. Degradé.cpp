#include <iostream>
#include <vector>
using namespace std;

int main() {
	int filas;
	int col;
	bool es_vertical = true;
	bool es_hor = true;
	vector<int>vertical;
	vector<int>hor;
	
	cin >> filas;
	cin >> col;
	
	vector<vector<int>>m(filas, vector<int>(col));
	for(int i=0;i<filas;i++) { 
		for(int j=0;j<col;j++) { 
			cin >> m[i][j];
		}
	}
	

	
	int num;
	int aux;
	bool primera_vez = true;
	for(int i=0;i<filas;i++) { 
		if(!es_vertical){
			break;
		}
		for(int j=0;j<col;j++) {
			num = m[i][j];
			
			if(!primera_vez){
				if(num != aux){
					es_vertical = false;
					/*cout << "ENTRO AL FALSE VERICAL" << endl;*/
					break;
				}
			}
			primera_vez = false;
			aux = num;
			
		}
		vertical.push_back(num);
		primera_vez = true;
	}

	for(int i=0;i<col;i++) { 
		if(!es_hor){
			break;
		}
		for(int j=0;j<filas;j++) {
			num = m[j][i];
			/*cout << "el numero es: " << num << endl;*/
			if(!primera_vez){
				if(num != aux){
					/*cout << "el numero es: " << num << "y el aux es: " << aux << endl;*/
					es_hor = false;
					/*cout << "ENTRO AL FALSE HOR con I= " << i << endl;*/
					break;
				}
			}
			primera_vez = false;
			aux = num;
			
		}
		hor.push_back(num);
		primera_vez = true;
	}

	
//	cout << hor.size() << endl;
//	cout << es_hor << endl;
	for(size_t i=0;i<vertical.size()-1;i++) { 
		if(vertical[i] == vertical[i+1]){
			es_vertical = false;
			break;
		}
	}

	for(size_t i=0;i<hor.size()-1;i++) { 
		if(hor[i] == hor[i+1]){
			es_hor = false;
			break;
		}
	}

	if(es_vertical){
		cout << "VERTICAL" << endl;
		return 0;
	}
	if(es_hor){
		cout << "HORIZONTAL" << endl;
		return 0;
	}
	cout << "NADA" << endl;
	return 0;
}

