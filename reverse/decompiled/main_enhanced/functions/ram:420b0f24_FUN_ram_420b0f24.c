
void FUN_ram_420b0f24(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(gp + -0x714) == param_1) {
    return;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x24) + 0xc) != 0) {
      iVar1 = 0;
      do {
        piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x24) + 0xc) + iVar1);
        while (piVar2 != (int *)0x0) {
          piVar2 = (int *)*piVar2;
          FUN_ram_4039c0c2(param_1);
        }
        iVar1 = iVar1 + 4;
      } while (iVar1 != 0x80);
      FUN_ram_4039c0c2(param_1,*(undefined4 *)(*(int *)(param_1 + 0x24) + 0xc));
    }
    if (**(int **)(param_1 + 0x24) != 0) {
      FUN_ram_4039c0c2(param_1);
    }
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_ram_4039c0c2(param_1);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_ram_4039c0c2(param_1);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_ram_4039c0c2(param_1);
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_ram_4039c0c2(param_1);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_ram_4039c0c2(param_1);
  }
  if (*(int *)(param_1 + 0xec) != 0) {
    FUN_ram_4039c0c2(param_1);
  }
  if (*(int *)(param_1 + 0xe8) != 0) {
    FUN_ram_4039c0c2(param_1);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_ram_4039c0c2(param_1);
  }
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x420b0ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))(param_1);
    return;
  }
  return;
}

