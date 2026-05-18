
int FUN_ram_420aaec0(uint *param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  uint *puVar7;
  int iStack_48;
  int aiStack_44 [4];
  
  puVar2 = param_3;
LAB_ram_420aaef2:
  iVar1 = FUN_ram_4206e970(param_1,param_2,&iStack_48,0x31);
  if (iVar1 == 0) {
    uVar5 = *param_1 + iStack_48;
    puVar7 = puVar2;
    do {
      iVar1 = FUN_ram_4206e970(param_1,uVar5,aiStack_44,0x30);
      if (iVar1 == 0) {
        pbVar6 = (byte *)*param_1 + aiStack_44[0];
        if (aiStack_44[0] < 1) {
LAB_ram_420aaf66:
          iVar1 = -0x23e0;
          goto LAB_ram_420aaf0c;
        }
        *puVar7 = (uint)*(byte *)*param_1;
        iVar1 = FUN_ram_4206e970(param_1,pbVar6,puVar7 + 1,6);
        if (iVar1 != 0) goto LAB_ram_420aaf8e;
        uVar3 = *param_1;
        puVar7[2] = uVar3;
        pbVar4 = (byte *)(uVar3 + puVar7[1]);
        *param_1 = (uint)pbVar4;
        if ((int)pbVar6 - (int)pbVar4 < 1) goto LAB_ram_420aaf66;
        if ((0x1e < *pbVar4) || ((0x50581008U >> (*pbVar4 & 0x1f) & 1) == 0)) {
          iVar1 = -0x23e2;
          goto LAB_ram_420aaf0c;
        }
        *param_1 = (uint)(pbVar4 + 1);
        puVar7[3] = (uint)*pbVar4;
        iVar1 = FUN_ram_4206e8f6(param_1,pbVar6,puVar7 + 4);
        if (iVar1 != 0) goto LAB_ram_420aaf8e;
        uVar3 = *param_1;
        puVar7[5] = uVar3;
        pbVar4 = (byte *)(uVar3 + puVar7[4]);
        *param_1 = (uint)pbVar4;
        if (pbVar6 != pbVar4) {
          iVar1 = -0x23e6;
          goto LAB_ram_420aaf0c;
        }
        puVar7[6] = 0;
      }
      else {
LAB_ram_420aaf8e:
        iVar1 = iVar1 + -0x2380;
        if (iVar1 != 0) goto LAB_ram_420aaf0c;
      }
      if (*param_1 == uVar5) goto LAB_ram_420ab01e;
      *(undefined1 *)(puVar7 + 7) = 1;
      puVar2 = (uint *)FUN_ram_4206d7ce(1,0x20);
      puVar7[6] = (uint)puVar2;
      puVar7 = puVar2;
      if (puVar2 == (uint *)0x0) goto LAB_ram_420ab006;
    } while( true );
  }
  iVar1 = iVar1 + -0x2380;
  goto LAB_ram_420aaf0c;
LAB_ram_420ab01e:
  if (uVar5 == param_2) {
    return 0;
  }
  puVar2 = (uint *)FUN_ram_4206d7ce(1,0x20);
  puVar7[6] = (uint)puVar2;
  if (puVar2 == (uint *)0x0) {
LAB_ram_420ab006:
    iVar1 = -0x2880;
LAB_ram_420aaf0c:
    FUN_ram_4206ed34(param_3[6]);
    param_3[6] = 0;
    return iVar1;
  }
  goto LAB_ram_420aaef2;
}

