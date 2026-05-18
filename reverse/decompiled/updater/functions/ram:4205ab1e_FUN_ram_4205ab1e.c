
void FUN_ram_4205ab1e(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 uVar4;
  uint uVar5;
  
  puVar1 = (uint *)*param_1;
  *(undefined1 *)(param_1 + 1) = 0;
  if (puVar1[2] != 0) goto LAB_ram_4205ab7a;
  uVar5 = *puVar1 & 0xf0;
  if (uVar5 == 0x20) {
    uVar5 = thunk_FUN_ram_4205614a(0);
    piVar3 = (int *)*param_1;
    puVar1[2] = uVar5;
    iVar2 = piVar3[2];
    if (iVar2 != 0) {
      if (*piVar3 == 0x22) {
        *(undefined1 *)(iVar2 + 0x10) = 1;
      }
      FUN_ram_42056112(iVar2,0x4204a55a);
LAB_ram_4205ab74:
      if (*(int *)(*param_1 + 8) != 0) goto LAB_ram_4205ab7a;
    }
LAB_ram_4205abc8:
    uVar4 = 0xff;
  }
  else {
    if (uVar5 == 0x40) {
      uVar5 = FUN_ram_42052592(0,(char)param_1[2]);
      iVar2 = *param_1;
      puVar1[2] = uVar5;
      if (*(int *)(iVar2 + 8) != 0) {
        FUN_ram_4205237a(*(int *)(iVar2 + 8),0x4204a604);
        goto LAB_ram_4205ab74;
      }
      goto LAB_ram_4205abc8;
    }
    if (uVar5 == 0x10) {
      uVar5 = FUN_ram_42053284(0);
      puVar1[2] = uVar5;
      if (*(int *)(*param_1 + 8) != 0) {
        FUN_ram_4205a2c8();
        goto LAB_ram_4205ab74;
      }
      goto LAB_ram_4205abc8;
    }
    uVar4 = 0xfa;
  }
  *(undefined1 *)(param_1 + 1) = uVar4;
LAB_ram_4205ab7a:
  thunk_FUN_ram_4205973a(param_1[9]);
  return;
}

