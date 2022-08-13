# Servo

[![servo-bb.png](https://i.postimg.cc/wMdDYLZY/servo-bb.png)](https://postimg.cc/VrDJjrzK)

Control de la posición de un servomotor sin usar la libreria servo.

## Hardware y software necesarios
- Placa de desarrollo Arduino 
- Display de 7 segmentos catodo común
- Servomotor
- [Arduino IDE](https://www.arduino.cc/en/software) o [Arduino CLI](https://arduino.github.io/arduino-cli/0.23/installation/)

## Funcionamiento
### Variables
- ```f```: Tiempo de espera entre cambios de posición del servomotor.
- ```c```: Posición del servomotor en grados.
- ```g```: Variable para el funcionamiento de bucle.

### Fuoncionamiento
```c``` cambia entre 0 y 180 grados. Dentro de la función **servo()**, ```f``` varia entre 450 y 2450 para que el servomotor se mueva a la posición deseada:

- Manteniendo la salida del servomotor en alto ```f``` microsegundos.
- Manteniendo la salida del servomotor en bajo 20000 - ```f``` microsegundos.

[![servo-esquem-tico.png](https://i.postimg.cc/Ss9cPDZG/servo-esquem-tico.png)](https://postimg.cc/r08d0C2d)
