
void FUN_ram_4205dd38(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 uVar4;
  uint uVar5;
  
  puVar1 = (uint *)*param_1;
  *(undefined1 *)(param_1 + 1) = 0;
  if (puVar1[2] != 0) goto LAB_ram_4205dd94;
  uVar5 = *puVar1 & 0xf0;
  if (uVar5 == 0x20) {
    uVar5 = thunk_FUN_ram_42058da8(0);
    piVar3 = (int *)*param_1;
    puVar1[2] = uVar5;
    iVar2 = piVar3[2];
    if (iVar2 != 0) {
      if (*piVar3 == 0x22) {
        *(undefined1 *)(iVar2 + 0x10) = 1;
      }
      FUN_ram_42058d70(iVar2,0x4204d40a);
LAB_ram_4205dd8e:
      if (*(int *)(*param_1 + 8) != 0) goto LAB_ram_4205dd94;
    }
LAB_ram_4205dde2:
    uVar4 = 0xff;
  }
  else {
    if (uVar5 == 0x40) {
      uVar5 = FUN_ram_42054472(0,(char)param_1[2]);
      iVar2 = *param_1;
      puVar1[2] = uVar5;
      if (*(int *)(iVar2 + 8) != 0) {
        FUN_ram_42054254(*(int *)(iVar2 + 8),0x4204d7aa);
        goto LAB_ram_4205dd8e;
      }
      goto LAB_ram_4205dde2;
    }
    if (uVar5 == 0x10) {
      uVar5 = FUN_ram_42055042(0);
      puVar1[2] = uVar5;
      if (*(int *)(*param_1 + 8) != 0) {
        FUN_ram_4205d4c4();
        goto LAB_ram_4205dd8e;
      }
      goto LAB_ram_4205dde2;
    }
    uVar4 = 0xfa;
  }
  *(undefined1 *)(param_1 + 1) = uVar4;
LAB_ram_4205dd94:
  FUN_ram_4205c6fa(param_1[9]);
  return;
}

