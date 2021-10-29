#include<avr/io.h>
#include "seven.h"


int arr[8];
void Setpins(int nr, int mode){
if(mode== HIGH){
if(nr == 13){
PORTB|=(1<<PB5);
}
else if(nr==12) {
    PORTB|=(1<<PB4);
}
else if(nr==11) {
    PORTB|=(1<<PB3);
}
else if(nr==10) {
    PORTB|=(1<<PB2);
}
else if(nr==9) {
    PORTB|=(1<<PB1);
}
else if(nr==8) {
    PORTB|=(1<<PB0);
}
else if(nr==7) {
    PORTD|= (1<<PORTD7);
}
else if(nr==6) {
    PORTD|= (1<<PORTD6);
}
else if(nr==5) {
    PORTD|= (1<<PORTD5);
}
else if(nr==4) {
    PORTD|= (1<<PORTD4);
}
else if(nr==3) {
    PORTD|= (1<<PORTD3);
}
else if(nr==2) {
    PORTD|= (1<<PORTD2);
}
else if(nr==1) {
    PORTD|= (1<<PORTD1);
}
else if(nr==0) {
    PORTD|= (1<<PORTD0);
}
}
else if(mode== LOW){
if(nr == 13){
PORTB&=~(1<<PB5);
}
else if(nr==12) {
    PORTB&=~(1<<PB4);
}
else if(nr==11) {
    PORTB&=~(1<<PB3);
}
else if(nr==10) {
    PORTB&=~(1<<PB2);
}
else if(nr==9) {
    PORTB&=~(1<<PB1);
}
else if(nr==8) {
    PORTB&=~(1<<PB0);
}
else if(nr==7) {
    PORTD&=~ (1<<PORTD7);
}
else if(nr==6) {
    PORTD&=~ (1<<PORTD6);
}
else if(nr==5) {
    PORTD&=~ (1<<PORTD5);
}
else if(nr==4) {
    PORTD&=~ (1<<PORTD4);
}
else if(nr==3) {
    PORTD&=~ (1<<PORTD3);
}
else if(nr==2) {
    PORTD&=~ (1<<PORTD2);
}
else if(nr==1) {
    PORTD&=~ (1<<PORTD1);
}
else if(nr==0) {
    PORTD&=~ (1<<PORTD0);
}
}
}
void setSegmentPins(int *pins){
for(int i=0;i<8; i++){
arr[i]=pins[i];
Setpins(arr[i],HIGH);

}
}

void setDisplayNumber(int nr){
switch (nr)
{
case 0:
case 10:
Setpins(arr[0],HIGH);
Setpins(arr[5],LOW);
Setpins(arr[1],HIGH);
Setpins(arr[2],HIGH);
Setpins(arr[3],HIGH);
Setpins(arr[4],HIGH);
Setpins(arr[6],HIGH);
Setpins(arr[7],HIGH);
    break;
case 1:
case 11:
Setpins(arr[0],LOW);
Setpins(arr[1],HIGH);
Setpins(arr[2],HIGH);
Setpins(arr[3],LOW);
Setpins(arr[4],LOW);
Setpins(arr[5],LOW);
Setpins(arr[6],LOW);
Setpins(arr[7],LOW);
    break;
case 2:
case 12:
Setpins(arr[0],HIGH);
Setpins(arr[1],HIGH);
Setpins(arr[2],LOW);
Setpins(arr[3],HIGH);
Setpins(arr[4],HIGH);
Setpins(arr[5],HIGH);
Setpins(arr[6],LOW);
Setpins(arr[7],HIGH);
    break;
case 3:
case 13:
Setpins(arr[6],LOW);
Setpins(arr[4],LOW);
Setpins(arr[2],HIGH);
Setpins(arr[1],HIGH);
Setpins(arr[0],HIGH);
Setpins(arr[3],HIGH);
Setpins(arr[5],HIGH);
Setpins(arr[7],HIGH);
    break;
case 4:
case 14:
Setpins(arr[3],LOW);
Setpins(arr[4],LOW);
Setpins(arr[0],LOW);
Setpins(arr[6],HIGH);
Setpins(arr[2],HIGH);
Setpins(arr[1],HIGH);
Setpins(arr[5],HIGH);
Setpins(arr[7],HIGH);
    break;
case 5:
case 15:
Setpins(arr[0],HIGH);
Setpins(arr[1],LOW);
Setpins(arr[2],HIGH);
Setpins(arr[3],HIGH);
Setpins(arr[4],LOW);
Setpins(arr[5],HIGH);
Setpins(arr[6],HIGH);
Setpins(arr[7],HIGH);
    break;
case 6:
case 16:
Setpins(arr[1],LOW);
Setpins(arr[0],HIGH);
Setpins(arr[4],HIGH);
Setpins(arr[2],HIGH);
Setpins(arr[6],HIGH);
Setpins(arr[3],HIGH);
Setpins(arr[5],HIGH);
Setpins(arr[7],HIGH);
    break;
case 7:
case 17:
Setpins(arr[1],HIGH);
Setpins(arr[0],HIGH);
Setpins(arr[2],HIGH);
Setpins(arr[3],LOW);
Setpins(arr[4],LOW);
Setpins(arr[5],LOW);
Setpins(arr[6],LOW);
Setpins(arr[7],LOW);
    break;
case 8:
case 18:
Setpins(arr[1],HIGH);
Setpins(arr[0],HIGH);
Setpins(arr[2],HIGH);
Setpins(arr[3],HIGH);
Setpins(arr[4],HIGH);
Setpins(arr[5],HIGH);
Setpins(arr[6],HIGH);
Setpins(arr[7],HIGH);
    break;
case 9:
case 19:
Setpins(arr[4],LOW);
Setpins(arr[1],HIGH);
Setpins(arr[0],HIGH);
Setpins(arr[2],HIGH);
Setpins(arr[3],HIGH);
Setpins(arr[5],HIGH);
Setpins(arr[6],HIGH);
Setpins(arr[7],HIGH);
    break;
default:
Setpins(arr[4],LOW);
Setpins(arr[1],LOW);
Setpins(arr[0],LOW);
Setpins(arr[2],LOW);
Setpins(arr[3],LOW);
Setpins(arr[5],LOW);
Setpins(arr[6],LOW);
Setpins(arr[7],LOW);
    break;
}

}
