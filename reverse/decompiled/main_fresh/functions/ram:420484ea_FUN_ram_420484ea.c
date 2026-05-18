
undefined4 FUN_ram_420484ea(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    FUN_ram_40396966();
    if (*(int *)(gp + -0x444) == 3) {
      *(undefined4 *)(gp + -0x444) = 0;
    }
    FUN_ram_40396994();
    iVar1 = FUN_ram_420119cc(0xd,param_3,param_1,param_2,param_4);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 0x105;
    }
    return uVar2;
  }
  return 0x102;
}

