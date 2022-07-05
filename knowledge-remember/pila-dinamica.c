#define max 50

typedef int TElementoP;

typedef struct nodoP{
    TElementoP dato;
    nodoP *sig;
} nodoP;
typedef nodoP *TPila;
/*                                                                                  -PARA VALIDAR TODOS LOS METODOS, TESTEAR SI PILA FUESE NULL
                                                                                    -ESTATICO Y DINAMICO USAN MISMO HEADERS
*/
void poneP (TPila * P, TElementoP x){
    TPila N; //(nodoP * = Tpila)
    N = (TPila) malloc(sizeof(TPila));
    N->dato = x;
    N->sig = (*P);
    (*P) = N;
}

void SacaP(TPila * P, TElementoP * x){
    TPila N;
    if (*P){
        N = *P;
        x = (*P)->dato;
        *P = (*P)->sig;
        free(N);
    }
}

int VaciaP(TPila P){
    if (P)
        return 0;
    else
        return 1;
}

void IniciaP(TPila * P){
    *P = NULL;
}

void ConsultaP(TPila P, TElementoP * x){
    if (P)
        *x = P->dato;
}
