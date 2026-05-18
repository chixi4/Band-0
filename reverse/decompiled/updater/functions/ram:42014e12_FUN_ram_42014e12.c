
int FUN_ram_42014e12(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int aiStack_34 [4];
  
  if (((param_3 < 0x41) && (param_4 < 0x41)) && ((int)param_3 <= (int)param_4)) {
    aiStack_34[0] = 0;
    iVar3 = FUN_ram_42014ba8(0x3c071e68,0xffffffff,param_1,param_2,aiStack_34);
    if (iVar3 == 0) {
      FUN_ram_40390ff2(0x3fcb6688);
      iVar1 = aiStack_34[0];
      iVar2 = param_3 * 3 + gp + -0x600;
      iVar5 = iVar2;
      uVar7 = param_3;
LAB_ram_42014e80:
      if (param_4 != uVar7) {
        if (*(char *)(iVar5 + 1) == -1) goto LAB_ram_42014f12;
        iVar3 = aiStack_34[0] * 4;
        thunk_FUN_ram_40390608(*(undefined4 *)(&DAT_ram_3fcb2080 + iVar3));
        *(undefined4 *)(&DAT_ram_3fcb2080 + iVar3) = 0;
        for (; (int)param_3 < (int)uVar7; param_3 = param_3 + 1) {
          if (*(char *)(iVar2 + 1) == iVar1) {
            puVar6 = (undefined1 *)(param_3 * 3 + gp + -0x600);
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            *(undefined1 *)(iVar2 + 1) = 0xff;
            *(undefined1 *)(iVar2 + 2) = 0xff;
          }
          iVar2 = iVar2 + 3;
        }
        FUN_ram_4039100a(0x3fcb6688);
        goto LAB_ram_42014ece;
      }
      FUN_ram_4039100a(0x3fcb6688);
    }
  }
  else {
LAB_ram_42014ece:
    iVar3 = 0x102;
  }
  return iVar3;
LAB_ram_42014f12:
  pbVar4 = (byte *)(uVar7 * 3 + gp + -0x600);
  *pbVar4 = *pbVar4 | 1;
  *(char *)(iVar5 + 2) = (char)uVar7;
  *(char *)(iVar5 + 1) = (char)aiStack_34[0];
  uVar7 = uVar7 + 1;
  iVar5 = iVar5 + 3;
  goto LAB_ram_42014e80;
}

