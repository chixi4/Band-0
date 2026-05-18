
undefined4 FUN_ram_420324c8(undefined4 param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = 3;
  if (param_2 != 0) {
    thunk_FUN_ram_4202b7dc(3);
    iVar2 = FUN_ram_420365de(param_1);
    uVar1 = 7;
    if (iVar2 != 0) {
      uVar3 = param_3 & 0xff;
      if (param_3 != 0) {
        uVar3 = 1;
      }
      FUN_ram_4039c11e(param_2,iVar2 + 0x66,uVar3);
      uVar1 = 0;
    }
    thunk_FUN_ram_4202b7f6();
  }
  return uVar1;
}

