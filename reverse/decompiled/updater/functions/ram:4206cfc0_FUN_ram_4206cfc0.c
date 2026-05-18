
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4206cfc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    piVar2 = (int *)FUN_ram_4206cb16();
    *(undefined4 *)(iVar1 + 0x34) = param_4;
    uVar3 = (*(code *)&SUB_ram_400104a8)(param_2);
    iVar4 = FUN_ram_4206c196(param_2,uVar3,param_3,iVar1 + 4,piVar2,iVar1 + 0x6c);
    uVar3 = 0;
    if (iVar4 != 0) {
      *piVar2 = iVar4;
      uVar3 = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x6c) = 0xffffffff;
    }
    return uVar3;
  }
  iVar1 = FUN_ram_4206cb16();
  _DAT_ram_00000034 = 0;
  ebreak();
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) != 0) {
      FUN_ram_4206cac8();
      FUN_ram_4206d3f2(*(undefined4 *)(iVar1 + 0x38));
      thunk_FUN_ram_40390608(*(undefined4 *)(iVar1 + 8));
    }
    return 0;
  }
  return 0;
}

