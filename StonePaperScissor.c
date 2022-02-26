#include<stdio.h>
void main(){
    char usr_ip1[10],usr_ip2[10], player_name1[10],player_name2[10];
    printf("\nenter player names = ");
    scanf(" %s %s",&player_name1,&player_name2);
    printf("\n**menu**\n1 stone\n2 paper\n3 scissor\n--------------------------\nenter your choice (%s)= ",player_name1);
    scanf(" %s",&usr_ip1);
    printf("\n\n\n\n\n\n\n**menu**\n1 stone\n2 paper\n3 scissor\n--------------------------\nenter your choice (%s)= ",player_name2);
    scanf(" %s",&usr_ip2);
    if(usr_ip1 == "stone"&& usr_ip2 == "paper" || usr_ip1 == "paper"&& usr_ip2 == "scissor" || usr_ip1 == "scissor"&& usr_ip2 == "stone"){
        printf("%s wins!!!\nthanks for playing my game\n--------------------------\n",player_name2);
    }else{
        printf("%s wins!!!\nthanks for playing my game\n--------------------------\n",player_name1);
    }
}