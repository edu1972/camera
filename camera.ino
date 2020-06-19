// Verificar modo para ligar o funcionamento da camera, quando alimentar o circuito ela já recebe um pulso para iniciar.
// Aguardar um tempo (DELAY) para começar a gravar.

void setup() {
	
	//SAIDA DE SINAL
	
	pinMode(13, OUTPUT); //ligar luz infravermelho
	pinMode(12, OUTPUT); //ligar câmera
	pinMode(11, OUTPUT); //ligar gravador
	
	//ENTRADA DE DADOS
	
	pinMode(10, INPUT); //monitorar luminisidade para o LDR acionar infravermelho
}

// the loop function runs over and over again forever

void loop() {
	digitalWrite(12, HIGH);
	delay(5);  // 1 pulso para ligar a camera 
	digitalWrite(12, LOW);
	delay(5000); // espera para começar a gravar
	digitalWrite(11, HIGH); //começar a gravar
	
	if(10 == LOW){	// depende do valor do LDR
		digitalWrite(13, HIGH); //liga o infravermelho
	}
	
	else{
		digitalWrite(13, LOW); //desliga o infravermelho
			}
}

/*  
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(5000);                       // wait for a second
*/
