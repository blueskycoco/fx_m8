void dummy_trap() __trap __naked { __asm__("jp " BOOT_ADDR_S "+0x4" ); }
void dummy_isr0() __interrupt(0) __naked { __asm__("jp " BOOT_ADDR_S "+0x8"); }
void dummy_isr1() __interrupt(1) __naked { __asm__("jp " BOOT_ADDR_S "+0xc"); }
void dummy_isr2() __interrupt(2) __naked { __asm__("jp " BOOT_ADDR_S "+0x10"); }
void dummy_isr3() __interrupt(3) __naked { __asm__("jp " BOOT_ADDR_S "+0x14"); }
void dummy_isr4() __interrupt(4) __naked { __asm__("jp " BOOT_ADDR_S "+0x18"); }
void dummy_isr5() __interrupt(5) __naked { __asm__("jp " BOOT_ADDR_S "+0x1c"); }
void dummy_isr6() __interrupt(6) __naked { __asm__("jp " BOOT_ADDR_S "+0x20"); }
void dummy_isr7() __interrupt(7) __naked { __asm__("jp " BOOT_ADDR_S "+0x24"); }
void dummy_isr8() __interrupt(8) __naked { __asm__("jp " BOOT_ADDR_S "+0x28"); }
void dummy_isr9() __interrupt(9) __naked { __asm__("jp " BOOT_ADDR_S "+0x2c"); }
void dummy_isr10() __interrupt(10) __naked { __asm__("jp " BOOT_ADDR_S "+0x30"); }
void dummy_isr11() __interrupt(11) __naked { __asm__("jp " BOOT_ADDR_S "+0x34"); }
void dummy_isr12() __interrupt(12) __naked { __asm__("jp " BOOT_ADDR_S "+0x38"); }
void dummy_isr13() __interrupt(13) __naked { __asm__("jp " BOOT_ADDR_S "+0x3c"); }
void dummy_isr14() __interrupt(14) __naked { __asm__("jp " BOOT_ADDR_S "+0x40"); }
void dummy_isr15() __interrupt(15) __naked { __asm__("jp " BOOT_ADDR_S "+0x44"); }
void dummy_isr16() __interrupt(16) __naked { __asm__("jp " BOOT_ADDR_S "+0x48"); }
void dummy_isr17() __interrupt(17) __naked { __asm__("jp " BOOT_ADDR_S "+0x4c"); }
void dummy_isr18() __interrupt(18) __naked { __asm__("jp " BOOT_ADDR_S "+0x50"); }
void dummy_isr19() __interrupt(19) __naked { __asm__("jp " BOOT_ADDR_S "+0x54"); }
void dummy_isr20() __interrupt(20) __naked { __asm__("jp " BOOT_ADDR_S "+0x58"); }
void dummy_isr21() __interrupt(21) __naked { __asm__("jp " BOOT_ADDR_S "+0x5c"); }
void dummy_isr22() __interrupt(22) __naked { __asm__("jp " BOOT_ADDR_S "+0x60"); }
void dummy_isr23() __interrupt(23) __naked { __asm__("jp " BOOT_ADDR_S "+0x64"); }
void dummy_isr24() __interrupt(24) __naked { __asm__("jp " BOOT_ADDR_S "+0x68"); }
void dummy_isr25() __interrupt(25) __naked { __asm__("jp " BOOT_ADDR_S "+0x6c"); }
void dummy_isr26() __interrupt(26) __naked { __asm__("jp " BOOT_ADDR_S "+0x70"); }
void dummy_isr27() __interrupt(27) __naked { __asm__("jp " BOOT_ADDR_S "+0x74"); }
void dummy_isr28() __interrupt(28) __naked { __asm__("jp " BOOT_ADDR_S "+0x78"); }