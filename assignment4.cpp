//
// Created by Admin on 12/11/2022.
//
#include "stdio.h"
#include "string.h"


char arr[0];

void countingChar();
int findingcharWH();
int findingcharN();
int main(){

    countingChar();
    int winhtutcount = findingcharWH();
    printf("\nwinhtut in the passage:%d",winhtutcount);
    int NationalCyberCityCount = findingcharN();
    printf("\nNationalCyberCity in the passage:%d\n",NationalCyberCityCount);

    return 0;
}

void countingChar() {
    FILE *fptr;

    fptr = fopen("words.txt", "r");
    char c = fgetc(fptr);
    int i = 0;
    int count = 0;
    while (!feof(fptr)) {

        if (c != 32) {
            arr[i] = c;
            i++;
            count++;
        }

        c = fgetc(fptr);

    }

}

int findingcharWH(){
    int nameCount2=0;
    char winhtut[7];
    strcpy(winhtut,"winhtut");
    for(int k=0;k<4133;k++){

        if(arr[k]==winhtut[0]){
            int nameCount = 0;
            int y=k;
            for (int i = 0; i < 7; i++) {

                if(arr[y]==winhtut[i]){
                    y++;
                    nameCount++;
                }
            }
            if(nameCount==7){

                nameCount=0;
                nameCount2++;
            }
        }
    }
    return nameCount2;

}

int findingcharN(){
    int nameCount2=0;
    char NationalCyberCity[17];
    strcpy(NationalCyberCity,"NationalCyberCity");
    for(int k=0;k<4133;k++){

        if(arr[k]==NationalCyberCity[0]){
            int nameCount = 0;
            int y=k;
            for (int i = 0; i < 7; i++) {

                if(arr[y]==NationalCyberCity[i]){
                    y++;
                    nameCount++;
                }
            }
            if(nameCount==7){

                nameCount=0;
                nameCount2++;
            }
        }
    }
    return nameCount2;
}