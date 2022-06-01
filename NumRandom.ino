
#include <stdint.h>
#include <stdio.h>
 
void setup() {
  
  Serial.begin(9600);
      
}
 
void loop() {
 
char ch;
for(ch='A';ch<='Z';ch=ch+1){
  
  Serial.write(ch);  
}
 
}
