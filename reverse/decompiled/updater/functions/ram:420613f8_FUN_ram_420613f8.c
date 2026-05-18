
uint FUN_ram_420613f8(int *param_1,undefined2 *param_2,int param_3,undefined4 *param_4,uint *param_5
                     ,undefined4 param_6,int param_7)

{
  undefined2 *puVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_74 [72];
  
  if (param_3 < 2) {
    return 1;
  }
  uVar3 = FUN_ram_42061398(param_1,param_6,*param_2);
  if (uVar3 != 0) {
    return uVar3;
  }
  puVar1 = param_2 + 1;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = 0;
  }
  iVar7 = param_1[0x1f];
  if (((param_7 == 0) &&
      (uVar3 = ((*(int *)(iVar7 + 100) != 0) + 2) * *(int *)(iVar7 + 0x68), uVar3 < param_3 - 2U))
     && (uVar3 = (int)param_2 + (param_3 - (int)(uVar3 + (int)puVar1)), 0x1f < uVar3)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = puVar1;
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = uVar3;
    }
    puVar1 = (undefined2 *)((int)puVar1 + uVar3);
  }
  if ((int)param_2 + (param_3 - (int)puVar1) < *(int *)(iVar7 + 0x68)) {
    return 1;
  }
  iVar7 = FUN_ram_42066328(puVar1);
  if (iVar7 == 0) {
    return 1;
  }
  if (((((*param_1 == 3) && (param_1[0x1b] != 0)) &&
       (iVar4 = thunk_FUN_ram_42024d4a(param_1[0x1b],iVar7), iVar4 == 0)) ||
      ((iVar4 = FUN_ram_420665b0(iVar7), iVar4 != 0 || (iVar4 = FUN_ram_420665c4(iVar7), iVar4 != 0)
       ))) || (iVar4 = thunk_FUN_ram_42024d4a(iVar7,*(undefined4 *)(param_1[0x1f] + 0x74)),
              -1 < iVar4)) goto LAB_ram_4206153a;
  FUN_ram_4206636c(param_1[0x1a],0);
  iVar9 = param_1[0x1f];
  param_1[0x1a] = iVar7;
  iVar7 = *(int *)(iVar9 + 0x68);
  iVar4 = (int)puVar1 + iVar7;
  iVar8 = (int)param_2 + (param_3 - iVar4);
  if (*(int *)(iVar9 + 0x6c) == 0) {
    if (iVar8 < iVar7 << 1) {
      return 1;
    }
    iVar7 = FUN_ram_420663cc(*(undefined4 *)(iVar9 + 0x70),auStack_74,0x42);
    if (iVar7 < 0) {
      return 1;
    }
    iVar9 = param_1[0x1f];
    iVar8 = *(int *)(iVar9 + 0x68);
    iVar7 = FUN_ram_40399d6c(iVar4,auStack_74);
    if (-1 < iVar7) {
      return 1;
    }
    iVar7 = FUN_ram_40399d6c(iVar4 + iVar8,auStack_74);
    if (-1 < iVar7) {
      return 1;
    }
    FUN_ram_4205e51c(*(undefined4 *)(iVar9 + 0x54),0);
    iVar8 = param_1[0x1f];
    uVar5 = FUN_ram_4205e586(*(undefined4 *)(iVar8 + 100),iVar4);
    iVar7 = param_1[0x1f];
    *(undefined4 *)(iVar8 + 0x54) = uVar5;
    if (*(int *)(iVar7 + 0x54) == 0) {
      return 1;
    }
    iVar7 = FUN_ram_4205e870(*(undefined4 *)(iVar7 + 100));
    if (iVar7 == 0) {
      return 1;
    }
    iVar7 = *(int *)(param_1[0x1f] + 0x68) << 1;
  }
  else {
    auStack_74[0] = 1;
    if (iVar8 < iVar7) {
      return 1;
    }
    FUN_ram_4206636c(*(undefined4 *)(iVar9 + 0x50),0);
    iVar8 = param_1[0x1f];
    uVar5 = FUN_ram_42066328(iVar4,*(undefined4 *)(iVar8 + 0x68));
    iVar7 = param_1[0x1f];
    *(undefined4 *)(iVar8 + 0x50) = uVar5;
    if (*(int *)(iVar7 + 0x50) == 0) {
      return 1;
    }
    iVar7 = FUN_ram_42066304();
    iVar8 = FUN_ram_42066328(auStack_74,1);
    if (((((iVar7 == 0) || (iVar8 == 0)) ||
         (iVar9 = FUN_ram_420664b2(*(undefined4 *)(param_1[0x1f] + 0x70),iVar8,iVar7), iVar9 != 0))
        || ((iVar9 = FUN_ram_420665b0(*(undefined4 *)(param_1[0x1f] + 0x50)), iVar9 != 0 ||
            (iVar9 = FUN_ram_420665c4(*(undefined4 *)(param_1[0x1f] + 0x50)), iVar9 != 0)))) ||
       (iVar9 = thunk_FUN_ram_42024d4a(*(undefined4 *)(param_1[0x1f] + 0x50),iVar7), -1 < iVar9)) {
      FUN_ram_4206636c(iVar7,0);
      iVar7 = iVar8;
LAB_ram_4206153a:
      FUN_ram_4206636c(iVar7,0);
      return 1;
    }
    FUN_ram_4206636c(iVar8,0);
    iVar8 = param_1[0x1f];
    iVar8 = FUN_ram_42066472(*(undefined4 *)(iVar8 + 0x50),*(undefined4 *)(iVar8 + 0x74),
                             *(undefined4 *)(iVar8 + 0x70),iVar7);
    if ((iVar8 < 0) || (iVar8 = FUN_ram_420665c4(iVar7), iVar8 == 0)) goto LAB_ram_4206153a;
    FUN_ram_4206636c(iVar7,0);
    iVar7 = *(int *)(param_1[0x1f] + 0x68);
  }
  pcVar2 = (char *)(iVar4 + iVar7);
  iVar7 = (int)param_2 + (param_3 - (int)pcVar2);
  if ((((iVar7 < 3) || (*pcVar2 != -1)) || (uVar3 = (uint)(byte)pcVar2[1], uVar3 == 0)) ||
     ((iVar7 + -1 <= (int)uVar3 || (pcVar2[2] != '!')))) {
    if (*(int *)(param_1[0x1f] + 0x84) != 0) {
      return 0x7b;
    }
  }
  else {
    if ((int)param_2 + (param_3 - (int)(pcVar2 + 2)) < (int)uVar3) {
      return 1;
    }
    pcVar2 = pcVar2 + 3;
    iVar7 = *(int *)(param_1[0x1f] + 0x84);
    uVar10 = uVar3 - 1 & 0xff;
    if (iVar7 != 0) {
      uVar6 = (*(code *)&SUB_ram_400104a8)(iVar7);
      if (uVar10 != uVar6) {
        return 0x7b;
      }
      iVar4 = FUN_ram_40399d6c(iVar7,pcVar2,uVar10);
      if (iVar4 != 0) {
        return 0x7b;
      }
    }
    thunk_FUN_ram_40390608(iVar7);
    iVar4 = param_1[0x1f];
    iVar7 = thunk_FUN_ram_4039047a(uVar3);
    *(int *)(iVar4 + 0x84) = iVar7;
    if (iVar7 == 0) {
      return 1;
    }
    FUN_ram_40399daa(iVar7,pcVar2,uVar10);
    pcVar2 = pcVar2 + uVar10;
    *(undefined1 *)(*(int *)(iVar4 + 0x84) + uVar10) = 0;
  }
  if (param_7 == 0) {
    FUN_ram_4206587c(*(undefined4 *)(param_1[0x1f] + 0x90));
    *(undefined4 *)(param_1[0x1f] + 0x90) = 0;
  }
  else {
    iVar7 = (int)param_2 + (param_3 - (int)pcVar2);
    if (((iVar7 < 3) || (*pcVar2 != -1)) ||
       ((uVar3 = (uint)(byte)pcVar2[1], uVar3 < 2 ||
        ((iVar7 + -1 <= (int)uVar3 || (pcVar2[2] != '\\')))))) {
      FUN_ram_4206587c(*(undefined4 *)(param_1[0x1f] + 0x90));
      *(undefined4 *)(param_1[0x1f] + 0x90) = 0;
    }
    else {
      if ((int)param_2 + (param_3 - (int)(pcVar2 + 2)) < (int)uVar3) {
        return 1;
      }
      uVar10 = uVar3 - 1 & 0xff;
      if ((uVar3 - 1 & 1) != 0) {
        return 1;
      }
      FUN_ram_4206587c(*(undefined4 *)(param_1[0x1f] + 0x90));
      iVar4 = param_1[0x1f];
      uVar5 = FUN_ram_4206582a(uVar10);
      iVar7 = param_1[0x1f];
      *(undefined4 *)(iVar4 + 0x90) = uVar5;
      if (*(int *)(iVar7 + 0x90) == 0) {
        return 1;
      }
      FUN_ram_4205f5a2(*(int *)(iVar7 + 0x90),pcVar2 + 3,uVar10);
      pcVar2 = pcVar2 + 3 + uVar10;
    }
    iVar7 = (int)param_2 + (param_3 - (int)pcVar2);
    if ((2 < iVar7) && (*pcVar2 == -1)) {
      if (((byte)pcVar2[1] == 0) ||
         ((iVar7 + -1 <= (int)(uint)(byte)pcVar2[1] || (pcVar2[2] != ']')))) {
        if (iVar7 < 7) goto LAB_ram_42061828;
      }
      else {
        *param_4 = pcVar2 + 3;
        *param_5 = (byte)pcVar2[1] - 1;
        if ((iVar7 < 7) || (*pcVar2 != -1)) goto LAB_ram_42061828;
      }
      uVar3 = (uint)(byte)pcVar2[1];
      if ((4 < uVar3) && (((int)uVar3 < iVar7 + -1 && (pcVar2[2] == 'r')))) {
        if ((int)param_2 + (param_3 - (int)(pcVar2 + 2)) < (int)uVar3) {
          return 1;
        }
        param_1[0x15] =
             (uint)(byte)pcVar2[3] << 0x18 | (uint)(byte)pcVar2[4] << 0x10 | (uint)(byte)pcVar2[6] |
             (uint)(byte)pcVar2[5] << 8;
      }
    }
  }
LAB_ram_42061828:
  if ((param_1[0x14] != 0) && (param_1[0x14] != param_1[0x15])) {
    return 1;
  }
  if ((param_1[0x13] == 0) && (param_1[0x15] == 0xfac18)) {
    param_1[0x13] = 0x4000000;
  }
  if (*(int *)(param_1[0x1f] + 0x44) == 0) {
    return 0;
  }
  iVar7 = thunk_FUN_ram_42024d4a(*(int *)(param_1[0x1f] + 0x44),param_1[0x1a]);
  if (iVar7 != 0) {
    return 0;
  }
  iVar7 = param_1[0x1f];
  if (*(int *)(iVar7 + 0x6c) != 0) {
    if (*(int *)(iVar7 + 0x48) == 0) {
      return 0;
    }
    iVar7 = thunk_FUN_ram_42024d4a(*(int *)(iVar7 + 0x48),*(undefined4 *)(iVar7 + 0x50));
    if (iVar7 != 0) {
      return 0;
    }
  }
  iVar7 = param_1[0x1f];
  if (*(int *)(iVar7 + 100) == 0) {
    return 0xffff;
  }
  if (*(int *)(iVar7 + 0x4c) != 0) {
    iVar7 = FUN_ram_4205e902(*(int *)(iVar7 + 100),*(int *)(iVar7 + 0x4c),
                             *(undefined4 *)(iVar7 + 0x54));
    return (uint)(iVar7 == 0) * -0x10000 >> 0x10;
  }
  return 0;
}

