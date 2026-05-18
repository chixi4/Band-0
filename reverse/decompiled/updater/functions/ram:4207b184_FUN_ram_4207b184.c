
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207b184(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  int iStack_18;
  undefined4 uStack_14;
  
  FUN_ram_4207b0d4();
  iVar2 = _DAT_ram_3fcb6574;
  if (DAT_ram_3fcb6578 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 0;
    puVar5 = (undefined1 *)0x0;
    if (iVar2 != 0) {
      puVar5 = &LAB_ram_4206b028_2;
    }
    *(undefined1 **)(param_1 + 0x10) = puVar5;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 3;
  }
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(*(undefined4 *)(param_1 + 0x1c));
  }
  uVar6 = FUN_ram_4039d97a();
  piVar4 = (int *)((ulonglong)uVar6 >> 0x20);
  iVar2 = (int)uVar6;
  if (iVar2 == 0) {
    FUN_ram_4207b0d4();
    if (*(code **)(param_1 + 0x14) != (code *)0x0) {
      (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0x1c));
    }
    DAT_ram_3fcb6578 = 0;
    FUN_ram_4207b0d4();
    iVar2 = FUN_ram_4207b180();
    if (iVar2 == 0) {
      uVar3 = 5;
      if ((*(int *)(param_1 + 4) != 1) && (uVar3 = 6, *(int *)(param_1 + 4) != 2)) {
        uVar3 = 4;
      }
      FUN_ram_4207b17e(uVar3);
    }
    FUN_ram_42010b4a();
    return;
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    iVar1 = _DAT_ram_3fcb6574;
    if (DAT_ram_3fcb6578 == '\0') goto LAB_ram_4207b1f8;
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
  }
  iVar2 = 0;
  if (iVar1 != 0) {
    iStack_18 = iVar1;
    uStack_14 = (*(code *)&SUB_ram_400104a8)();
    piVar4 = &iStack_18;
    iVar2 = 0x116;
    ebreak();
  }
LAB_ram_4207b1f8:
  FUN_ram_4207b02c(iVar2,piVar4);
  (*(code *)&SUB_ram_40010288)(0x3fcaf898);
  (*(code *)&SUB_ram_40010294)(0x3fcaf898);
  (*(code *)&SUB_ram_4001028c)(0x3fcaf898);
  FUN_ram_4207a2b8(0,*(undefined4 *)(param_1 + 0x18));
  return;
}

