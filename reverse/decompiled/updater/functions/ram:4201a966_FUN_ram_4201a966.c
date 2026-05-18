
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4201a966(int param_1,byte *param_2)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  int *piVar4;
  
  bVar3 = 0;
  iVar1 = 0;
  for (piVar4 = *(int **)(_DAT_ram_3fcb66dc + 4); piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
    piVar2 = piVar4;
    if (piVar4[1] != param_1) {
      bVar3 = bVar3 | *(byte *)(piVar4 + 3) ^ 1;
      piVar2 = (int *)iVar1;
    }
    iVar1 = (int)piVar2;
  }
  *param_2 = bVar3 ^ 1;
  return iVar1;
}

