
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4208b7ba(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  undefined3 uStack_3c;
  char cStack_39;
  uint uStack_38;
  undefined4 uStack_34;
  
  iVar2 = _DAT_ram_3fcc4014;
  iVar8 = *(int *)(gp + -0xb4);
  iVar4 = FUN_ram_42079402();
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar9 = 0;
    uVar10 = 0;
    bVar11 = 0;
    uVar7 = (int)(*(byte *)(param_2 + 1) - 3) / 3 & 0xff;
    if ((iVar4 != 1) || (uVar7 < 2)) {
      uStack_38 = 0;
      uStack_34 = 0;
      pbVar3 = (byte *)(param_2 + 5);
      uStack_3c = *(undefined3 *)(param_2 + 2);
      bVar1 = false;
      cStack_39 = '\0';
      for (uVar6 = 0; uVar6 != uVar7; uVar6 = uVar6 + 1 & 0xff) {
        if (((iVar4 == 1) && (uVar5 = (uint)*pbVar3, uVar5 < 0xf)) && (pbVar3[1] + uVar5 < 0x10)) {
          bVar11 = pbVar3[2];
          bVar1 = true;
          uVar9 = uVar5;
          uVar10 = (uint)pbVar3[1];
        }
        pbVar3 = pbVar3 + 3;
      }
      if (bVar1) {
        uStack_38 = (uint)CONCAT11(bVar11,(char)uVar10);
        cStack_39 = (char)uVar9;
      }
      if (cStack_39 != '\0') {
        if (((*(int *)(iVar8 + 0x40c) == 0) && ((*(int *)(iVar2 + 0x98) - 3U & 0xfffffffd) == 0)) &&
           (iVar4 = FUN_ram_4039c0e0(iVar8 + 0x404,&uStack_3c,0xc), iVar4 != 0)) {
          FUN_ram_4208b786();
          DAT_ram_3fcc41d4 = 1;
        }
        iVar4 = FUN_ram_4039c0e0(param_1,&uStack_3c,0xc);
        if (iVar4 != 0) {
          FUN_ram_4039c11e(param_1,&uStack_3c,0xc);
          DAT_ram_3fcc41d4 = 1;
          if ((*(int *)(iVar8 + 0x40c) != 1) && ((*(int *)(iVar2 + 0x98) - 3U & 0xfffffffd) == 0)) {
            FUN_ram_4208b786();
          }
        }
        return 1;
      }
    }
  }
  return 0;
}

