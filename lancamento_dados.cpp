#include <iostream>
#include <iomanip> //uso do setw
using namespace std;

int main(void){
    long int n = 36000;
    int lan1, lan2;
    int combinacoes[36]= 
    
 	  {0, 0, 0, 0, 0, 0, 
     0, 0, 0, 0, 0, 0, 
     0, 0, 0, 0, 0, 0, 
     0, 0, 0, 0, 0, 0, 
     0, 0, 0, 0, 0, 0, 
     0, 0, 0, 0, 0, 0 };
  
	for (int i=0; i<n; i++){
		lan1 = 1 + rand() % 6;
		lan2 = 1 + rand() % 6;

	for(int j=0;j<6;j++){
    if (lan1==j+1){
    for(int i=0;i<6;i++){
    if(lan2==i+1)
		combinacoes[i+j*6] += 1;
        } 
	    } 
	  } 
  }

		cout << "\n"; 
		cout << "     1       2       3       4       5       6";
		cout << "\n";
 
 for(int j=0;j<6;j++){
        cout << j+1 << "|";
for(int i=0;i<6;i++){
		cout << setw(5) << combinacoes[i+j*6] << " | "; //setw (streamsize Wide) - especifica a largura do campo de exibição para o elemento seguinte no fluxo
    }
        cout << "\n";
  }
    return 0;
}