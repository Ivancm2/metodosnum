#include <iostream>
#include <string>
using namespace std;

bool estaLetra(char letra,string gibb){
    for (int i=0;i<gibb.length();i++){
        if (letra==gibb.at(i)){
            return true;
        }
    }
}
void quitarLetra(char letra, string *tmp){
    for (int i=0;i<tmp->length();i++){
        if (letra==tmp->at(i)){
            tmp->erase(tmp->begin()+4);
        }
    }
}
int main(){
    string gibb, texto, temporal;
    cout << "Dame un texto giberish" << endl;
    cin >> gibb;
    cout << "Dame un texto" << endl;
    cin >> texto;
    temporal=gibb;
    int checkpoint, bandera=0;
    for (int i=0;i<texto.length();i++){
        checkpoint=i;
        if (estaLetra(texto.at(i),gibb)){
            for (int j=i;j<texto.length(),j++){
                quitarLetra(texto.at(i),&temporal);
                if (temporal.size()==0){
                    bandera=1;
                }
            }
            
        }
    }
    if (bandera){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    
    return 0;
}