Carpeta designada para la documentación de robot -waelle
Información de los elementos del robot=
Puente H
Un puente H sirve para controlar el movimiento de motores y cambiar la dirección de la energía eléctrica de forma automática.
¿Como funciona?
    La estructura tiene forma de H. En las lineas verticales, se encuentran los elementos de conmutación (los dispositivos que permiten abrir, cerrar o desviar el flujo de corriente eléctrica), mientras que en la línea del centro, se encuenta el motor.
    Este funciona mediante transistores, que cuando a uno le llega electricidad desde un cerebro electrónico (como la raspberry), el botón se presiona solo (con presionar el botón nos referimos a que cambian las polaridades)
Para conectar un puente H (como el módulo comercial L298N o L293D) a una Raspberry Pi Pico y encender un motor de corriente continua (DC), debes usar pines GPIO para controlar la dirección y una fuente externa para alimentar el motor.
Materiales necesarios
    Raspberry Pi Pico.
    Módulo puente H (ej. L298N o L293D).
    Motor DC (de 5V a 12V según tu fuente).
    Fuente de alimentación externa (batería o adaptador) para el motor.
    Cables de conexión (jumpers). 
Pasos de conexión (Ejemplo con módulo L298N)
    Alimentación del Puente H:
    Conecta el polo positivo de tu fuente externa al pin 12V (o VCC) del puente H.
Conecta el polo negativo (GND) de la fuente externa al pin GND del puente H.
    Muy importante: Une el pin GND del puente H con un pin GND de la Raspberry Pi Pico para compartir la tierra (referencia común).
    Control desde la Pico:
    Conecta el pin IN1 del puente H al GPIO 14 de la Pico.
    Conecta el pin IN2 del puente H al GPIO 15 de la Pico.
    Conecta el pin ENA (habilitador de velocidad) del puente H al GPIO 13 de la Pico (si deseas control PWM), o colócale un jumper directo a 5V si solo quieres encenderlo al máximo.
    Conexión del Motor:
    Conecta los dos terminales del motor DC a las salidas OUT1 y OUT2 del puente H.

Pinout
El término "pinout" (o diagrama de pines) se utiliza en electrónica para describir cómo está cableado un • cable eléctrico o la función de cada cable (pin) en un conector.
Un • conector eléctrico generalmente consta de varios contactos o pines que se utilizan para transmitir energía o señales eléctricas. Debido a la gran variedad de aplicaciones y fabricantes, existe una amplia selección de E conectores eléctricos con diferentes tipos y número de contactos o pines. La configuración de pines de un conector identifica cada pin individual, lo cual es fundamental para la creación de cables y adaptadores. La correcta identificación de los pines y los cables garantiza la transmisión fiable de señales y energía a través de cables y conectores.

Raspberry pi pico 
La Raspberry Pi Pico es una placa de desarrollo de microcontroladores pequeña, rápida y versátil construida con el chip RP2040 (o RP2350 en la generación Pico 2) diseñado por Raspberry Pi. 
Qué es y cómo funciona
    No es una mini PC: A diferencia de una Raspberry Pi tradicional, la Pico no ejecuta un sistema operativo completo ni maneja escritorios o pantallas de forma nativa; funciona de manera similar a un Arduino.
    Procesador: Cuenta con un chip con doble núcleo ARM Cortex (M0+ o superior según la versión).
    Programación: Se programa principalmente en C/C++ o MicroPython/CircuitPython transfiriendo archivos directamente por USB. 
Puedes alimentar una Raspberry Pi Pico conectando un portapilas de 4 pilas UM-4 (AAA) directamente al pin desconocido (?) y a un pin GND (Tierra, como el Pin 38), siempre y cuando utilices pilas recargables NiMH de 1.2V (total 4.8V). 
