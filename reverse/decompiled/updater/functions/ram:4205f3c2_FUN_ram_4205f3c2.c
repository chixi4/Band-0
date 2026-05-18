
int FUN_ram_4205f3c2(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = FUN_ram_42066304();
  iVar4 = *(int *)(param_1 + 0x7c);
  if (*(int *)(iVar4 + 0x60) == 0) {
    uVar3 = FUN_ram_42066304();
    *(undefined4 *)(iVar4 + 0x60) = uVar3;
  }
  iVar4 = *(int *)(param_1 + 0x7c);
  if (*(int *)(iVar4 + 0x44) == 0) {
    uVar3 = FUN_ram_42066304();
    *(undefined4 *)(iVar4 + 0x44) = uVar3;
  }
  if (iVar2 != 0) {
    iVar4 = *(int *)(param_1 + 0x7c);
    if (((*(int *)(iVar4 + 0x60) != 0) && (*(int *)(iVar4 + 0x44) != 0)) &&
       (iVar4 = FUN_ram_42061c68(*(undefined4 *)(iVar4 + 0x74),*(int *)(iVar4 + 0x60),iVar2),
       -1 < iVar4)) {
      iVar4 = *(int *)(param_1 + 0x7c);
      if (*(int *)(iVar4 + 100) != 0) {
        if (*(int *)(iVar4 + 0x4c) == 0) {
          uVar3 = FUN_ram_4205e486();
          *(undefined4 *)(iVar4 + 0x4c) = uVar3;
          iVar4 = *(int *)(param_1 + 0x7c);
          if (*(int *)(iVar4 + 0x4c) == 0) goto LAB_ram_4205f3fa;
        }
        iVar4 = FUN_ram_4205e64c(*(undefined4 *)(iVar4 + 100),*(undefined4 *)(iVar4 + 0x58),iVar2);
        if ((iVar4 < 0) ||
           (iVar4 = FUN_ram_4205e672(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 100),
                                     *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x4c)), iVar4 < 0))
        goto LAB_ram_4205f3fa;
      }
      iVar4 = *(int *)(param_1 + 0x7c);
      if (*(int *)(iVar4 + 0x6c) == 0) {
        uVar1 = 0;
        goto LAB_ram_4205f3fc;
      }
      if (*(int *)(iVar4 + 0x48) == 0) {
        uVar3 = FUN_ram_42066304();
        *(undefined4 *)(iVar4 + 0x48) = uVar3;
        iVar4 = *(int *)(param_1 + 0x7c);
        if (*(int *)(iVar4 + 0x48) == 0) goto LAB_ram_4205f3fa;
      }
      iVar4 = FUN_ram_42066472(*(undefined4 *)(iVar4 + 0x5c),iVar2,*(undefined4 *)(iVar4 + 0x70));
      if (-1 < iVar4) {
        uVar1 = FUN_ram_42066494(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x48),
                                 *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x70));
        uVar1 = uVar1 >> 0x1f;
        goto LAB_ram_4205f3fc;
      }
    }
  }
LAB_ram_4205f3fa:
  uVar1 = 1;
LAB_ram_4205f3fc:
  FUN_ram_4206636c(iVar2,1);
  return -uVar1;
}

