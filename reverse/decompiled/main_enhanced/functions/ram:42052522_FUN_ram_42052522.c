
void FUN_ram_42052522(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  short sVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar9 = param_1 * 0x114;
  if (2 < *(byte *)(iVar9 + 0x3fcc2089)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  if ((*(int *)(&DAT_ram_3fcc2040 + (uint)*(byte *)(iVar9 + 0x3fcc2089) * 4) == 0) &&
     (*(char *)(iVar9 + 0x3fcc218e) == '\0')) {
    FUN_ram_42052446(param_1,0);
    (&DAT_ram_3fcc2088)[iVar9] = 0;
  }
  else {
    iVar10 = param_1 * 0x114;
    sVar3 = (*(code *)&SUB_ram_400104a8)(iVar10 + 0x3fcc208e);
    iVar9 = FUN_ram_42053b52(0x36,sVar3 + 0x12,0x280);
    if (iVar9 != 0) {
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uVar4 = FUN_ram_420523aa(*(undefined2 *)(&DAT_ram_3fcc2086 + iVar10));
      uStack_3c._0_3_ = CONCAT12(1,uVar4);
      uStack_38 = CONCAT22(uStack_38._2_2_,0x100);
      FUN_ram_42053fa4(iVar9,&uStack_3c,0xc);
      pcVar1 = &DAT_ram_3fcc208d + iVar10;
      uVar5 = 0xc;
      do {
        uVar6 = 0;
        pcVar2 = pcVar1 + 1;
        for (pcVar1 = pcVar2; (*pcVar1 != '.' && (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
          uVar6 = uVar6 + 1 & 0xff;
        }
        if (0xfffe < uVar5 + uVar6) goto LAB_ram_4205262a;
        FUN_ram_4205410c(iVar9);
        FUN_ram_42054020(iVar9,pcVar2,(int)pcVar1 - (int)pcVar2 & 0xffff,uVar5 + 1 & 0xffff);
        uVar6 = uVar5 + uVar6 & 0xffff;
        uVar5 = uVar6 + 1 & 0xffff;
      } while (*pcVar1 != '\0');
      FUN_ram_4205410c(iVar9,uVar5,0);
      uStack_40 = 0x1000100;
      FUN_ram_42054020(iVar9,&uStack_40,4,uVar6 + 2 & 0xffff);
      param_1 = param_1 * 0x114;
      if (*(char *)(param_1 + 0x3fcc218e) == '\0') {
        uVar8 = 0x35;
        puVar7 = &DAT_ram_3fcc2040 + (uint)*(byte *)(param_1 + 0x3fcc2089) * 4;
      }
      else {
        uVar8 = 0x14e9;
        puVar7 = &DAT_ram_3c0f74cc;
      }
      FUN_ram_42058c24(*(undefined4 *)
                        (&DAT_ram_3fcc24cc + (uint)(byte)(&DAT_ram_3fcc208d)[param_1] * 4),iVar9,
                       puVar7,uVar8);
LAB_ram_4205262a:
      FUN_ram_42053ac4(iVar9);
    }
  }
  return;
}

