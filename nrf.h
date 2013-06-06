#ifndef _NRF_H
#define _NRF_H

typedef struct
{
  volatile unsigned char tx_addr[5];
  volatile unsigned char payload[32];
  volatile unsigned char payload_size;
} nrf_msg;

unsigned char nrf_reg_read(unsigned char reg);
void nrf_reg_write(unsigned char reg, unsigned char val);

#endif
