#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string>aromatizantes = {"bergamota", "lavanda", "canela", "anís", "jengibre"};
	vector<int>aux;
	int temperatura;
	string tipo_te;
	string estandar;
	cin >> temperatura;
	
	string rta;
	for(size_t i=0;i<aromatizantes.size();i++) { 
		cin >> rta;
		rta == "SI" ? aux.push_back(1) : aux.push_back(0); 
	}
	
	if(!(temperatura >=65 and temperatura<=110)){
		cout << "Te extrano" << endl;
		return 0;
	}
	if(temperatura >=65 and temperatura<=75){
		tipo_te = "Blanco";
	}
	if(temperatura >=76 and temperatura<=80){
		tipo_te = "Verde";
	}
	if(temperatura >=81 and temperatura<=85){
		tipo_te = "Amarillo";
	}
	if(temperatura >=86 and temperatura<=95){
		tipo_te = "Oolong";
	}
	if(temperatura >=96 and temperatura<=110){
		tipo_te = "Negro";
	}
	

	
	if(aux[0] == 1 and aux[1] == 1 and aux[2]== 1 and aux[4]== 1 and aux[3]==0){
		estandar = "Gingergrey";
		cout << "Te " << tipo_te << " " << estandar << endl;
		return 0;
	}
	if(aux[0] == 1 and aux[1] == 1 and aux[2]== 1 and aux[4]== 1 and aux[3]==1){
		estandar = "Karma";
		cout << "Te " << tipo_te << " " << estandar << endl;
		return 0;
	}
	if(aux[0] == 0 and aux[1] == 1 and aux[2]== 0 and aux[3] == 1 and aux[4]==0){
		estandar = "Police";
		cout << "Te " << tipo_te << " " << estandar << endl;
		return 0;
	}
	if(aux[0] == 1 and aux[1] == 0 and aux[2]== 1 and aux[3] == 1 and aux[4]==0){
		estandar = "Golang";
		cout << "Te " << tipo_te << " " << estandar << endl;
		return 0;
	}
	cout << "Te " << tipo_te << endl;

	return 0;
}

