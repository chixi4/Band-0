
int FUN_ram_42048548(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(gp + -0x440) == 0) {
    uVar2 = 0x1000;
    if ((param_1 & 0x400) != 0) {
      uVar2 = 0x800;
    }
    iVar1 = FUN_ram_403905a0(0x15,8,uVar2);
    if (iVar1 == 0) {
      return 0x101;
    }
    FUN_ram_40396966(0x101);
    if (*(int *)(gp + -0x440) == 0) {
      *(int *)(gp + -0x440) = iVar1;
      FUN_ram_40396994();
      iVar1 = FUN_ram_420484ea(0x40381a86,0,param_1,gp + -0x43c);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_ram_42048498();
      return iVar1;
    }
    FUN_ram_40396994();
    thunk_FUN_ram_40390634(iVar1);
  }
  return 0x103;
}

