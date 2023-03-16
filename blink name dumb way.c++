



int led1 = D3; 


void setup() {

  

  pinMode(led1, OUTPUT);
  

}
void light_short(){
    digitalWrite(led1, HIGH);
  
  delay(1000);
  digitalWrite(led1, LOW);
  
  delay(1000);
  
}



void light_long(){
    digitalWrite(led1, HIGH);
  
  delay(3000);
  
   digitalWrite(led1, LOW);
  
  delay(1000);
}


void loop() {
    //My first name is Jack, so 3 seconds stands for "---", and 1 second stands for "-"
    // and 3 seconds break for each letter have finished.
    // so my first name should be like: "- --- --- ---" "- ---" "--- - --- -" "--- - ---"
    //                                         J           A         C             K
    
// start with J
digitalWrite(led1, HIGH);
  
  delay(1000);
  digitalWrite(led1, LOW);
  
  delay(1000);
digitalWrite(led1, HIGH);
  
  delay(3000);
  
   digitalWrite(led1, LOW);
  
  delay(1000);
digitalWrite(led1, HIGH);
  
  delay(3000);
  
   digitalWrite(led1, LOW);
  
digitalWrite(led1, HIGH);
  
  delay(3000);
  
   digitalWrite(led1, LOW);
  
  delay(1000);
  
   // break 3 seconds
  digitalWrite(led1, LOW);
  
  delay(3000);
  
  // next letter A
digitalWrite(led1, HIGH);
  
  delay(1000);
  digitalWrite(led1, LOW);
  
  delay(1000);
digitalWrite(led1, HIGH);
  
  delay(3000);
  
   digitalWrite(led1, LOW);
  
  delay(1000);
  
   // break 3 seconds
  digitalWrite(led1, LOW);
  
  delay(3000);
  
  // next letter C
 
digitalWrite(led1, HIGH);
  
  delay(3000);
  
   digitalWrite(led1, LOW);
  
  delay(1000);
digitalWrite(led1, HIGH);
  
  delay(1000);
  digitalWrite(led1, LOW);
  
  delay(1000);
digitalWrite(led1, HIGH);
  
  delay(3000);
  
   digitalWrite(led1, LOW);
  
  delay(1000);
digitalWrite(led1, HIGH);
  
  delay(1000);
  digitalWrite(led1, LOW);
  
  delay(1000);
  // break 3 seconds
  digitalWrite(led1, LOW);
  
  delay(3000);
  
  //next letter K
digitalWrite(led1, HIGH);
  
  delay(3000);
  
   digitalWrite(led1, LOW);
  
  delay(1000);
digitalWrite(led1, HIGH);
  
  delay(1000);
  digitalWrite(led1, LOW);
  
  delay(1000);
digitalWrite(led1, HIGH);
  
  delay(3000);
  
   digitalWrite(led1, LOW);
  
  delay(1000);
  // break 3 seconds
  digitalWrite(led1, LOW);
  
  delay(3000);
  
  // loop ended
 
  
 
  
  
  
  
}

