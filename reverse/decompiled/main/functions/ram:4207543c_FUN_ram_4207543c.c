
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207543c(int param_1,int param_2,int param_3,int *param_4)

{
  undefined1 uVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  undefined2 uVar5;
  short sVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int aiStack_34 [2];
  
  iVar13 = *param_4;
  iVar14 = *(int *)(gp + -0xb4);
  (*(code *)&SUB_ram_40010488)(param_3,0,0x34);
  (*(code *)&SUB_ram_40010488)(param_2,0,8);
  *(undefined2 *)(param_2 + 8) = *(undefined2 *)(*(int *)(gp + -0xb4) + 0x3f8);
  uVar5 = (*(code *)&SUB_ram_40012130)(param_4);
  *(int *)(param_3 + 4) = param_2 + 10;
  *(undefined1 *)(param_2 + 0xc) = 0;
  uVar4 = _DAT_ram_3fcc4020;
  *(undefined2 *)(param_2 + 10) = uVar5;
  iVar12 = param_2 + 0xe;
  if ((uVar4 & 0x8000000) == 0) {
    if (*(char *)(*(int *)(gp + -0xb4) + 0x3f5) != '\x01') {
      *(char *)(param_2 + 0xd) = (char)*(undefined4 *)(iVar14 + 0x368);
      iVar12 = FUN_ram_4039c11e(iVar12,iVar14 + 0x36c,*(undefined4 *)(iVar14 + 0x368));
      iVar12 = iVar12 + *(int *)(iVar14 + 0x368);
      goto LAB_ram_420754fa;
    }
  }
  *(undefined1 *)(param_2 + 0xd) = 0;
LAB_ram_420754fa:
  uVar7 = (*(code *)&SUB_ram_40012054)(iVar12,iVar13 + 0x13d);
  puVar8 = (undefined1 *)FUN_ram_4207940a();
  uVar9 = FUN_ram_420794ea(*puVar8);
  puVar10 = (undefined1 *)FUN_ram_42073f82(uVar7,uVar9);
  iVar12 = *(int *)(iVar13 + 0x120);
  *(undefined1 **)(param_3 + 0xc) = puVar10;
  puVar8 = puVar10;
  if (iVar12 == 1) {
    *puVar10 = 5;
    puVar10[1] = 4;
    puVar10[2] = 0;
    puVar8 = puVar10 + 6;
    uVar1 = *(undefined1 *)(*(int *)(gp + -0xb4) + 0x50b);
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[3] = uVar1;
    *(undefined2 *)(param_3 + 0x18) = 1;
  }
  *(undefined1 **)(param_3 + 0x14) = puVar8;
  if ((DAT_ram_3fcc41a7 == '\x01') && (DAT_ram_3fcc41a8 != '\0')) {
    puVar8 = (undefined1 *)(*(code *)&SUB_ram_400120c8)();
  }
  puVar8 = (undefined1 *)(*(code *)&SUB_ram_400120d4)(puVar8,&DAT_ram_3fcc4004);
  cVar2 = *(char *)(iVar13 + 0x13c);
  if ((byte)(cVar2 - 2U) < 2) {
    *(undefined1 **)(param_3 + 0x1c) = puVar8;
    *puVar8 = 0x2a;
    puVar8[1] = 1;
    bVar11 = (byte)(_DAT_ram_3fcc4020 >> 0x13) & 2;
    if ((_DAT_ram_3fcc4020 & 0x200000) != 0) {
      bVar11 = bVar11 | 4;
    }
    puVar8[2] = bVar11;
    puVar8 = puVar8 + 3;
  }
  iVar12 = FUN_ram_42073fa4(puVar8,iVar13 + 0x13d);
  if (*(int *)(iVar13 + 0x124) != 0) {
    aiStack_34[0] = 0;
    iVar14 = (**(code **)(_DAT_ram_3fcc4178 + 0x2c))(aiStack_34);
    if (iVar14 != 0) {
      FUN_ram_4039c11e(iVar12,iVar14,aiStack_34[0]);
      iVar12 = iVar12 + aiStack_34[0];
    }
  }
  if (cVar2 == '\x03') {
    uVar7 = FUN_ram_4207d256(iVar12,param_4);
    *(undefined4 *)(param_3 + 0x20) = uVar7;
    iVar12 = FUN_ram_4207d3fc(uVar7,param_4);
  }
  uVar7 = FUN_ram_4207414a(iVar12,param_4);
  if ((*(uint *)(iVar13 + 0xa4) & 0x2000) != 0) {
    uVar7 = (*(code *)&SUB_ram_400120c0)(uVar7,0);
  }
  uVar7 = FUN_ram_42074038(uVar7,&DAT_ram_3fcc4004);
  if ((_DAT_ram_3fcc4088 != 0) && (*(int *)(_DAT_ram_3fcc4088 + 4) != 0)) {
    uVar7 = FUN_ram_4207b3d4(uVar7,_DAT_ram_3fcc4088 + 1,*(int *)(_DAT_ram_3fcc4088 + 4),
                             *(undefined1 *)(_DAT_ram_3fcc4088 + 8));
  }
  uVar7 = (*(code *)&SUB_ram_400120bc)(uVar7,0);
  sVar6 = FUN_ram_4207423e(uVar7,0);
  sVar3 = *(short *)(param_1 + 0x14);
  *(short *)(param_3 + 0x1a) = sVar6 - (short)*(undefined4 *)(param_3 + 0x14);
  *(short *)(param_1 + 0x16) = sVar6 - ((short)*(undefined4 *)(*(int *)(param_1 + 4) + 4) + sVar3);
  return;
}

