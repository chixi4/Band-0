
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40390682(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uStack_2c = param_3;
  uStack_28 = param_2;
  uStack_24 = param_1;
  FUN_ram_4039211a(&uStack_24,&uStack_28,&uStack_2c);
  if (0x43fff < uStack_28 - 1) {
    return 0;
  }
  if ((uStack_2c & 1) == 0) {
    if ((uStack_2c & 2) == 0) goto LAB_ram_403906e8;
  }
  else {
    if ((uStack_2c & 0xc) != 0) {
      return 0;
    }
    uStack_2c = uStack_2c | 2;
  }
  uStack_28 = uStack_28 + 3 & 0xfffffffc;
LAB_ram_403906e8:
  iVar1 = 0;
  puVar5 = _DAT_ram_3fcc4e20;
  do {
    while (puVar5 == (uint *)0x0) {
      iVar1 = iVar1 + 1;
      puVar5 = _DAT_ram_3fcc4e20;
      if (iVar1 == 3) {
        return 0;
      }
    }
    if (((puVar5[7] != 0) && ((puVar5[iVar1] & uStack_2c) != 0)) &&
       (uStack_2c == ((*puVar5 | puVar5[1] | puVar5[2]) & uStack_2c))) {
      if (((uStack_2c & 1) == 0) || (0x3ffff < puVar5[3] + 0xc0360000)) {
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
          uVar2 = (*(code *)&SUB_ram_40010358)();
        }
        else {
          uVar2 = thunk_EXT_FUN_ram_40010364(puVar5[7],uStack_28 + 4,uStack_24,0);
        }
        if (uVar2 != 0) {
          uVar4 = uStack_28 + 4 + uVar2;
          if (((uVar2 + 0xc0360000 < 0x40000) && (uVar4 + 0xc035fffc < 0x40000)) &&
             (((uVar4 | uVar2) & 3) == 0)) {
            *(uint *)(uVar2 + 0x6e0000) = uVar2;
            return uVar2 + 0x6e0004;
          }
                    /* WARNING: Subroutine does not return */
          FUN_ram_4039bf9e(0,0,0,0);
        }
      }
    }
    puVar5 = (uint *)puVar5[8];
  } while( true );
}

