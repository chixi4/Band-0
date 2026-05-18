
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4207cce2(undefined4 param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  
  iVar2 = _DAT_ram_3fcc4018;
  iVar4 = FUN_ram_42079402();
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  if (iVar4 == 1) {
    if ((DAT_ram_3fcc425a != '\x02') || ((*(uint *)(iVar2 + 300) & 0x1000000) != 0)) {
      puVar6 = &DAT_ram_3c0fc2b0;
      goto LAB_ram_4207cd3c;
    }
  }
  else if ((iVar4 == 2) &&
          ((DAT_ram_3fcc425b != '\x02' || ((*(uint *)(iVar2 + 300) & 0x1000000) != 0)))) {
    puVar6 = &DAT_ram_3c0fc2f8;
    goto LAB_ram_4207cd3c;
  }
  if ((uint)(param_4 - param_3) < 5) {
    puVar6 = &DAT_ram_3c0fc340;
  }
  else {
    if ((*(char *)(param_3 + 2) != 'H') || (*(byte *)(param_3 + 3) == 0)) {
      FUN_ram_4207a038(1,0x4000,4,&DAT_ram_3c0fc374);
      return 0;
    }
    if ((int)(*(byte *)(param_3 + 3) + 3) < param_4 - param_3) {
      bVar1 = true;
      if ((*(byte *)(param_3 + 4) & 4) != 0) {
        iVar4 = (*(code *)&SUB_ram_40011f9c)(param_2 + 10);
        if ((iVar4 == 0) || ((*(uint *)(iVar4 + 0xc) & 1) == 0)) {
          puVar6 = &DAT_ram_3c0fc3bc;
          goto LAB_ram_4207cd3c;
        }
        FUN_ram_4207a038(1,0x4000,4,&DAT_ram_3c0fc3f8);
        bVar1 = false;
      }
      if ((*(byte *)(param_3 + 4) & 2) != 0) {
        FUN_ram_4207a038(1,0x4000,3,&DAT_ram_3c0ff9ac);
        bVar1 = false;
      }
      pcVar10 = (char *)(*(byte *)(param_3 + 3) + 4 + param_3);
      while( true ) {
        if (((param_4 - (int)pcVar10 < 3) || (*pcVar10 != 'I')) ||
           (uVar3 = (uint)(byte)pcVar10[1], uVar3 == 0)) goto LAB_ram_4207ce84;
        FUN_ram_4207a038(1,0x4000,4,&DAT_ram_3c0fc434);
        if ((param_4 - (int)pcVar10) + -1 <= (int)uVar3) break;
        FUN_ram_4207a038(1,0x4000,4,&DAT_ram_3c0fc458,pcVar10[2]);
        pbVar5 = (byte *)FUN_ram_4207940a();
        for (iVar4 = 0; iVar4 < (int)(uVar3 - 1); iVar4 = iVar4 + 1) {
          uVar8 = (uint)(byte)pcVar10[iVar4 + 3];
          uVar9 = (uint)*pbVar5;
          if (uVar9 != uVar8) {
            if ((pbVar5[1] == 1) && ((uVar9 - 1 & 0xff) < 9)) {
              iVar7 = uVar9 + 4;
            }
            else {
              iVar7 = uVar9 - 4;
            }
            iVar7 = (int)(uVar9 + iVar7) / 2;
            if ((iVar7 + -5 <= (int)uVar8) && ((int)uVar8 <= iVar7 + 5)) {
              FUN_ram_4207a038(1,0x4000,4,&DAT_ram_3c0fc490);
              bVar1 = false;
            }
          }
        }
        pcVar10 = pcVar10 + uVar3 + 2;
      }
      FUN_ram_4207a038(1,0x4000,3,&DAT_ram_3c0ff9e4);
LAB_ram_4207ce84:
      if (!bVar1) {
        *(undefined1 *)(iVar2 + 299) = 0;
        FUN_ram_4207c908(iVar2 + 0x12a);
        return 0;
      }
      return 0;
    }
    puVar6 = &DAT_ram_3c0fc3a0;
  }
LAB_ram_4207cd3c:
  FUN_ram_4207a038(1,0x4000,4,puVar6);
  return 0;
}

