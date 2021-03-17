#include<stdio.h>

int main(){

    char exclamation[20];
    char adverb[20];
    char noun[20];
    char adjective[20];

    printf("Enter a feeling:\n");
    scanf("%s", exclamation);
    printf("Enter a phrase:\n");
    scanf("%s", adverb);
    printf("Enter a member:\n");
    scanf("%s", noun);
    printf("Enter a person:\n");
    scanf("%s", adjective);

    printf("%s ! \nhe said %s as he jumped into his convertible %s \nand drove off with his %s.", exclamation,adverb,noun,adjective);

    return 0;
}