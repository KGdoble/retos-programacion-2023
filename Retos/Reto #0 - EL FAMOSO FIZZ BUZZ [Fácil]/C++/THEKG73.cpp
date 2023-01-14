/*Reto #0 - EL FAMOSO FIZZ BUZZ
 * Escribe un programa que muestre por consola (con un print) los
 * nï¿½meros de 1 a 100 (ambos incluidos y con un salto de lï¿½nea entre
 * cada impresiï¿½n), sustituyendo los siguientes:
 * - Mï¿½ltiplos de 3 por la palabra "fizz".
 * - Mï¿½ltiplos de 5 por la palabra "buzz".
 * - Mï¿½ltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
 */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	for (int i = 1; i <= 100; i++){
		if (i % 3 == 0 && i % 5 == 0){
			cout<<"fizzbuzz\n";
		}
		else if (i % 3 == 0){
			cout<<"fizz\n";
		}
		else if (i % 5 == 0){
			cout<<"buzz\n";
		}
		else {
			cout<<i<<endl;
		}
		
	}
	
	system("pause");
	
	return 0;
}
