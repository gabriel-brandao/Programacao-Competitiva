#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char fi[20], c[20], o[20];
    gets(fi);
    gets(c);
    gets(o);

        if(strcmp(fi,"vertebrado")==0){
            if(strcmp(c,"ave")==0){
                if(strcmp(o,"carnivoro")==0){
                    printf("aguia\n");}
                    if(strcmp(o,"onivoro")==0){
                        printf("pomba\n");}
        }
            if (strcmp(c,"mamifero")==0){
                if(strcmp(o,"onivoro")==0){
                    printf("homem\n");}
                    if(strcmp(o,"herbivoro")==0){
                        printf("vaca\n");}
        }
        }else{



        if(strcmp(fi,"invertebrado")==0){
            if(strcmp(c,"inseto")==0){
                if(strcmp(o,"hematofago")==0){
                    printf("pulga\n");}
                    if(strcmp(o,"herbivoro")==0){
                        printf("lagarta\n");}
        }
            if(strcmp(c,"anelideo")==0){
                if(strcmp(o,"hematofago")==0){
                    printf("sanguessuga\n");}
                    if(strcmp(o,"onivoro")==0){
                        printf("minhoca\n");}
        }
        }




}
}
