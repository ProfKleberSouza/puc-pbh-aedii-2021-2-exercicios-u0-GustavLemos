#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int nSize = 0;
    float maior = 0;
    char nomeApoio[30];
    float aux = 0;
    float media = 0;

    typedef struct {
        char nome[30];
        float nota;
    }aluno;

    //input nSize
    scanf("%d",&nSize);

    aluno alunos[nSize];
    aluno alunosTresMaioresNotas[3];

    // inputs in array
    for(int i = 0; i < nSize; i++){
       scanf("\n%s %f",&alunos[i].nome,&alunos[i].nota);
    }

    //operations
    for(int x = 0; x < nSize; x++){
        for(int j = x + 1; j < nSize; j++){
            if(alunos[x].nota < alunos[j].nota){
                aux=alunos[j].nota;
                alunos[j].nota=alunos[x].nota;
                alunos[x].nota=aux;
            }
        }
    }
    
    for(int n=0;n<3;n++){
       alunosTresMaioresNotas[n].nota=alunos[n].nota;
       strcpy(alunosTresMaioresNotas[n].nome,alunos[n].nome);
    }


    for(int k = 0; k < nSize ; k++){
        media = media + alunos[k].nota;
    }

    media = media/nSize;

    //results
    printf("NOTA MEDIA = %.1f",media);

    for(int m = 0; m < 3; m++){
        printf("\n%s %.1f",alunosTresMaioresNotas[m].nome,alunosTresMaioresNotas[m].nota);
    }

    return 0;
}
