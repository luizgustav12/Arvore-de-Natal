int amarelo1 = 0;
int amarelo2 = 1;
int amarelo3 = 2;
int verde1 = 3;
int verde2 = 4;
int verde3 = 5;
int verde4 = 6;
int vermelho1 = 7;
int vermelho2 = 8;
int vermelho3 = 9;
int vermelho4 = 10;
int vermelho5 = 11;

int counter = 0;

void setup()
{
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(amarelo1, OUTPUT);
  pinMode(amarelo2, OUTPUT);
  pinMode(amarelo3, OUTPUT);
  pinMode(verde1, OUTPUT);
  pinMode(verde2, OUTPUT);
  pinMode(verde3, OUTPUT);
  pinMode(verde4, OUTPUT);
  pinMode(vermelho1, OUTPUT);
  pinMode(vermelho2, OUTPUT);
  pinMode(vermelho3, OUTPUT);
  pinMode(vermelho4, OUTPUT);
  pinMode(vermelho5, OUTPUT);
}
 
void desceSeq3(){
  
  digitalWrite(vermelho5, HIGH);
  delay(200);
  digitalWrite(amarelo3, HIGH);
  digitalWrite(verde4, HIGH);
  delay(200);
  digitalWrite(verde3, HIGH);
  digitalWrite(vermelho4, HIGH);
  digitalWrite(vermelho5, LOW);
  delay(200);
  digitalWrite(vermelho3, HIGH);
  digitalWrite(amarelo2, HIGH);
  digitalWrite(amarelo3, LOW);
  digitalWrite(verde4, LOW);
  delay(200);
  digitalWrite(verde2, HIGH);
  digitalWrite(vermelho2, HIGH);
  digitalWrite(vermelho1, HIGH);
  digitalWrite(verde3, LOW);
  digitalWrite(vermelho4, LOW);
  delay(200);
  digitalWrite(amarelo1, HIGH);
  digitalWrite(verde1, HIGH);
  digitalWrite(vermelho3, LOW);
  digitalWrite(amarelo2, LOW);
  delay(200);
  digitalWrite(verde2, LOW);
  digitalWrite(vermelho2, LOW);
  digitalWrite(vermelho1, LOW);
  delay(200);
  digitalWrite(amarelo1, LOW);
  digitalWrite(verde1, LOW);
  delay(100);
  
}

void loop()
{
  //Sequência 1
  analogWrite(A0, 255);//vermelho
  analogWrite(A1, 0);
  analogWrite(A2, 0);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(0, HIGH);
  delay(2000); 
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  digitalWrite(0, LOW);
  analogWrite(A0, 255);//amarelo
  analogWrite(A1, 255);
  analogWrite(A2, 0);
  digitalWrite(amarelo1, HIGH);
  digitalWrite(amarelo2, HIGH);
  digitalWrite(amarelo3, HIGH);
  delay(2000);
  digitalWrite(amarelo1, LOW);
  digitalWrite(amarelo2, LOW);
  digitalWrite(amarelo3, LOW);
  analogWrite(A0, 0);//verde
  analogWrite(A1, 153);
  analogWrite(A2, 0);
  digitalWrite(verde1, HIGH);
  digitalWrite(verde2, HIGH);
  digitalWrite(verde3, HIGH);
  digitalWrite(verde4, HIGH);
  delay(2000); 
  digitalWrite(verde1, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(verde3, LOW);
  digitalWrite(verde4, LOW);
  analogWrite(A0, 0);
  analogWrite(A1, 204);
  analogWrite(A2, 204);//ciano
  digitalWrite(vermelho1, HIGH);
  digitalWrite(vermelho2, HIGH);
  digitalWrite(vermelho3, HIGH);
  digitalWrite(vermelho4, HIGH);
  digitalWrite(vermelho5, HIGH);
  digitalWrite(amarelo1, HIGH);
  digitalWrite(amarelo2, HIGH);
  digitalWrite(amarelo3, HIGH);
  delay(2000);
  digitalWrite(vermelho1, LOW);
  digitalWrite(vermelho2, LOW);
  digitalWrite(vermelho3, LOW);
  digitalWrite(vermelho4, LOW);
  digitalWrite(vermelho5, LOW);
  digitalWrite(amarelo1, LOW);
  digitalWrite(amarelo2, LOW);
  digitalWrite(amarelo3, LOW);
  analogWrite(A0, 102);
  analogWrite(A1, 0);
  analogWrite(A2, 204);//azul escuro
  digitalWrite(verde1, HIGH);
  digitalWrite(verde2, HIGH);
  digitalWrite(verde3, HIGH);
  digitalWrite(verde4, HIGH);
  digitalWrite(amarelo1, HIGH);
  digitalWrite(amarelo2, HIGH);
  digitalWrite(amarelo3, HIGH);
  delay(2000);
  digitalWrite(verde1, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(verde3, LOW);
  digitalWrite(verde4, LOW);
  digitalWrite(amarelo1, LOW);
  digitalWrite(amarelo2, LOW);
  digitalWrite(amarelo3, LOW);
  analogWrite(A0, 204);
  analogWrite(A1, 51);
  analogWrite(A2, 204);//magenta
  digitalWrite(vermelho1, HIGH);
  digitalWrite(vermelho2, HIGH);
  digitalWrite(vermelho3, HIGH);
  digitalWrite(vermelho4, HIGH);
  digitalWrite(vermelho5, HIGH);
  digitalWrite(verde1, HIGH);
  digitalWrite(verde2, HIGH);
  digitalWrite(verde3, HIGH);
  digitalWrite(verde4, HIGH);
  delay(2000);
  digitalWrite(vermelho1, LOW);
  digitalWrite(vermelho2, LOW);
  digitalWrite(vermelho3, LOW);
  digitalWrite(vermelho4, LOW);
  digitalWrite(vermelho5, LOW);
  digitalWrite(verde1, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(verde3, LOW);
  digitalWrite(verde4, LOW);
  analogWrite(A0, 0);
  analogWrite(A1, 0);
  analogWrite(A2, 0);
  delay(2000);
  
  //Sequência 2
  digitalWrite(verde1,HIGH);
  delay(500);
  digitalWrite(amarelo1, HIGH);
  delay(500);
  digitalWrite(verde2, HIGH);
  delay(500);
  digitalWrite(vermelho2, HIGH);
  delay(500);
  digitalWrite(vermelho1, HIGH);
  delay(500);
  digitalWrite(amarelo2, HIGH);
  delay(500);
  digitalWrite(vermelho3, HIGH);
  delay(500);
  digitalWrite(verde3, HIGH);
  delay(500);
  digitalWrite(vermelho4, HIGH);
  delay(500);
  digitalWrite(verde4, HIGH);
  delay(500);
  digitalWrite(amarelo3, HIGH);
  delay(500);
  digitalWrite(vermelho5, HIGH);
  delay(500);
  
  for(counter=0;counter<=8;counter++){
  	analogWrite(A0, 255);//Vermelho
    analogWrite(A1, 0);
    analogWrite(A2, 0);
  	delay(100);
    analogWrite(A0, 255);
  	analogWrite(A1, 255);//amarelo
  	analogWrite(A2, 0);
  	delay(100);
  	analogWrite(A0, 51);//verde
    analogWrite(A1, 255);
  	analogWrite(A2, 51);
  	delay(100);
  	analogWrite(A0, 102);//ciano
  	analogWrite(A1, 204);
  	analogWrite(A2, 204);
  	delay(100);
  	analogWrite(A0, 51);//azul claro
    analogWrite(A1, 204);
  	analogWrite(A2, 255);
  	delay(100);
  	analogWrite(A0, 102);//azul escuro
  	analogWrite(A1, 102);
  	analogWrite(A2, 204);
  	delay(100);
  	analogWrite(A0, 204);//magenta
    analogWrite(A1, 102);
    analogWrite(A2, 204);
  	delay(100);
  }
  
  analogWrite(A0, 0);
  analogWrite(A1, 0);
  analogWrite(A2, 0);
  digitalWrite(amarelo1, LOW);
  digitalWrite(amarelo2, LOW);
  digitalWrite(amarelo3, LOW);
  digitalWrite(verde1, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(verde3, LOW);
  digitalWrite(verde4, LOW);
  digitalWrite(vermelho1, LOW);
  digitalWrite(vermelho2, LOW);
  digitalWrite(vermelho3, LOW);
  digitalWrite(vermelho4, LOW);
  digitalWrite(vermelho5, LOW);
  delay(2000);
  
  
 //Sequência 3
  for(counter = 0;counter<=3;counter++){
  analogWrite(A0, 51);//verde
  analogWrite(A1, 255);
  analogWrite(A2, 51);
  
  desceSeq3();
  
  analogWrite(A0, 255);
  analogWrite(A1, 255);//amarelo
  analogWrite(A2, 0);
  
  desceSeq3();
    
  analogWrite(A0, 102);//ciano
  analogWrite(A1, 204);
  analogWrite(A2, 204);  
    
  desceSeq3();
  
  analogWrite(A0, 102);//azul escuro
  analogWrite(A1, 102);
  analogWrite(A2, 204);
    
  desceSeq3();
    
  analogWrite(A0, 204);//azul escuro
  analogWrite(A1, 102);
  analogWrite(A2, 204);  
    
  desceSeq3();  
    
  analogWrite(A0, 51);//azul claro
  analogWrite(A1, 204);
  analogWrite(A2, 255);  
    
  desceSeq3();
  
  analogWrite(A0, 255);//vermelho
  analogWrite(A1, 0);
  analogWrite(A2, 0);
  
  desceSeq3();
  }
  
  analogWrite(A0, 0);
  analogWrite(A1, 0);
  analogWrite(A2, 0);
  digitalWrite(amarelo1, LOW);
  digitalWrite(amarelo2, LOW);
  digitalWrite(amarelo3, LOW);
  digitalWrite(verde1, LOW);
  digitalWrite(verde2, LOW);
  digitalWrite(verde3, LOW);
  digitalWrite(verde4, LOW);
  digitalWrite(vermelho1, LOW);
  digitalWrite(vermelho2, LOW);
  digitalWrite(vermelho3, LOW);
  digitalWrite(vermelho4, LOW);
  digitalWrite(vermelho5, LOW);
  delay(2000);
}