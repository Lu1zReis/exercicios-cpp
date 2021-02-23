#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

bool animal1(char animal){
    if(animal == 'v'){
        return true;
    }
    else{
        return false;
    }
}

bool animal2(char animal){
    if(animal1(animal)){
        if(animal == 'a'){
                // retornar ave
            return true;
        }else{
            // retornar mamifero
        return false;
    }
}
    else{ // se nao for vetebrado vai entar nessas condicões
        if(animal == 'i'){

            return true; // retornar inseto
        }else{

        return false; // retornar anelideo
        }

    }
}

bool animal_vertebrado(char animal){
    if(animal2(animal)){ // ele vai retornar ave
        if(animal == 'c'){
            return true; // retornar carnivoro // aguia
        }if(animal == 'o'){
            return false; // retornar onivoro // pomba
        }else{
            return true;
        }
    }
   else{ // ele vai retornar mamifero
        if(animal == 'o'){
            return true; // retornar onivoro // homem
        }if(animal == 'h'){
            return false; // retornar herbivoro // vaca
        }else{
            return true;
        }
    }

}

int main()
{
    char animal, animal_2, animal_3, animal_qualquer;
    cin >> animal;
    cin >> animal_2;
    cin >> animal_3;

    animal1(animal);
    animal2(animal_2);

    if(!animal_vertebrado(animal_3)){

        if(animal_3 == 'o'){
            cout << "homem" << endl;
        }else{
            cout << "aguia" << endl;
        }

        system("pause");
        exit(0);

    }else if(animal_vertebrado(animal_3)){

        if(animal_3 == 'o'){
        cout << "pomba" << endl;

        }else{
        cout << "vaca" << endl;
     }
        system("pause");
        exit(0);
    }

       return 0;

}

//    cout << "\nletra: " << animal << endl;


