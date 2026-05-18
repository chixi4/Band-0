
undefined4 FUN_ram_4201a4d8(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_28;
  undefined4 auStack_24 [4];
  
  if ((param_2 == (undefined4 *)0x0) || (iVar1 = FUN_ram_40397292(0,param_1,1,3), iVar1 == 0)) {
    uVar2 = 0x102;
  }
  else {
    uStack_28 = 0;
    auStack_24[0] = 0;
    FUN_ram_40390ff2(0x3fcb3554);
    iVar1 = FUN_ram_403973f8(0,param_1,&uStack_28,auStack_24);
    FUN_ram_4039100a(0x3fcb3554);
    uVar2 = 0x105;
    if (iVar1 != 0) {
      uVar2 = 0;
      *param_2 = uStack_28;
      *param_3 = auStack_24[0];
    }
  }
  return uVar2;
}

