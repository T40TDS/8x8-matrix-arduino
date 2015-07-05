const int colSegment[] = {2, 3, 4, 5, 6};
const int rowSegment[] = {8, 9, 10, 11, 12, 13};


void setup() {

  for (int i = 0; i < 5; i++) {
    pinMode(colSegment[i], INPUT);
  }


  for (int i = 0; i < 7; i++) {
    pinMode(rowSegment[i], INPUT);
  }

}

void loop() {
  int image[7][5]={
     {0,1,0,1,0}, 
     {0,1,0,1,0},
     {0,0,0,0,0},
     {1,1,1,1,1},
     {0,1,0,1,0},
     {0,1,1,1,0}
  };
  
  display(image);
  
  
  
  
  
  
}

 void display(int array[7][5]){

  for (int z = 0; z < 7; z++){
    digitalWrite(rowSegment[z], HIGH);
    
    //cycle keeper
    if (z != 0) {
      digitalWrite(rowSegment[z - 1], LOW);
      }
      else  {
          digitalWrite(rowSegment[6], LOW);
      }
      
     for (int i = 0; i < 5; i++) {
         digitalWrite(colSegment[i], LOW);  
     }
  
      for (int i = 0; i < 5; i++) {
        
        switch(z){
          
  
          case 5:
                switch(i){
                   case 0: digitalWrite(colSegment[i], array[0][0]);
                           break;  
                   case 1: digitalWrite(colSegment[i], array[0][1]);
                           break;
           
                   case 2: digitalWrite(colSegment[i], array[0][2]);
                           break;
           
                   case 3: digitalWrite(colSegment[i], array[0][3]);
                          break;
                          
                   case 4: digitalWrite(colSegment[i], array[0][4]);
                           break;                
                }
                break;
  
          case 4:
                switch(i){
                   case 0: digitalWrite(colSegment[i], array[1][0]);
                           break;  
                   case 1: digitalWrite(colSegment[i], array[1][1]);
                           break;
           
                   case 2: digitalWrite(colSegment[i], array[1][2]);
                           break;
           
                   case 3: digitalWrite(colSegment[i], array[1][3]);
                          break;
                          
                   case 4: digitalWrite(colSegment[i], array[1][4]);
                           break;
                }   
                break;
          case 3:
                switch(i){
                   case 0: digitalWrite(colSegment[i], array[2][0]);
                           break;  
                   case 1: digitalWrite(colSegment[i], array[2][1]);
                           break;
           
                   case 2: digitalWrite(colSegment[i], array[2][2]);
                           break;
           
                   case 3: digitalWrite(colSegment[i], array[2][3]);
                          break;
                          
                   case 4: digitalWrite(colSegment[i], array[2][4]);
                           break;                
                }
                break;
  
          case 2:
                switch(i){
                   case 0: digitalWrite(colSegment[i], array[3][0]);
                           break;  
                   case 1: digitalWrite(colSegment[i], array[3][1]);
                           break;
           
                   case 2: digitalWrite(colSegment[i], array[3][2]);
                           break;
           
                   case 3: digitalWrite(colSegment[i], array[3][3]);
                          break;
                          
                   case 4: digitalWrite(colSegment[i], array[3][4]);
                           break;                  
                }
                break;
  
          case 1:
                switch(i){
                   case 0: digitalWrite(colSegment[i], array[4][0]);
                           break;  
                   case 1: digitalWrite(colSegment[i], array[4][1]);
                           break;
           
                   case 2: digitalWrite(colSegment[i], array[4][2]);
                           break;
           
                   case 3: digitalWrite(colSegment[i], array[4][3]);
                          break;
                          
                   case 4: digitalWrite(colSegment[i], array[4][4]);
                           break;                  
                }
                break;
  
          case 0:
                switch(i){
                   case 0: digitalWrite(colSegment[i], array[5][0]);
                           break;  
                   case 1: digitalWrite(colSegment[i], array[5][1]);
                           break;
           
                   case 2: digitalWrite(colSegment[i], array[5][2]);
                           break;
           
                   case 3: digitalWrite(colSegment[i], array[5][3]);
                          break;
                          
                   case 4: digitalWrite(colSegment[i], array[5][4]);
                           break;      
                }
                break;
           
        }  
     
   }delay(5);
}}
      

