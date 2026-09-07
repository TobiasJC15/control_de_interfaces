Carpeta designada para la documentación de robot -waelle
Información de los elementos del robot=

Puente H

Un puente H es un circuito electrónico que permite controlar el funcionamiento de un motor de corriente continua (DC). Su principal función es permitir que el motor gire en un sentido o en el sentido contrario. Además, dependiendo del módulo utilizado, también puede permitir controlar su velocidad.

Recibe este nombre porque la disposición de sus componentes forma una estructura similar a la letra H. En los extremos se encuentran los elementos de conmutación, generalmente transistores, que permiten controlar el paso de la corriente eléctrica. En el centro se encuentra conectado el motor.

¿Cómo funciona?

El funcionamiento del puente H se basa en controlar qué transistores se activan y cuáles permanecen desactivados. Al cambiar la combinación de transistores que están funcionando, se modifica el sentido en el que circula la corriente eléctrica a través del motor.

Cuando la corriente circula en una dirección, el motor gira hacia un lado; cuando circula en la dirección opuesta, el motor cambia su sentido de giro.

El puente H puede ser controlado mediante un dispositivo electrónico, como una Raspberry Pi Pico, que envía señales eléctricas a sus entradas. Estas señales indican al puente H qué transistores deben activarse y permiten controlar el movimiento del motor.

Existen diferentes módulos comerciales que utilizan este principio, como el L298N y el L293D.

Conexión del puente H con una Raspberry Pi Pico

Para controlar un motor DC mediante una Raspberry Pi Pico y un módulo puente H, se utilizan algunos de los pines GPIO de la placa para enviar las señales de control. Sin embargo, el motor no debe alimentarse directamente desde los GPIO de la Pico, sino mediante una fuente de alimentación externa adecuada para el motor.

Materiales necesarios
Raspberry Pi Pico.
Módulo puente H, por ejemplo, L298N o L293D.
Motor de corriente continua (DC).
Fuente de alimentación externa, como una batería o un adaptador.
Cables de conexión (jumpers).
Conexión utilizando un módulo L298N
Alimentación del puente H

Primero se debe conectar la fuente de alimentación externa al módulo L298N:

El polo positivo de la fuente se conecta al terminal de alimentación del puente H correspondiente al voltaje utilizado.
El polo negativo se conecta al terminal GND.
También es necesario conectar el GND del puente H con un pin GND de la Raspberry Pi Pico. Esto permite que ambos dispositivos tengan una referencia eléctrica común.
Conexión de control

La Raspberry Pi Pico puede enviar las señales necesarias para controlar el puente H mediante sus pines GPIO. Por ejemplo:

IN1 → GPIO 14
IN2 → GPIO 15
ENA → GPIO 13

Los pines IN1 e IN2 se utilizan principalmente para determinar el sentido de giro del motor. El pin ENA permite habilitar el funcionamiento del motor y, si se utiliza una señal PWM, también permite controlar su velocidad.

Conexión del motor

Los dos terminales del motor DC se conectan a las salidas OUT1 y OUT2 del módulo L298N.

Al modificar las señales enviadas a IN1 e IN2, el puente H cambia la dirección de la corriente que circula por el motor, haciendo que este gire en un sentido u otro.

Pinout

El término pinout se utiliza para describir la distribución y función de los pines de un dispositivo o conector.

Cada pin puede tener una función diferente, como proporcionar alimentación, conectarse a tierra o transmitir señales eléctricas. Conocer el pinout de un componente es fundamental para realizar correctamente las conexiones y evitar errores que puedan dañar el circuito.

En la Raspberry Pi Pico, el pinout permite identificar los pines GPIO, los pines de alimentación y los pines GND. En el caso del puente H, permite identificar las entradas de control, las conexiones del motor y los terminales de alimentación.

Raspberry Pi Pico

La Raspberry Pi Pico es una placa de desarrollo basada en un microcontrolador. Es pequeña, económica y versátil, y puede utilizarse para controlar distintos componentes electrónicos, como sensores, luces, motores y otros dispositivos.

La primera versión de la Raspberry Pi Pico utiliza el microcontrolador RP2040, mientras que la generación más reciente, la Raspberry Pi Pico 2, utiliza el RP2350.

¿Cómo funciona?

A diferencia de una Raspberry Pi tradicional, la Raspberry Pi Pico no es una computadora de escritorio. No está diseñada para ejecutar un sistema operativo completo, sino para ejecutar programas que controlan diferentes componentes electrónicos. En este sentido, su funcionamiento es similar al de una placa Arduino.

La Raspberry Pi Pico original cuenta con un procesador de doble núcleo basado en ARM Cortex-M0+, integrado en el microcontrolador RP2040.

Programación

La Raspberry Pi Pico puede programarse utilizando diferentes lenguajes, principalmente C/C++ y MicroPython. El programa se carga en la placa mediante una conexión USB y, una vez cargado, la Pico ejecuta las instrucciones programadas.

Por ejemplo, se puede programar la Pico para enviar señales a un puente H y, de esta manera, controlar el sentido de giro y la velocidad de un motor.

Alimentación

La Raspberry Pi Pico puede recibir alimentación mediante el puerto USB o mediante una fuente externa conectada a los pines de alimentación correspondientes.

También puede utilizarse un portapilas de cuatro pilas AAA NiMH recargables. Cada pila proporciona aproximadamente 1,2 V, por lo que las cuatro pilas entregan alrededor de 4,8 V en condiciones nominales.

La alimentación externa debe conectarse utilizando los pines adecuados de la Raspberry Pi Pico y respetando los límites de tensión especificados para la placa. Nunca se debe conectar una fuente de alimentación directamente a un pin GPIO, ya que estos pines están destinados al manejo de señales y podrían dañarse si reciben una tensión incorrecta.
