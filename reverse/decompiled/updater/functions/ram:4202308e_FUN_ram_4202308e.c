
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4202308e(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = _DAT_ram_3c07590c;
  if (DAT_ram_3fcb6765 == '\0') {
    iVar2 = FUN_ram_420796de(_DAT_ram_3c07590c,2,0x42012edc,0);
    if ((((iVar2 != 0) || (iVar2 = FUN_ram_420796de(uVar1,3,0x42012ecc,0), iVar2 != 0)) ||
        (iVar2 = FUN_ram_420796de(uVar1,4,0x42012f96,0), iVar2 != 0)) ||
       (((iVar2 = FUN_ram_420796de(uVar1,5,0x42012ebc,0), iVar2 != 0 ||
         (iVar2 = FUN_ram_420796de(_DAT_ram_3c0758dc,0,0x42012f60,0), iVar2 != 0)) ||
        ((iVar2 = FUN_ram_420103b8(0x4202cdb6), iVar2 != 0 && (iVar2 != 0x103)))))) {
      FUN_ram_4202300e();
      return iVar2;
    }
    DAT_ram_3fcb6765 = '\x01';
  }
  return 0;
}

