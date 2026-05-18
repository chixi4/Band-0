
void FUN_ram_4201c4d2(int param_1,int param_2,uint param_3,char *param_4,int param_5,code *param_6,
                     code *param_7)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined2 uStack_46;
  char *apcStack_44 [4];
  
  iVar8 = 0;
  apcStack_44[0] = param_4;
  while (*apcStack_44[0] != '\0') {
    uStack_46 = 0;
    iVar7 = FUN_ram_4201c458(apcStack_44,&uStack_46);
    if (iVar7 != 0) {
      iVar7 = (*param_7)(uStack_46);
      iVar8 = iVar8 + iVar7;
    }
  }
  iVar7 = 0;
  apcStack_44[0] = param_4;
  while (*apcStack_44[0] != '\0') {
    uStack_46 = 0;
    iVar2 = FUN_ram_4201c458(apcStack_44,&uStack_46);
    uVar1 = uStack_46;
    if (iVar2 != 0) {
      iVar3 = (*param_6)(uStack_46);
      iVar4 = (*param_7)(uVar1);
      iVar2 = 0;
      if ((iVar3 != 0) && (iVar4 != 0)) {
        iVar5 = 0;
        iVar6 = 0;
        uVar9 = param_3 & 0xffff;
        do {
          iVar2 = 0;
          do {
            if (((int)(uint)*(byte *)((iVar6 + iVar2 >> 3) + iVar3) >> ((iVar5 + -1) - iVar2 & 7U) &
                1U) != 0) {
              FUN_ram_4201f246(((param_2 - iVar8) / 2 + param_1 + iVar7 + iVar2) * 0x10000 >> 0x10,
                               (int)(short)uVar9,0);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar4);
          uVar9 = uVar9 + 1 & 0xffff;
          iVar6 = iVar6 + param_5;
          iVar5 = iVar5 - param_5;
          iVar2 = iVar4;
        } while (((param_3 & 0xffff) + param_5 & 0xffff) != uVar9);
      }
      iVar7 = iVar7 + iVar2;
    }
  }
  return;
}

