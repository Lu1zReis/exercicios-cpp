#define _ARVAVL_H_

typedef struct _arvavl_ {
    int info;
    int h;
    struct _arvavl_ *esq;
    struct _arvavl_ *dir;
} TNoArvAVL;

TNoArvAVL *criaArvAVL (int info);

#endif
