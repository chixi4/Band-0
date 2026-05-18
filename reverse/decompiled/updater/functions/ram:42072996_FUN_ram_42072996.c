
int FUN_ram_42072996(uint *param_1,uint param_2,uint *param_3)

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
LAB_ram_420729c8:
  iVar1 = FUN_ram_4202b91a(param_1,param_2,&iStack_48,0x31);
  if (iVar1 == 0) {
    uVar5 = *param_1 + iStack_48;
    puVar7 = puVar2;
    do {
      iVar1 = FUN_ram_4202b91a(param_1,uVar5,aiStack_44,0x30);
      if (iVar1 == 0) {
        pbVar6 = (byte *)*param_1 + aiStack_44[0];
        if (aiStack_44[0] < 1) {
LAB_ram_42072a3c:
          iVar1 = -0x23e0;
          goto LAB_ram_420729e2;
        }
        *puVar7 = (uint)*(byte *)*param_1;
        iVar1 = FUN_ram_4202b91a(param_1,pbVar6,puVar7 + 1,6);
        if (iVar1 != 0) goto LAB_ram_42072a64;
        uVar3 = *param_1;
        puVar7[2] = uVar3;
        pbVar4 = (byte *)(uVar3 + puVar7[1]);
        *param_1 = (uint)pbVar4;
        if ((int)pbVar6 - (int)pbVar4 < 1) goto LAB_ram_42072a3c;
        if ((0x1e < *pbVar4) || ((0x50581008U >> (*pbVar4 & 0x1f) & 1) == 0)) {
          iVar1 = -0x23e2;
          goto LAB_ram_420729e2;
        }
        *param_1 = (uint)(pbVar4 + 1);
        puVar7[3] = (uint)*pbVar4;
        iVar1 = FUN_ram_4202b8a0(param_1,pbVar6,puVar7 + 4);
        if (iVar1 != 0) goto LAB_ram_42072a64;
        uVar3 = *param_1;
        puVar7[5] = uVar3;
        pbVar4 = (byte *)(uVar3 + puVar7[4]);
        *param_1 = (uint)pbVar4;
        if (pbVar6 != pbVar4) {
          iVar1 = -0x23e6;
          goto LAB_ram_420729e2;
        }
        puVar7[6] = 0;
      }
      else {
LAB_ram_42072a64:
        iVar1 = iVar1 + -0x2380;
        if (iVar1 != 0) goto LAB_ram_420729e2;
      }
      if (*param_1 == uVar5) goto LAB_ram_42072af4;
      *(undefined1 *)(puVar7 + 7) = 1;
      puVar2 = (uint *)FUN_ram_4202939a(1,0x20);
      puVar7[6] = (uint)puVar2;
      puVar7 = puVar2;
      if (puVar2 == (uint *)0x0) goto LAB_ram_42072adc;
    } while( true );
  }
  iVar1 = iVar1 + -0x2380;
  goto LAB_ram_420729e2;
LAB_ram_42072af4:
  if (uVar5 == param_2) {
    return 0;
  }
  puVar2 = (uint *)FUN_ram_4202939a(1,0x20);
  puVar7[6] = (uint)puVar2;
  if (puVar2 == (uint *)0x0) {
LAB_ram_42072adc:
    iVar1 = -0x2880;
LAB_ram_420729e2:
    FUN_ram_4202bcde(param_3[6]);
    param_3[6] = 0;
    return iVar1;
  }
  goto LAB_ram_420729c8;
}

