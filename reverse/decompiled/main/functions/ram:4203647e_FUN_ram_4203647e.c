
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203647e(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return;
  }
  (*(code *)&SUB_ram_40011a08)(*(undefined4 *)(param_1 + 0x3c));
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_ram_4202aa8c(param_1 + 0x54);
  while (*(int *)(param_1 + 0x38) != 0) {
    FUN_ram_42036430(param_1);
  }
  while (iVar1 = *(int *)(param_1 + 0x4c), iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    *(int *)(param_1 + 0x4c) = iVar2;
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x50) = param_1 + 0x4c;
    }
    (*(code *)&SUB_ram_40011a08)(iVar1 + -0x10);
  }
  while (iVar1 = *(int *)(param_1 + 0x7c), iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    *(int *)(param_1 + 0x7c) = iVar2;
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x80) = param_1 + 0x7c;
    }
    (*(code *)&SUB_ram_40011a08)(iVar1 + -0x10);
  }
  if (_DAT_ram_3fcb6be0 != 0) {
    FUN_ram_403a3284(_DAT_ram_3fcb6be0,param_1);
    return;
  }
  return;
}

