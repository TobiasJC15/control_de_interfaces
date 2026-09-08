*Avance con los motores y movimientos del robot sumo*

#include <stdio.h>

#include "pico/stdlib.h"

#include "pico/cyw43_arch.h"

// Definimos los pines de control del puente H

#define IN1 4

#define IN2 5

#define IN3 6

#define IN4 7


int main() {


    stdio_init_all();

    // iniciamos los IN del puente H como salidas, para poder controlar el motor
    gpio_init(IN1);
    gpio_set_dir(IN1, GPIO_OUT);

    gpio_init(IN2);
    gpio_set_dir(IN2, GPIO_OUT);

    gpio_init(IN3);
    gpio_set_dir(IN3, GPIO_OUT);

    gpio_init(IN4);
    gpio_set_dir(IN4, GPIO_OUT);

    // iniciamos motores 
    while (true) {

        //robot ir para adelante
        gpio_put(IN1, 1);
        gpio_put(IN2, 0);
        gpio_put(IN3, 1);
        gpio_put(IN4, 0);

        sleep_ms();

        //robot ir para atras
        gpio_put(IN1, 0);
        gpio_put(IN2, 1);
        gpio_put(IN3, 0);
        gpio_put(IN4, 1);

        sleep_ms();

        //robot girar para la izquierda
        gpio_put(IN1, 1); 
        gpio_put(IN2, 0);
        gpio_put(IN3, 0);
        gpio_put(IN4, 0);
    
        sleep_ms();

        //robot girar para la derecha
        gpio_put(IN1, 0); 
        gpio_put(IN2, 0);
        gpio_put(IN3, 1);
        gpio_put(IN4, 0);
    
        sleep_ms();

        //robot detenerse
        gpio_put(IN1, 0);
        gpio_put(IN2, 0);
        gpio_put(IN3, 0);
        gpio_put(IN4, 0);
    
    }
}

