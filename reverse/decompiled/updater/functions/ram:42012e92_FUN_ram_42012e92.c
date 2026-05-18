
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42012e92(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)thunk_FUN_ram_4039047a(0xc);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xc;
  }
  else {
    FUN_ram_40394d60();
    iVar3 = 1;
    if (_DAT_ram_3fcb6648 != (int *)0x0) {
      iVar3 = *_DAT_ram_3fcb6648 + 1;
    }
    *param_1 = iVar3;
    *piVar1 = iVar3;
    piVar1[1] = param_2;
    piVar1[2] = (int)_DAT_ram_3fcb6648;
    _DAT_ram_3fcb6648 = piVar1;
    FUN_ram_40394d8e();
    uVar2 = 0;
  }
  return uVar2;
}

