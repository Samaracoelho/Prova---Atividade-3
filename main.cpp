#include <iostream>
#include <string>

using namespace std;

bool verifica(string esperada2, string digitada2)
{
  if(size(digitada2) != size(esperada2)){
    return false;
  }
  if (digitada2[0]!='#' or digitada2[2]!='x'){
    return false;
  }
  return true;
}

int main() {

  int qtdRepeticao;
  string digitada;
  string palavraFinal;
  bool resultado;
  string esperada = "#1x2";
	char alfabeto[8][4]={{'a','b','c',' '},{'d','e','f',' '},{'g','h','i',' '},{'j','k','l',' '},{'m','n','o',' '},{'p','q','r','s'},{'t','u','v',' '},{'w','x','y','z'}};

  cout << "Insira quantidade letras que terá a palavra:\n";
  cin >> qtdRepeticao;

  for (int i=0; i<qtdRepeticao;i++){
    cout << "#NUMxNUM: \n";
    cin >> digitada;
    resultado = verifica(esperada, digitada);
    
    if(resultado==0){
      cout << "entrada inválida \n";
      qtdRepeticao++;
    }
    if (resultado==1){
      if (digitada[1]=='1'){
      cout << "entrada inválida \n";
      qtdRepeticao++;
      }
      
      if (digitada[1]=='2'){
      int i = int(digitada[3])-49;
      palavraFinal = palavraFinal + alfabeto[0][i];
      }
      if (digitada[1]=='3'){
      int i = int(digitada[3])-49;
      palavraFinal = palavraFinal + alfabeto[1][i];
      }
      if (digitada[1]=='4'){
      int i = int(digitada[3])-49;
      palavraFinal = palavraFinal + alfabeto[2][i];
      }
      if (digitada[1]=='5'){
      int i = int(digitada[3])-49;
      palavraFinal = palavraFinal + alfabeto[3][i];
      }
      if (digitada[1]=='6'){
      int i = int(digitada[3])-49;
      palavraFinal = palavraFinal + alfabeto[4][i];
      }
      if (digitada[1]=='7'){
      int i = int(digitada[3])-49;
      palavraFinal = palavraFinal + alfabeto[5][i];
      }
      if (digitada[1]=='8'){
      int i = int(digitada[3])-49;
      palavraFinal = palavraFinal + alfabeto[6][i];
      }
      if (digitada[1]=='9'){
      int i = int(digitada[3])-49;
      palavraFinal = palavraFinal + alfabeto[7][i];
      }

    }
  }
  cout << palavraFinal;



}