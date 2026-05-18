
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42019edc(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  undefined1 auStack_34 [12];
  
  iVar3 = *(int *)(&DAT_ram_3c0d584c + _DAT_ram_3fcc5048 * 4);
  psVar5 = (short *)&DAT_ram_3fcbaca0;
  for (iVar6 = 0; iVar6 < iVar3; iVar6 = iVar6 + 1) {
    iVar4 = ((*(byte *)(iVar6 + 0x3fcbac94) - 1) * 4 + (uint)*(byte *)(iVar6 + 0x3fcbac88)) * 8;
    sVar1 = *psVar5;
    sVar2 = psVar5[1];
    iVar4 = thunk_FUN_ram_42020df4
                      (*(undefined4 *)(&DAT_ram_3c0d578c + iVar4),
                       *(undefined4 *)(&DAT_ram_3c0d5790 + iVar4),0x3fcbab4c,0x139,auStack_34);
    if (iVar4 == 0) {
      FUN_ram_4201f2b0((int)sVar1,(int)sVar2,0x32,0x32,0x3fcbab4c);
    }
    psVar5 = psVar5 + 2;
  }
  return;
}

