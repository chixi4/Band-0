
int * FUN_ram_4205012a(int param_1)

{
  undefined4 unaff_retaddr;
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint extraout_a4;
  int *piVar5;
  int *extraout_a5;
  
  if (param_1 - 0x34U < 0xc) {
    iVar2 = (param_1 - 0x34U) * 0x14;
    piVar5 = (int *)(&DAT_ram_3fcc1eb4 + iVar2);
    iVar3 = *piVar5;
    if (iVar3 != 0) {
      uVar4 = (uint)(byte)(&DAT_ram_3fcc1ec3)[iVar2];
      if (*(char *)(iVar2 + 0x3fcc1ec4) == '\0') goto LAB_ram_42050162;
      iVar3 = 0;
      puVar1 = (undefined1 *)register0x00002008;
      if (uVar4 == 0) {
        do {
          register0x00002008 = (BADSPACEBASE *)(puVar1 + -0x10);
          *(undefined4 *)(puVar1 + -4) = unaff_retaddr;
          unaff_retaddr = 0x42050162;
          iVar3 = FUN_ram_4039bf1e(iVar3);
          uVar4 = extraout_a4;
          piVar5 = extraout_a5;
LAB_ram_42050162:
          *(char *)((int)piVar5 + 0xf) = (char)(uVar4 + 1);
          puVar1 = (undefined1 *)register0x00002008;
        } while ((uVar4 + 1 & 0xff) == 0);
        return piVar5;
      }
    }
  }
  return (int *)0x0;
}

