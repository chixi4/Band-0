
void FUN_ram_420738d0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)FUN_ram_42073968();
  iVar4 = *piVar1;
  if (iVar4 != 0) {
    uVar2 = *(uint *)(iVar4 + 0x30) + 0xbcd4d500;
    if (((uint)(uVar2 < *(uint *)(iVar4 + 0x30)) + *(int *)(iVar4 + 0x34) + -0x474e5544 != 0) ||
       (1 < uVar2)) {
      *piVar1 = 0;
LAB_ram_42073904:
      FUN_ram_42073af6(iVar4 + 0x30);
      return;
    }
    iVar3 = *(int *)(iVar4 + 0x14);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
      if (iVar3 == 0) {
        *piVar1 = *(int *)(iVar4 + 0x10);
      }
    }
    else {
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        *piVar1 = *(int *)(iVar4 + 0x10);
        goto LAB_ram_42073904;
      }
      if (iVar3 == -1) {
        FUN_ram_42073a5e();
        return;
      }
    }
    *(int *)(iVar4 + 0x14) = iVar3;
  }
  return;
}

