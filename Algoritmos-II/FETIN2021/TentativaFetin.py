# Script verificar bateria
import psutil
import webbrowser

battery = psutil.sensors_battery()
plugged = battery.power_plugged
percent = int(battery.percent)
plugado == Falso and porcentagem < 60:
    webbrowser.open_new_tab(link)


pip install psutil #instalar esse item

def convertTime(seconds):
    minutes, seconds = divmod(seconds, 60)
    hours, minutes = divmod(minutes, 60)
    return "%d:%02d:%02d" % (hours, minutes, seconds)


battery = psutil.sensors_battery()

if(battery.percent < 20):
    battery.power_plugged = False

print("Battery percentage : ", battery.percent)
print("Power plugged in : ", battery.power_plugged)
print("Battery left : ", convertTime(battery.secsleft))

#instalar no CMD -->  python -m pip install --upgrade pip install pip
#                     pip3.9 install pyfirmata

from pyfirmata import Arduino, util
import time
                                    #void setup(){
Uno = Arduino('COM5')                  #Serial.begin(9600);
                                    #}
#Enquanto ENERGIA <= 80
while battery.percent >= 80:        #void loop(){
                                
    Uno.digital[3].write(1)            #digital.write(3, HIGH);
    print('Energia conectada')         #Serial.println("Energia conectada");
    time.sleep(1)                      #delay(1000);

#Enquanto ENERGIA >= 20
while battery.percent <= 20:
    
    Uno.digital[3].write(0)            #digital.write(3, LOW);
    print('Energia desconectada')      #Serial.println("Energia desconectada");
    time.sleep(1)                      #delay(1000);
                                    #}
