
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420b09a6(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  ushort uStack_54;
  ushort uStack_52;
  ushort uStack_50;
  ushort uStack_4e;
  ushort uStack_4c;
  ushort uStack_4a;
  int iStack_48;
  char *apcStack_44 [4];
  
  iVar3 = FUN_ram_420b171e();
  pcVar4 = (char *)FUN_ram_420b11c4(param_1,0x3c0a8644);
  iVar5 = _DAT_ram_3fcc540c;
  if (pcVar4 == (char *)0x0) {
    _DAT_ram_3fcc5410 = 0;
    _DAT_ram_3fcc5414 = 0;
    *(undefined **)(gp + -0x71c) = &DAT_ram_3c0c552c;
    *(undefined **)(gp + -0x718) = &DAT_ram_3c0c552c;
    *(undefined1 *)(iVar3 + 8) = 0x4a;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    *(undefined4 *)(iVar3 + 0x18) = 0;
    *(undefined4 *)(iVar3 + 0x20) = 0;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    *(undefined4 *)(iVar3 + 0x28) = 0;
    *(undefined1 *)(iVar3 + 0x30) = 0x4a;
    *(undefined4 *)(iVar3 + 0x34) = 0;
    *(undefined4 *)(iVar3 + 0x38) = 0;
    *(undefined4 *)(iVar3 + 0x3c) = 0;
    *(undefined4 *)(iVar3 + 0x40) = 0;
    *(undefined4 *)(iVar3 + 0x48) = 0;
    *(undefined4 *)(iVar3 + 0x4c) = 0;
    *(undefined4 *)(iVar3 + 0x50) = 0;
    thunk_FUN_ram_40390634(iVar5);
    _DAT_ram_3fcc540c = 0;
    return;
  }
  if ((_DAT_ram_3fcc540c != 0) && (iVar5 = FUN_ram_4039c438(), iVar5 == 0)) {
    return;
  }
  thunk_FUN_ram_40390634(_DAT_ram_3fcc540c);
  iVar5 = (*(code *)&SUB_ram_400104a8)(pcVar4);
  _DAT_ram_3fcc540c = FUN_ram_4039c0d0(param_1,iVar5 + 1);
  if (_DAT_ram_3fcc540c != 0) {
    FUN_ram_4039c54e(_DAT_ram_3fcc540c,pcVar4);
  }
  _DAT_ram_3fcc5414 = 0;
  *(undefined **)(gp + -0x71c) = &DAT_ram_3c0c39bc;
  *(undefined **)(gp + -0x718) = &DAT_ram_3c0c39bc;
  _DAT_ram_3fcc5410 = 0;
  *(undefined1 *)(iVar3 + 8) = 0x4a;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined4 *)(iVar3 + 0x28) = 0;
  *(undefined1 *)(iVar3 + 0x30) = 0x4a;
  *(undefined4 *)(iVar3 + 0x34) = 0;
  *(undefined4 *)(iVar3 + 0x38) = 0;
  *(undefined4 *)(iVar3 + 0x3c) = 0;
  *(undefined4 *)(iVar3 + 0x40) = 0;
  *(undefined4 *)(iVar3 + 0x48) = 0;
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  *(undefined4 *)(iVar3 + 0x50) = 0;
  pcVar4 = pcVar4 + (*pcVar4 == ':');
  if (*pcVar4 == '<') {
    pcVar10 = pcVar4 + 1;
    iVar5 = (*(code *)&SUB_ram_400106dc)(pcVar10,&DAT_ram_3c0c5530,0x3fcc4dec,&iStack_48);
    if (iVar5 < 1) {
      return;
    }
    if (7 < iStack_48 - 3U) {
      return;
    }
    pcVar4 = pcVar4 + 2;
    if (pcVar10[iStack_48] != '>') {
      return;
    }
  }
  else {
    iVar5 = (*(code *)&SUB_ram_400106dc)(pcVar4,&DAT_ram_3c0c5544,0x3fcc4dec,&iStack_48);
    if (iVar5 < 1) {
      return;
    }
    if (7 < iStack_48 - 3U) {
      return;
    }
  }
  pcVar4 = pcVar4 + iStack_48;
  if (*pcVar4 == '-') {
    pcVar4 = pcVar4 + 1;
    iVar5 = -1;
  }
  else {
    iVar5 = 1;
    pcVar4 = pcVar4 + (*pcVar4 == '+');
  }
  uStack_52 = 0;
  uStack_50 = 0;
  iVar6 = (*(code *)&SUB_ram_400106dc)
                    (pcVar4,"k before hard problems.",&uStack_54,&iStack_48,&uStack_52,&iStack_48,
                     &uStack_50);
  if (iVar6 < 1) {
    return;
  }
  pcVar4 = pcVar4 + iStack_48;
  iVar5 = ((uint)uStack_52 * 0x3c + (uint)uStack_50 + (uint)uStack_54 * 0xe10) * iVar5;
  if (*pcVar4 == '<') {
    pcVar10 = pcVar4 + 1;
    iVar6 = (*(code *)&SUB_ram_400106dc)(pcVar10,&DAT_ram_3c0c5530,0x3fcc4de0,&iStack_48);
    if ((0 < iVar6) || (pcVar4[1] != '>')) {
      if (7 < iStack_48 - 3U) {
        return;
      }
      pcVar4 = pcVar4 + 2;
      if (pcVar10[iStack_48] != '>') {
        return;
      }
LAB_ram_420b0c86:
      pcVar4 = pcVar4 + iStack_48;
      if (*pcVar4 == '-') {
        pcVar4 = pcVar4 + 1;
        iVar6 = -1;
      }
      else {
        iVar6 = 1;
        pcVar4 = pcVar4 + (*pcVar4 == '+');
      }
      uStack_54 = 0;
      uStack_52 = 0;
      uStack_50 = 0;
      iStack_48 = 0;
      iVar7 = (*(code *)&SUB_ram_400106dc)
                        (pcVar4,"k before hard problems.",&uStack_54,&iStack_48,&uStack_52,
                         &iStack_48,&uStack_50);
      if (iVar7 < 1) {
        iVar6 = iVar5 + -0xe10;
      }
      else {
        iVar6 = ((uint)uStack_52 * 0x3c + (uint)uStack_50 + (uint)uStack_54 * 0xe10) * iVar6;
      }
      pcVar4 = pcVar4 + iStack_48;
      puVar11 = (undefined1 *)(iVar3 + 8);
      bVar2 = false;
      do {
        bVar1 = bVar2;
        pcVar4 = pcVar4 + (*pcVar4 == ',');
        if (*pcVar4 == 'M') {
          iVar7 = (*(code *)&SUB_ram_400106dc)
                            (pcVar4,"ms.",&uStack_4e,&iStack_48,&uStack_4c,&iStack_48,&uStack_4a);
          if (iVar7 != 3) {
            return;
          }
          if (0xb < (uStack_4e - 1 & 0xffff)) {
            return;
          }
          if (4 < (uStack_4c - 1 & 0xffff)) {
            return;
          }
          if (6 < uStack_4a) {
            return;
          }
          *puVar11 = 0x4d;
          *(uint *)(puVar11 + 4) = (uint)uStack_4e;
          *(uint *)(puVar11 + 8) = (uint)uStack_4c;
          *(uint *)(puVar11 + 0xc) = (uint)uStack_4a;
          pcVar10 = pcVar4 + iStack_48;
        }
        else {
          uVar9 = 0x44;
          if (*pcVar4 == 'J') {
            pcVar4 = pcVar4 + 1;
            uVar9 = 0x4a;
          }
          uStack_4a = (*(code *)&SUB_ram_4001058c)(pcVar4,apcStack_44,10);
          pcVar10 = apcStack_44[0];
          if (apcStack_44[0] == pcVar4) {
            if (bVar1) {
              *(undefined1 *)(iVar3 + 0x30) = 0x4d;
              *(undefined4 *)(iVar3 + 0x34) = 0xb;
              *(undefined4 *)(iVar3 + 0x38) = 1;
              *(undefined4 *)(iVar3 + 0x3c) = 0;
            }
            else {
              *(undefined1 *)(iVar3 + 8) = 0x4d;
              *(undefined4 *)(iVar3 + 0xc) = 3;
              *(undefined4 *)(iVar3 + 0x10) = 2;
              *(undefined4 *)(iVar3 + 0x14) = 0;
            }
          }
          else {
            *puVar11 = uVar9;
            *(uint *)(puVar11 + 0xc) = (uint)uStack_4a;
          }
        }
        uStack_54 = 2;
        uStack_52 = 0;
        uStack_50 = 0;
        iStack_48 = 0;
        if ((*pcVar10 == '/') &&
           (iVar7 = (*(code *)&SUB_ram_400106dc)
                              (pcVar10,&DAT_ram_3c0c557c,&uStack_54,&iStack_48,&uStack_52,&iStack_48
                               ,&uStack_50), iVar7 < 1)) {
          *(undefined1 *)(iVar3 + 8) = 0x4a;
          *(undefined4 *)(iVar3 + 0xc) = 0;
          *(undefined4 *)(iVar3 + 0x10) = 0;
          *(undefined4 *)(iVar3 + 0x14) = 0;
          *(undefined4 *)(iVar3 + 0x18) = 0;
          *(undefined4 *)(iVar3 + 0x20) = 0;
          *(undefined4 *)(iVar3 + 0x24) = 0;
          *(undefined4 *)(iVar3 + 0x28) = 0;
          *(undefined1 *)(iVar3 + 0x30) = 0x4a;
          *(undefined4 *)(iVar3 + 0x34) = 0;
          *(undefined4 *)(iVar3 + 0x38) = 0;
          *(undefined4 *)(iVar3 + 0x3c) = 0;
          *(undefined4 *)(iVar3 + 0x40) = 0;
          *(undefined4 *)(iVar3 + 0x48) = 0;
          *(undefined4 *)(iVar3 + 0x4c) = 0;
          *(undefined4 *)(iVar3 + 0x50) = 0;
          return;
        }
        *(uint *)(puVar11 + 0x10) =
             (uint)uStack_52 * 0x3c + (uint)uStack_50 + (uint)uStack_54 * 0xe10;
        pcVar4 = pcVar10 + iStack_48;
        puVar11 = puVar11 + 0x28;
        bVar2 = true;
        if (bVar1) {
          uVar8 = *(undefined4 *)(iVar3 + 4);
          *(int *)(iVar3 + 0x28) = iVar5;
          *(int *)(iVar3 + 0x50) = iVar6;
          *(undefined4 *)(gp + -0x71c) = 0x3fcc4dec;
          *(undefined4 *)(gp + -0x718) = 0x3fcc4de0;
          FUN_ram_420b07e8(uVar8);
          _DAT_ram_3fcc5410 = *(int *)(iVar3 + 0x28);
          _DAT_ram_3fcc5414 = (uint)(*(int *)(iVar3 + 0x50) != *(int *)(iVar3 + 0x28));
          return;
        }
      } while( true );
    }
  }
  else {
    iVar6 = (*(code *)&SUB_ram_400106dc)(pcVar4,&DAT_ram_3c0c5544,0x3fcc4de0,&iStack_48);
    if (0 < iVar6) {
      if (7 < iStack_48 - 3U) {
        return;
      }
      goto LAB_ram_420b0c86;
    }
  }
  *(undefined4 *)(gp + -0x71c) = 0x3fcc4dec;
  *(undefined4 *)(gp + -0x718) = 0x3fcc4dec;
  *(int *)(iVar3 + 0x28) = iVar5;
  _DAT_ram_3fcc5410 = iVar5;
  return;
}

