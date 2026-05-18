
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42030512(int param_1)

{
  int iVar1;
  undefined4 local_38;
  undefined2 uStack_34;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = _DAT_ram_3fcb6ba8;
  if (_DAT_ram_3fcb6ba8 == 0) {
    iVar1 = 6;
  }
  else {
    if (param_1 == 0) {
      param_1 = _DAT_ram_3fcb6ba8 + 0x11;
    }
    FUN_ram_4039c11e(auStack_30,param_1);
    FUN_ram_4039c11e(iVar1 + 1,auStack_30);
    iVar1 = FUN_ram_42030264(0);
    if (((iVar1 == 0) && (iVar1 = FUN_ram_420332b4(0x2029,0,0,0,0), iVar1 == 0)) &&
       (iVar1 = FUN_ram_42030264(1), iVar1 == 0)) {
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      local_38 = 0;
      uStack_34 = 0;
      iVar1 = FUN_ram_42030472(&local_38,0,&uStack_20);
    }
  }
  return iVar1;
}

