
int FUN_ram_4206824e(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                    undefined4 param_6,undefined4 *param_7)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  uint uStack_44;
  byte local_40 [16];
  
  if (param_1 == (int *)0x0) {
    return -0x1480;
  }
  pcVar4 = (char *)(*(code *)&SUB_ram_400104ac)(param_4);
  if (pcVar4 == (char *)0x0) {
    return -0x1080;
  }
  pcVar5 = (char *)(*(code *)&SUB_ram_400104ac)(param_4,param_3);
  if (pcVar5 <= pcVar4) {
    return -0x1080;
  }
  iVar6 = (*(code *)&SUB_ram_400104a8)(param_2);
  pcVar4 = pcVar4 + iVar6;
  pcVar4 = pcVar4 + (*pcVar4 == ' ') + (pcVar4[*pcVar4 == ' '] == '\r');
  if (*pcVar4 != '\n') {
    return -0x1080;
  }
  iVar6 = (*(code *)&SUB_ram_400104a8)(param_3);
  pcVar10 = pcVar5 + iVar6;
  pcVar3 = pcVar4 + 1;
  pcVar10 = pcVar10 + (*pcVar10 == ' ');
  *param_7 = pcVar10 + (*pcVar10 == '\r') + ((uint)(pcVar10[*pcVar10 == '\r'] == '\n') - param_4);
  if (((int)pcVar5 - (int)pcVar3 < 0x16) ||
     (iVar6 = FUN_ram_40399d6c(pcVar3,0x3c0735ac,0x16), iVar6 != 0)) {
    iVar6 = 0;
    bVar2 = false;
  }
  else {
    bVar2 = pcVar4[0x17] == '\r';
    if (pcVar4[bVar2 + 0x17] != '\n') {
      return -0x1100;
    }
    pcVar3 = pcVar4 + bVar2 + 0x18;
    if ((int)pcVar5 - (int)pcVar3 < 0xe) {
      return -0x1280;
    }
    iVar6 = FUN_ram_40399d6c(pcVar3,0x3c0735c4,0xe);
    if (iVar6 != 0) {
      return -0x1280;
    }
    if ((int)pcVar5 - (int)pcVar3 < 0x16) {
      return -0x1280;
    }
    iVar6 = FUN_ram_40399d6c(pcVar3,0x3c0735d4,0x16);
    if (iVar6 == 0) {
      iVar6 = 5;
    }
    else {
      iVar6 = FUN_ram_40399d6c(pcVar3,0x3c0735ec,0x16);
      if (iVar6 == 0) {
        iVar6 = 6;
      }
      else {
        iVar7 = FUN_ram_40399d6c(pcVar3,0x3c073604,0x16);
        iVar6 = 7;
        if (iVar7 != 0) {
          return -0x1280;
        }
      }
    }
    if ((int)pcVar5 - (int)(pcVar4 + bVar2 + 0x2e) < 0x20) {
      return -0x1200;
    }
    uVar12 = 0;
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_40[4] = 0;
    local_40[5] = 0;
    local_40[6] = 0;
    local_40[7] = 0;
    local_40[8] = 0;
    local_40[9] = 0;
    local_40[10] = 0;
    local_40[0xb] = 0;
    local_40[0xc] = 0;
    local_40[0xd] = 0;
    local_40[0xe] = 0;
    local_40[0xf] = 0;
    do {
      cVar1 = pcVar4[uVar12 + bVar2 + 0x17 + 0x17];
      bVar13 = cVar1 - 0x30;
      if (9 < (byte)(cVar1 - 0x30U)) {
        if ((byte)(cVar1 + 0xbfU) < 6) {
          bVar13 = cVar1 - 0x37;
        }
        else {
          if (5 < (byte)(cVar1 + 0x9fU)) {
            return -0x1200;
          }
          bVar13 = cVar1 + 0xa9;
        }
      }
      if ((uVar12 & 1) == 0) {
        bVar13 = bVar13 << 4;
      }
      uVar11 = uVar12 >> 1;
      uVar12 = uVar12 + 1;
      local_40[uVar11] = bVar13 | local_40[uVar11];
    } while (uVar12 != 0x20);
    iVar7 = (uint)(pcVar4[bVar2 + 0x4e] == '\r') + bVar2 + 0x17;
    if (pcVar4[iVar7 + 0x37] != '\n') {
      return -0x1100;
    }
    pcVar3 = pcVar4 + iVar7 + 0x38;
    bVar2 = true;
  }
  if (pcVar5 <= pcVar3) {
    return -0x1100;
  }
  iVar7 = FUN_ram_42069180(0,0,&uStack_44,pcVar3,(int)pcVar5 - (int)pcVar3);
  if (iVar7 == -0x2c) {
    return -0x112c;
  }
  if (uStack_44 == 0) {
    return -0x1480;
  }
  iVar7 = FUN_ram_4202939a(1);
  if (iVar7 == 0) {
    return -0x1180;
  }
  iVar8 = FUN_ram_42069180(iVar7,uStack_44,&uStack_44,pcVar3,(int)pcVar5 - (int)pcVar3);
  if (iVar8 != 0) {
    FUN_ram_420293c8(iVar7,uStack_44);
    return iVar8 + -0x1100;
  }
  uVar12 = uStack_44;
  if (!bVar2) goto LAB_ram_4206858c;
  if (param_5 == 0) {
    FUN_ram_420293c8(iVar7,uStack_44);
    return -0x1300;
  }
  if (iVar6 == 5) {
    uVar9 = 0x10;
LAB_ram_4206853a:
    iVar6 = FUN_ram_420680f0(local_40,uVar9,iVar7,uStack_44,param_5,param_6);
    if (iVar6 != 0) goto LAB_ram_42068544;
  }
  else {
    if (iVar6 == 6) {
      uVar9 = 0x18;
      goto LAB_ram_4206853a;
    }
    if (iVar6 == 7) {
      uVar9 = 0x20;
      goto LAB_ram_4206853a;
    }
  }
  if (uStack_44 == 0) {
    iVar6 = -0x1100;
  }
  else {
    uVar11 = (uint)*(byte *)(iVar7 + uStack_44 + -1);
    if (uVar11 <= uStack_44) {
      for (uVar14 = uStack_44 - uVar11; uVar12 = uStack_44 - uVar11, uVar14 < uStack_44;
          uVar14 = uVar14 + 1) {
        if (*(byte *)(iVar7 + uVar14) != uVar11) goto LAB_ram_420685b2;
      }
LAB_ram_4206858c:
      uStack_44 = uVar12;
      *param_1 = iVar7;
      param_1[1] = uStack_44;
      return 0;
    }
LAB_ram_420685b2:
    iVar6 = -0x1380;
  }
LAB_ram_42068544:
  FUN_ram_420293c8(iVar7,uStack_44);
  return iVar6;
}

