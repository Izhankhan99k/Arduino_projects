//this is 4 led counter 
   int j=0;
    int k=0;
    int l=0;
void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(9,OUTPUT);
}
void loop() {    
 for(int i=0;i<=16;i++){
     j=i/2;
     if(i%2==1){digitalWrite(9,HIGH);}
     else{digitalWrite(9,LOW);}

     k=j/2;
     if(j%2==1){digitalWrite(11,HIGH);}
     else{digitalWrite(11,LOW);}

     l=k/2;
     if(k%2==1){digitalWrite(12,HIGH);}
     else{digitalWrite(12,LOW);}

     
     if(l%2==1){digitalWrite(13,HIGH);}
     else{digitalWrite(13,LOW);}
     delay(1000);
     }
}
