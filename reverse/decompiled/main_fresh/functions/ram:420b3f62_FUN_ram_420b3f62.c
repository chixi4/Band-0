
undefined4 FUN_ram_420b3f62(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  iVar2 = *piVar1;
  iVar3 = piVar1[1];
  FUN_ram_40396966();
  piVar1[2] = 0;
  piVar1[4] = piVar1[4] & 0xfffffffd;
  FUN_ram_40396994();
  if (param_1[1] != 0) {
    FUN_ram_420119d8();
    FUN_ram_40396966();
    FUN_ram_420b5fdc(iVar2 + 8,iVar3,0,0xffffffff,0);
    FUN_ram_40399324(iVar2 + 8,piVar1[1],0,0xffffffff);
    FUN_ram_40396994();
  }
  thunk_FUN_ram_40390634(param_1);
  FUN_ram_420b3e64(piVar1);
  return 0;
}

