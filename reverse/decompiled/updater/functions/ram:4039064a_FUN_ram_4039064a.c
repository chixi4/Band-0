
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4039064a(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uStack_2c = param_3;
  uStack_28 = param_2;
  uStack_24 = param_1;
  FUN_ram_403916d2(&uStack_24,&uStack_28,&uStack_2c);
  if (0x43fff < uStack_28 - 1) {
    return 0;
  }
  if ((uStack_2c & 1) == 0) {
    if ((uStack_2c & 2) == 0) goto LAB_ram_403906b0;
  }
  else {
    if ((uStack_2c & 0xc) != 0) {
      return 0;
    }
    uStack_2c = uStack_2c | 2;
  }
  uStack_28 = uStack_28 + 3 & 0xfffffffc;
LAB_ram_403906b0:
  iVar2 = 0;
  puVar1 = _DAT_ram_3fcb6598;
  do {
    while (puVar1 == (uint *)0x0) {
      iVar2 = iVar2 + 1;
      puVar1 = _DAT_ram_3fcb6598;
      if (iVar2 == 3) {
        return 0;
      }
    }
    if (((puVar1[7] != 0) && ((puVar1[iVar2] & uStack_2c) != 0)) &&
       (uStack_2c == ((*puVar1 | puVar1[1] | puVar1[2]) & uStack_2c))) {
      if (((uStack_2c & 1) == 0) || (0x3ffff < puVar1[3] + 0xc0360000)) {
        if (uStack_24 < 5) {
          iVar3 = (*(code *)&SUB_ram_40010358)();
        }
        else {
          iVar3 = thunk_EXT_FUN_ram_40010364();
        }
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      else {
        if (uStack_24 < 5) {
          iVar3 = (*(code *)&SUB_ram_40010358)();
        }
        else {
          iVar3 = thunk_EXT_FUN_ram_40010364(puVar1[7],uStack_28 + 4,uStack_24,0);
        }
        if (iVar3 != 0) {
          *(int *)(iVar3 + 0x6e0000) = iVar3;
          return iVar3 + 0x6e0004;
        }
      }
    }
    puVar1 = (uint *)puVar1[8];
  } while( true );
}

