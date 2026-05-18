
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42063080(int param_1)

{
  int iVar1;
  int extraout_a5;
  int iVar2;
  undefined1 auStack_21 [13];
  
  if (param_1 == 0) {
    return 0x102;
  }
  iVar2 = *(int *)(param_1 + 0x40);
  auStack_21[0] = 1;
  iVar1 = FUN_ram_4039c2c0(*(int *)(param_1 + 0x3c) + 0x3fcc53ac,auStack_21,0,5);
  if (iVar1 == 0) {
    return 0x105;
  }
  FUN_ram_403917e0(0x3fcc26fc);
  *(undefined4 *)(*(int *)(param_1 + 0x3c) * 4 + 0x3fcc2700) = 0;
  FUN_ram_403917f8(0x3fcc26fc);
  if (iVar2 == 0) {
    FUN_ram_420b499a();
  }
  else {
    FUN_ram_420b4de2(2,0);
    iVar1 = FUN_ram_403948d2(*(undefined4 *)(param_1 + 0x34),0);
    if (iVar1 != 0) {
      FUN_ram_4039bf1e();
      iVar1 = extraout_a5;
      goto LAB_ram_42063138;
    }
  }
  FUN_ram_403917e0(0x3fcc26fc);
  iVar1 = _DAT_ram_3fcc2704 + -1;
  _DAT_ram_3fcc2704 = iVar1;
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
LAB_ram_42063138:
  if (iVar1 == 0) {
    FUN_ram_40394720();
  }
  FUN_ram_403917f8(0x3fcc26fc);
  thunk_FUN_ram_40390634(param_1);
  return 0;
}

