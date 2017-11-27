#include "ram.h"
#include "stm8s.h"
#include "config.h"

#pragma codeseg RAM_SEG
void ram_flash_write_block(uint16_t addr, const uint8_t *buf) {
    uint8_t i;
    /* enable block programming */
    FLASH_CR2 = 1 << FLASH_CR2_PRG;
    FLASH_NCR2 = (uint8_t) ~(1 << FLASH_NCR2_NPRG);

    /* write data from buffer */
    for (i = 0; i < BLOCK_SIZE; i++)
        _MEM_(addr + i) = buf[i];

    /* wait for operation to complete */
    while (!(FLASH_IAPSR & (1 << FLASH_IAPSR_EOP)));
}
