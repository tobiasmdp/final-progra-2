#define MAX 50

TElementoC int;

typedef struct {
    TElementoC datos[MAX];
    int pri, ult;
}TCola;

void IniciaC(TCola * C){ //para inicializar pone en -1
    C->pri=-1;
    C->ult=-1;
}

int VaciaC(TCola C){ //mira si pri es -1, pero como ult tambien deberia funcionar
    if (C.pri == -1 || C.pri == C.ult)
        return 1;
    else
        return 0;
}

void SacaC(TCola * C, TElementoC * x){ //saca del pri
    if (!VaciaC(C)){
        *x = C->datos[C->pri];
        (C->pri) ++;
        if (VaciaC(C))
            IniciaC(*C);
    }
}

void PoneC(TCola * C, TElementoC x){ //pone por el ultimo
    if (C->ult != MAX-1){ //se fija si no esta llena
        (C->ult) ++;
        C->datos[ult] = x;
        if (C->pri = -1) //valida que si inserta, si es el primero, cambiear pri tambien
            (C->pri) ++;
    }
}

TElementoC ConsultaC(TCola C, TElementoC * x){
    if (C.ult != -1){
        *x = C.datos[C.ult];
    }
}
