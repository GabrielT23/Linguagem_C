#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void BubbleSort(int n, int *v)
{
    int i, j, temp;
    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (v[j] > v[j + 1])
            {
                temp = v[j]; // Troca
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

void QuickSort(int n, int *v)
{
    if (n > 1)
    {
        int x = v[0];
        int a = 1;
        int b = n - 1;
        while (1)
        {
            while (a < n && v[a] <= x)
                a++;
            while (v[b] > x)
                b--;
            if (a < b)
            {
                int temp = v[a];
                v[a] = v[b];
                v[b] = temp;
                a++;
                b--;
            }
            else
                break;
        }
        v[0] = v[b];
        v[b] = x;
        QuickSort(b, v);
        QuickSort(n - a, &v[a]);
    }
}

void InsertionSort(int n, int *s)
{
    for (int i = 1; i < n; i++)
    {

        int j = i;

        while (j > 0 && s[j] <= s[j - 1])
        {
            int aux = s[j];
            s[j] = s[j - 1];
            s[j - 1] = aux;
            j -= 1;
        }
    }
}

void peneira(int *vet, int raiz, int fundo)
{
    int pronto, filhoMax, tmp;

    pronto = 0;
    while ((raiz * 2 <= fundo) && (!pronto))
    {
        if (raiz * 2 == fundo)
        {
            filhoMax = raiz * 2;
        }
        else if (vet[raiz * 2] > vet[raiz * 2 + 1])
        {
            filhoMax = raiz * 2;
        }
        else
        {
            filhoMax = raiz * 2 + 1;
        }

        if (vet[raiz] < vet[filhoMax])
        {
            tmp = vet[raiz];
            vet[raiz] = vet[filhoMax];
            vet[filhoMax] = tmp;
            raiz = filhoMax;
        }
        else
        {
            pronto = 1;
        }
    }
}

void HeapSort(int n, int *vet)
{
    int i, tmp;

    for (i = (n / 2); i >= 0; i--)
    {
        peneira(vet, i, n - 1);
    }

    for (i = n - 1; i >= 1; i--)
    {
        tmp = vet[0];
        vet[0] = vet[i];
        vet[i] = tmp;
        peneira(vet, 0, i - 1);
    }
}

void mergeSort_intercala(int *v, int esq, int meio, int dir)
{
    int i, j, k;
    int a_tam = meio - esq + 1;
    int b_tam = dir - meio;
    int *a = (int *)malloc(sizeof(int) * a_tam);
    int *b = (int *)malloc(sizeof(int) * b_tam);

    for (i = 0; i < a_tam; i++)
        a[i] = v[i + esq];
    for (i = 0; i < b_tam; i++)
        b[i] = v[i + meio + 1];

    for (i = 0, j = 0, k = esq; k <= dir; k++)
    {
        if (i == a_tam)
            v[k] = b[j++];
        else if (j == b_tam)
            v[k] = a[i++];
        else if (a[i] < b[j])
            v[k] = a[i++];
        else
            v[k] = b[j++];
    }
    free(a);
    free(b);
}

void mergeSort_ordena(int *v, int esq, int dir)
{
    if (esq == dir)
        return;
    int meio = (esq + dir) / 2;
    mergeSort_ordena(v, esq, meio);
    mergeSort_ordena(v, meio + 1, dir);
    mergeSort_intercala(v, esq, meio, dir);
    return;
}

void MergeSort(int n, int *v)
{
    mergeSort_ordena(v, 0, n - 1);
}
void ControlaExecucao(int i, int *vet, int tamVet){
    if (i == 0){
        BubbleSort(tamVet, vet);
    }
    else if (i == 1){
        InsertionSort(tamVet, vet);
    }
    else if (i == 2){
        QuickSort(tamVet, vet);
    }
    else if (i == 3){
        MergeSort(tamVet, vet);
    }
    else if (i == 4){
        HeapSort(tamVet, vet);
    }
}

int main()
{
    srand(time(NULL));
    char nomes[5][20] = {"BubbleSort", "InsertionSort", "QuickSort", "MergeSort", "HeapSort"};
    int i, j, k;
    const int Tmax = 6, Tmin = 2;
    clock_t temp;
    float tempo;
    for(i = 0; i<5; i++){
        for(j = Tmin; j<=Tmax; j++){
            int TamVetor = pow(10, j);
            int *vet = (int *)malloc(TamVetor * sizeof(int));
            for (k = 0; k < TamVetor; k++){
                vet[k] = rand();
            }
            temp = clock();
            ControlaExecucao(i, vet, TamVetor);
            temp = clock()- temp;
            tempo = (float)(temp*1000/CLOCKS_PER_SEC);
            printf("\n %s: tempo de execucao com tamanho %i: %f", nomes[i], TamVetor, tempo);
            free(vet);
        }
    }
    return 0;
}
