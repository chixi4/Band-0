
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4201a3fe(uint param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    return 0x102;
  }
  FUN_ram_40390ff2(0x3fcb3554);
  if (((_DAT_ram_3fcb3528 == 0) || (param_1 = param_1 & 0x1fffff, param_1 < _DAT_ram_3fcb353c)) ||
     (puVar5 = _DAT_ram_3fcb354c, _DAT_ram_3fcb3534 <= param_1)) {
LAB_ram_4201a43c:
    FUN_ram_4039100a(0x3fcb3554);
    uVar2 = 0x105;
  }
  else {
    do {
      puVar1 = puVar5;
      if (puVar1 == (uint *)0x0) goto LAB_ram_4201a43c;
      puVar5 = (uint *)puVar1[9];
    } while (((_DAT_ram_3fcb354c == puVar1) ||
             ((uint *)**(undefined4 **)(_DAT_ram_3fcb3550 + 4) == puVar1)) || (param_1 != *puVar1));
    uVar6 = *puVar5 - *(int *)(**(int **)(puVar1[10] + 4) + 4);
    if (uVar6 < _DAT_ram_3fcb3540) {
      uVar6 = _DAT_ram_3fcb3540;
    }
    puVar5[10] = puVar1[10];
    uVar4 = puVar1[4];
    uVar3 = puVar1[2];
    _DAT_ram_3fcb3540 = uVar6;
    *(uint **)puVar1[10] = puVar5;
    FUN_ram_40391646(uVar3,uVar4);
    thunk_FUN_ram_40390608(puVar1);
    FUN_ram_4039100a(0x3fcb3554);
    uVar2 = 0;
  }
  return uVar2;
}

