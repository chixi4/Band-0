
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42012c66(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)thunk_FUN_ram_403904a6(0xc);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xc;
  }
  else {
    FUN_ram_40396966();
    iVar3 = 1;
    if (_DAT_ram_3fcc4ee8 != (int *)0x0) {
      iVar3 = *_DAT_ram_3fcc4ee8 + 1;
    }
    *param_1 = iVar3;
    *piVar1 = iVar3;
    piVar1[1] = param_2;
    piVar1[2] = (int)_DAT_ram_3fcc4ee8;
    _DAT_ram_3fcc4ee8 = piVar1;
    FUN_ram_40396994();
    uVar2 = 0;
  }
  return uVar2;
}

