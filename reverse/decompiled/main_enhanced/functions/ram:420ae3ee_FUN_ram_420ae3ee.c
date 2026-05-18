
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420ae3ee(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  uVar2 = (**(code **)(_DAT_ram_3fcc4c78 + 0x74))(0,1);
  iVar3 = 100;
  bVar1 = 0;
  do {
    FUN_ram_420ae382(1,param_1,&uStack_3c);
    if ((iStack_34 < iVar3) &&
       (((_DAT_ram_3fcb8138 == 0 || (uVar2 < 100)) || (DAT_ram_3fcb8137 == '\x01')))) {
      param_3[2] = iStack_34;
      *param_3 = uStack_3c;
      param_3[1] = uStack_38;
      iVar3 = iStack_34;
    }
    if (iVar3 < 0x30) {
      if (1 < bVar1) {
        return;
      }
      if (iVar3 < 0x24) {
        return;
      }
    }
    bVar1 = bVar1 + 1;
    if (bVar1 == 8) {
      param_3[2] = 0x38;
      *param_3 = 0;
      param_3[1] = 0;
      return;
    }
  } while( true );
}

