
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42079998(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = 0;
  iVar1 = 0;
  piVar5 = (int *)(_DAT_ram_3fcc4018 + 0xf0);
  for (iVar4 = 1; iVar4 <= (int)(uint)*(byte *)(*(int *)(gp + -0xb4) + 0x3f6); iVar4 = iVar4 + 1) {
    iVar3 = *piVar5;
    if ((iVar3 != 0) && (iVar2 < *(int *)(iVar3 + 0x108))) {
      iVar1 = iVar3;
      iVar2 = *(int *)(iVar3 + 0x108);
    }
    piVar5 = piVar5 + 1;
  }
  return iVar1;
}

