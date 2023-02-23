//Ramirez Espejel Aldo 2296
#include <stdio.h>

int main() {
  int puntos = 0;
    char respuesta;
  
    printf("Cuestionario para saber si eres SIMP\nResponde las preguntas para saber si realmente podrías tener novi@\n"); 

    // Pregunta 1
    printf("1. ¿Valoras tu tiempo y el tiempo de los demás?\n");
    printf("a) Siempre\nb) No me importa\nc) A veces\n");
    scanf(" %c", &respuesta);
    if (respuesta == 'a') {
        puntos += 10;
    }

    // Pregunta 2
    printf("2. ¿Disfrutas de hacer actividades que puedas hacer tú sol@ y no en compañía de alguien más?\n");
    printf("a) No, prefiero estar siempre acompañado\nb) Si, lo disfruto mucho\n");
    scanf(" %c", &respuesta);
    if (respuesta == 'b') {
        puntos += 10;
    }

    // Pregunta 3
    printf("3. ¿Te afectan mucho las cosas malas que te puedan decir algunas personas?\n");
    printf("a) No me importa\nb) Constantemente\nc) Algunas veces\n");
    scanf(" %c", &respuesta);
    if (respuesta == 'a') {
        puntos += 10;
    }

    // Pregunta 4
    printf("4. ¿Piensas en el o la chica que te gusta mas de 5 veces durante el dia??\n");
    printf("a) Casi siempre\nb) Algunas veces\nc) Nah\n");
    scanf(" %c", &respuesta);
    if (respuesta == 'c') {
        puntos += 10;
    }

    // Pregunta 5
    printf("5. ¿En tu circulo social solo te hablan cuando necesitan algo de ti?\n");
    printf("a) Casi siempre\nb) Aveces\nc) No necesariamente@\n");
    scanf(" %c", &respuesta);
    if (respuesta == 'c') {
        puntos += 10;
    }

    // Pregunta 6
    printf("6. ¿Eres feliz con lo que tienes al momento?\n");
    printf("a) Si\nb) No del todo\nc) Para nada \n");
    scanf(" %c", &respuesta);
    if (respuesta == 'a') {
        puntos += 10;
    }

    // Pregunta 7
    printf("7. ¿Stalkeas más de 2 veces al día el perfil de el o la chica que te gusta?\n");
    printf("a) Si\nb) No, tengo mejores cosas que hacer\nc) Siempre pierdo la cuenta\n");
    scanf(" %c", &respuesta);
    if (respuesta == 'b') {
        puntos += 10;
    }

    // Pregunta 8
    printf("8. ¿Dejarías algún pasatiempo por estar con el o la chica que te gusta?\n");
    printf("a) Completamente\nb) No, prefiero hacer lo que me gusta\nc) Lo podría considerar\n");
    scanf(" %c", &respuesta);
    if (respuesta == 'b') {
        puntos += 10;
    }

    // Pregunta 9
    printf("9. ¿Sueles aceptar cosas aunque no sean mucho de tu agrado?\n");
    printf("a) No sé como decir que no\nb) Absolutamente no\nc) Casi siempre\n");
    scanf(" %c", &respuesta);
    if (respuesta == 'b') {
        puntos += 10;
    }

    // Pregunta 10
    printf("10. ¿En cuanto tiempo sueles responder los mensajes de el o la chica que te gusta cuando estas ocupado com algo?\n");
    printf("a) 1 a 10 minutos\nb) De inmediato\nc) Cuando termino lo que estoy haciendo\n");
    scanf(" %c", &respuesta);
    if (respuesta == 'c') {
        puntos += 10;
    }
  if (puntos >=70) {
    printf("\nWow, realmente estas preparado para estar en una relación pero recuerda siempre tenerte como prioridad a ti mismo sobre los demás");
  }
  else {
    printf("\nEres un completo SIMP de alcantarilla, no estás list@ para una relación, mejor enfocate a trabajar en ti mismo y en no depender de los demás");
  }
  return 0;
}
