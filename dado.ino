#define BOTON 8			//Definimos los pines que vamos a usar
#define LEDUNO 0
#define LEDDOS 1
#define LEDTRES 2
#define LEDCUATRO 3

int numero;		//Variables para guardar los números aleatirios
int numeroDos;

void setup(){
	pinMode(BOTON, INPUT);							//Declaramos los pines dependiendo de su respectivo uso
	for(int i = LEDUNO; i <= LEDCUATRO; i++){
		pinMode(i, OUTPUT);
	}
	apagarLeds();		//Llamamos a la función apagarLeds
}

void loop(){
	numero = random(1, 7);		//Guardamos un número aleatorio en la variable numero
	if(digitalRead(BOTON)){		//Cuando detecte que se presionó el botón:
		numeroDos = numero;		//Guarde el valor de numero en numeroDos
		check(numeroDos);		//Llamamos a la funcion check() con el valor de numeroDos
		delay(500);				//Pausa de 500 milisegundos
	}
	delay(20);
}

void apagarLeds(){					//Funcion para apagar los leds
	digitalWrite(LEDUNO, LOW);
	digitalWrite(LEDDOS, LOW);
	digitalWrite(LEDTRES, LOW);
	digitalWrite(LEDCUATRO, LOW);
}

void check(int num){		//Funcion que verifica un número y enciende los leds para mostrar dicho número
	if(num == 1){
		apagarLeds();
		delay(250);
		digitalWrite(LEDUNO, HIGH);
	}
	else if(num == 2){
		apagarLeds();
		delay(250);
		digitalWrite(LEDCUATRO, HIGH);
	}
	else if(num == 3){
		apagarLeds();
		delay(250);
		digitalWrite(LEDUNO, HIGH);
		digitalWrite(LEDCUATRO, HIGH);
	}
	else if(num == 4){
		apagarLeds();
		delay(250);
		digitalWrite(LEDTRES, HIGH);
		digitalWrite(LEDCUATRO, HIGH);
	}
	else if(num == 5){
		apagarLeds();
		delay(250);
		digitalWrite(LEDUNO, HIGH);
		digitalWrite(LEDTRES, HIGH);
		digitalWrite(LEDCUATRO, HIGH);
	}
	else if(num == 6){
		apagarLeds();
		delay(250);
		digitalWrite(LEDDOS, HIGH);
		digitalWrite(LEDTRES, HIGH);
		digitalWrite(LEDCUATRO, HIGH);
	}
}
