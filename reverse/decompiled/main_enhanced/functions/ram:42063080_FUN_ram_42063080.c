
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42063080(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_21 [13];
  
  if (param_1 == 0) {
    return 0x102;
  }
  iVar3 = *(int *)(param_1 + 0x40);
  auStack_21[0] = 1;
  iVar1 = FUN_ram_4039c2c0(*(int *)(param_1 + 0x3c) + 0x3fcc53ac,auStack_21,0,5);
  if (iVar1 == 0) {
    uVar2 = 0x105;
  }
  else {
    FUN_ram_403917e0(0x3fcc26fc);
    *(undefined4 *)(*(int *)(param_1 + 0x3c) * 4 + 0x3fcc2700) = 0;
    FUN_ram_403917f8(0x3fcc26fc);
    if (iVar3 == 0) {
      FUN_ram_420b499a();
    }
    else {
      FUN_ram_420b4de2(2,0);
      iVar1 = FUN_ram_403948d2(*(undefined4 *)(param_1 + 0x34),0);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf1e();
      }
    }
    FUN_ram_403917e0(0x3fcc26fc);
    _DAT_ram_3fcc2704 = _DAT_ram_3fcc2704 + -1;
    if (_DAT_ram_3fcc2704 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
    if (_DAT_ram_3fcc2704 == 0) {
      FUN_ram_40394720();
    }
    FUN_ram_403917f8(0x3fcc26fc);
    thunk_FUN_ram_40390634(param_1);
    uVar2 = 0;
  }
  return uVar2;
}

