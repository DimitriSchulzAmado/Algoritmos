#instalar no CMD -->  python -m pip install --upgrade pip install pip
#                     pip3.9 install pyfirmata

from pyfirmata import Arduino, util
import time
                                    #void setup(){
Uno = Arduino('COM5')                  #Serial.begin(9600);
                                    #}
#Enquanto ENERGIA <= 80
while True:                         #void loop(){
                                
    Uno.digital[3].write(1)            #digital.write(3, HIGH);
    print('Energia conectada')         #Serial.println("Led Ligado");
    time.sleep(1)                      #delay(1000);

#Enquanto ENERGIA >= 20
while False:
    
    Uno.digital[3].write(0)            #digital.write(3, LOW);
    print('Energia desconectada')      #Serial.println("Led Desligado");
    time.sleep(1)                      #delay(1000);
                                    #}