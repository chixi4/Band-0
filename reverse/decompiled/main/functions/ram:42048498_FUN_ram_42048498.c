
void FUN_ram_42048498(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_ram_40396966();
  iVar1 = *(int *)(gp + -0x440);
  if (iVar1 == 0) {
    FUN_ram_40396994();
    return;
  }
  uVar2 = *(undefined4 *)(gp + -0x43c);
  *(undefined4 *)(gp + -0x440) = 0;
  *(undefined4 *)(gp + -0x43c) = 0;
  *(undefined4 *)(gp + -0x444) = 3;
  FUN_ram_40396994();
  FUN_ram_420119d8(uVar2);
  thunk_FUN_ram_40390634(iVar1);
  return;
}

