#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ERRO NAS TRES MAIORES NOTAS E NAO ESTA IMPRIMINDO O NOME

int main(){

    int nSize = 0;
    float maior = 0;
    float nomeApoio[30];
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
        for(int j = 0; j < nSize; j++){
            if(alunos[j].nota>maior){
                maior = alunos[j].nota;
                //strcpy(nomeApoio,alunos[j].nome);
            }
        }

        alunosTresMaioresNotas[x].nota= maior;
       // strcpy(alunosTresMaioresNotas[x].nome, nomeApoio);

    }


    for(int k = 0; k < nSize ; k++){
        media = media + alunos[k].nota;
    }

    media = media/nSize;

    //results
    printf("NOTA MEDIA = %.2f",media);

    for(int m = 0; m < 3; m++){
        printf("\n%s %f",alunosTresMaioresNotas[m].nome,alunosTresMaioresNotas[m].nota);
    }

    return 0;
}
