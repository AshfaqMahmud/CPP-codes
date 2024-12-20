#include <stdio.h>
// #include <arpa/inet.h>

#define us_t unsigned short

typedef struct Port
{
    us_t p_dup_mode : 2;         // port duplex mode
    us_t p_nego_mode : 2;        // port negotiation mode
    us_t p_rate : 3;             // port rate
    us_t p_res1 : 1;             // reserved
    us_t p_en : 1;               // port enable
    us_t p_speed_lim_INLET : 7;  // port inlet speed
    us_t p_link_st : 1;          // port link state
    us_t p_speed_lim_OUTLET : 7; // port outlet speed
    us_t p_res2 : 4;             // reserved
    us_t p_res3 : 4;             // reserved
} port_t;

int main()
{
    char buf[4] = {0};
    port_t *pport = buf;

    pport->p_dup_mode = 0b11;
    pport->p_nego_mode = 0b01;
    pport->p_rate = 0b011;
    pport->p_en = 0b1;
    pport->p_speed_lim_INLET = 36;
    pport->p_link_st = 0b1;
    pport->p_speed_lim_OUTLET = 63;

    pport->p_res1 = pport->p_res2 = pport->p_res3 = 0;

    printf("%hhx, %hhx, %hhx, %hhx\n", buf[0], buf[1], buf[2], buf[3]);

    return 0;
}
