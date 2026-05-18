
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4209d1ca(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = 0;
  uStack_14 = 0;
  puVar2 = &uStack_18;
  if (_DAT_ram_3fcc4b54 != 2) {
    puVar2 = (undefined4 *)(param_1 + 0x3d);
  }
  if (param_2 == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x3d);
    uVar1 = 0x3fcc4bd4;
  }
  else {
    uVar1 = 0x3fcc4b90;
  }
  FUN_ram_4039c11e(uVar1,puVar2,8);
  return;
}

