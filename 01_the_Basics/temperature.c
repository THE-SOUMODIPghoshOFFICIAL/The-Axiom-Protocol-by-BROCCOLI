/**************************************************************************

**********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <windows.h>
//SetConsoleOutputCP(CP_UTF8);

double f_to_c(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

int main(void) {
    char buf[128];
    char *endptr;
    double fahrenheit;

    printf("\nENTER YOUR TEMPERATURE IN FAHRENHEIT (e.g. 98.6): ");
    if (fgets(buf, sizeof(buf), stdin) == NULL) {
        fprintf(stderr, "No input received. Exiting.\n");
        return 1;
    }

    /* Strip newline */
    buf[strcspn(buf, "\r\n")] = '\0';

    /* Parse and validate */
    fahrenheit = strtod(buf, &endptr);
    if (endptr == buf || *endptr != '\0') {
        fprintf(stderr, "Invalid number: '%s'\n", buf);
        return 1;
    }

    printf("YOU HAVE JUST ENTERED: %.2f °F\n", fahrenheit);
    printf("YOUR TEMPERATURE IN CENTIGRADE IS: %.2f °C\n", f_to_c(fahrenheit));
    return 0;
}