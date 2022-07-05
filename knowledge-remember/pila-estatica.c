#define max 50

typedef int TElementoP;

typedef struct {
    TElementoP datos[MAX];
    int tope;
}TPila;


void IniciaP(Tpila * P){
    (*P).tope = -1;
}

void SacaP(TPila * P, TElementoP * x){
    if ((*P).tope != -1){
        *x = (*P).datos[tope];
        (*P).tope --;
    }
}

void PoneP(TPila * P, TElementoP x){
    (*P).tope++;
    (*P).datos[tope] = x;
}


TElementoP ConsultaP(TPila P){
    if (P.tope != -1)
        return P.datos[tope];
    else
        return -9999999;
}

int VaciaP(P){
    if (P.tope == -1)
        return 1;
    else
        return 0;
}
