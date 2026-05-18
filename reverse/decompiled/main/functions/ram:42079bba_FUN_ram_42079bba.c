
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42079bba(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = _DAT_ram_3fcc4018;
  iVar3 = FUN_ram_42079b6e(param_1 + 0x108);
  if (iVar3 == 0) {
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
    *(int *)(iVar1 + 0x114) = *(int *)(iVar1 + 0x114) + 1;
    (*(code *)&SUB_ram_40011fa4)(param_2);
    uVar2 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x11c) == 0) {
      *(int *)(param_1 + 0x118) = param_2;
    }
    else {
      *(int *)(*(int *)(param_1 + 0x11c) + 0x20) = param_2;
    }
    iVar3 = *(int *)(param_1 + 0x120);
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(int *)(param_1 + 0x11c) = param_2;
    *(int *)(param_1 + 0x120) = iVar3 + 1;
    iVar3 = *(int *)(param_1 + 0x108) + 1;
    *(int *)(param_1 + 0x108) = iVar3;
    *(int *)(iVar1 + 0x10c) = *(int *)(iVar1 + 0x10c) + 1;
    uVar2 = 0;
    if (iVar3 == 1) {
      FUN_ram_420799d0(param_1,1);
      uVar2 = 0;
    }
  }
  return uVar2;
}

