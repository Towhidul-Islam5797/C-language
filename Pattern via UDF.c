#include <stdio.h>
/* UDF declaration */
void draw_rocket_ship();
void draw_male_stick_figure();
void draw_female_stick_figure();
void draw_circle();
void draw_rectangle();
void draw_triangle();
void draw_intersect_line();

int main(void)
{
    draw_rocket_ship();
    printf("\n\n");

    draw_male_stick_figure();
    printf("\n\n");

    draw_female_stick_figure();
    printf("\n\n");

return 0;
}
/* UDF definition */

void draw_rocket_ship()
{
    draw_triangle();
    draw_rectangle();
    draw_intersect_line();
}

void draw_male_stick_figure()
{
    draw_circle();
    draw_rectangle();
    draw_intersect_line();
}

void draw_female_stick_figure()
{
    draw_circle();
    draw_triangle();
    draw_intersect_line();
}
void draw_circle()
{
    printf("   ** \n");
    printf("  *   * \n");
    printf(" *     * \n");
    printf("  *  * \n");
    printf("   ** \n");
}
void draw_rectangle()
{
    printf(" ****** \n");
    printf(" *    * \n");
    printf(" *    * \n");
    printf(" *    * \n");
    printf(" ****** \n");
}
void draw_triangle()
{
    printf("   * \n");
    printf("  *  * \n");
    printf(" *    * \n");
    printf("********\n");
}
void draw_intersect_line()
{
    printf("   * \n");
    printf("  * * \n");
    printf(" *   * \n");
    printf("*     *\n");
}
