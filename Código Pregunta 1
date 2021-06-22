// Pregunta 1:

int trigger                                     	= 9;
int echo 	                                      	= 8;  
float 		                                      	t_d_e,d;

  void setup (){
	  Serial.begin		                              (9600);
	  pinMode				                                (trigger, OUTPUT);
    pinMode				                                (echo, INPUT);
  }

  void loop(){
	  digitalWrite 		                              (trigger, LOW);
    delay		                                   		(2);
    digitalWrite 	                              	(trigger, HIGH);
    delay 				                                (10);
    digitalWrite 		                              (trigger, 	LOW);
    
    t_d_e 		                                    = pulseIn 	(echo, HIGH);
    d 	  		                                    = (t_d_e/2)/29.15;
      	Serial.print                              (d);
        Serial.print                              ("cm");
        delay		                                  (1000);
}
