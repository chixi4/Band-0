
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_42058752(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  if (((char)param_1[2] == '\0') ||
     (bVar1 = false, (char)param_1[2] == (char)(*(char *)(_DAT_ram_3fcc26ac + 0x3c) + '\x01'))) {
    uVar2 = *param_1;
    bVar1 = true;
    if (param_3 == 0) {
      if (uVar2 != 0) {
        bVar1 = _DAT_ram_3fcc26bc == uVar2;
      }
    }
    else if ((uVar2 != 0) && (_DAT_ram_3fcc26bc != 0xffffffff)) {
      return ((_DAT_ram_3fcc26bc ^ uVar2) & *(uint *)(param_2 + 8)) == 0;
    }
  }
  return bVar1;
}

