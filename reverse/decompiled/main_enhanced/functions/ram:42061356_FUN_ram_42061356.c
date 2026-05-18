
int FUN_ram_42061356(void)

{
  int iVar1;
  
  if (DAT_ram_3fcc538d == '\0') {
    iVar1 = FUN_ram_420b2e4e(0x8000c000,2,0x42051194,0);
    if ((((((iVar1 != 0) || (iVar1 = FUN_ram_420b2e4e(0x8000c000,3,0x420510f8,0), iVar1 != 0)) ||
          (iVar1 = FUN_ram_420b2e4e(0x8000c000,4,0x420511ea,0), iVar1 != 0)) ||
         ((iVar1 = FUN_ram_420b2e4e(0x8000c000,5,0x420511a4,0), iVar1 != 0 ||
          (iVar1 = FUN_ram_420b2e4e(0x8000c000,0xc,0x42051182,0), iVar1 != 0)))) ||
        ((iVar1 = FUN_ram_420b2e4e(0x8000c000,0xd,0x420510e6,0), iVar1 != 0 ||
         (iVar1 = FUN_ram_420b2e4e(0x18ff1f,0,0x420511b4,0), iVar1 != 0)))) ||
       ((iVar1 = FUN_ram_42010412(0x420745bc), iVar1 != 0 && (iVar1 != 0x103)))) {
      FUN_ram_420612b6();
      return iVar1;
    }
    DAT_ram_3fcc538d = '\x01';
  }
  return 0;
}

