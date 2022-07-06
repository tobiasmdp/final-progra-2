
typedef struct nodoC{
    struct nodoC *sig;
    TElementoC dato;
}nodoC;
typedef struct TCola{
    nodoC *pri, *ult;
}TCola;


void IniciaC(TCola * C){
    C->pri = NULL;
    C->ult = NULL;
}

int VaciaC(TCola C){
    if (C.pri == NULL)
        return 1;
    else
        return 0;
}

void PoneC(TCola * C, TElementoC x){
    nodoC * N = (nodoC *) malloc (sizeof(nodoC)); //tiene que ser un puntero
    N->dato = x;
    N->sig = NULL;
    if ((*C).pri != NULL){
        (*C).pri = N;
    }
    else{
        (*C).ult->sig=(N);
    }
    (*C).ult = N;
}

void SacaC(TCola *C, TElementoC * x){
    if ((*C).pri != NULL){

    }
}

 /*
 El (*C) se utliza cuando viene por parametro, fijate que pri y ult son de tipo puntero, pero para acceder a ellos, se acceder por punto
 Por eso se llama (*C).pri o ult.
 (pointer_name)->(variable_name)
 Se utiliza con una varible puntero que apuntar a un struct.
 Por eso ponemos (*C) porque el puntero ahi se debe a que es pasapo por parametro, seria valido escribir -> pero conceptualmente es diferente
 */

 /*
 si queres hacerla facil,
 cuando accedes a un dato ->
 si *C le clavas (*C), sino (C), osea pones la var como viene de parametro
 si vas a apuntar a un elemento nuevo, no pongas el puntero, apuntas a un puntero.
 */

 /*
 consideraciones:
 - para sacar mirar si esta vacia y si saco mirar si queda vacia
 - para poner mirar si esa lleno y si es el primero
*/

