
int FUN_ram_4201ce9e(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int aiStack_24 [3];
  
  FUN_ram_4201cc96(0,0,0);
  if (param_2 == (int *)0x0) {
    return 0x102;
  }
  if ((param_1 == (int *)0x0) || (iVar1 = *param_1, iVar1 == 0)) {
    *param_2 = 0;
    return 0x102;
  }
  iVar2 = FUN_ram_40399d1a(1,0x34);
  if (iVar2 == 0) {
    *param_2 = 0;
    return 0x101;
  }
  *(undefined1 *)(iVar2 + 0x2d) = *(undefined1 *)((int)param_1 + 9);
  iVar4 = param_1[3];
  if (iVar4 == 0) {
    iVar4 = 0x10000;
  }
  iVar6 = param_1[5];
  *(int *)(iVar2 + 0x24) = iVar4;
  iVar1 = *(int *)(iVar1 + 0x58);
  *(char *)(iVar2 + 0x2e) = (char)iVar6;
  if (iVar1 == 0) {
    iVar1 = 10;
  }
  else if (iVar1 == -1) {
    iVar1 = 0;
  }
  *(int *)(iVar2 + 0x30) = iVar1;
  if (((char)iVar6 != '\0') && (0x3ff < (uint)param_1[6])) {
    iVar1 = thunk_FUN_ram_40391b46();
    uVar5 = param_1[6];
    if (iVar1 != 0) {
      uVar5 = uVar5 & 0xfffffff0;
    }
    *(uint *)(iVar2 + 0x1c) = uVar5;
  }
  iVar1 = FUN_ram_4205c18a(*param_1);
  *(int *)(iVar2 + 0x10) = iVar1;
  if (iVar1 == 0) {
    iVar1 = -1;
    goto LAB_ram_4201d08e;
  }
  if (((code *)param_1[1] == (code *)0x0) || (iVar1 = (*(code *)param_1[1])(), iVar1 == 0)) {
    if (*(char *)(iVar2 + 0x2e) == '\0') {
LAB_ram_4201cf68:
      if (*(char *)(iVar2 + 0x2d) == '\0') {
LAB_ram_4201cf70:
        iVar1 = FUN_ram_4201ce00(iVar2);
        if (iVar1 == 0x700a) {
          if (*(char *)(iVar2 + 0x2e) == '\0') goto LAB_ram_4201d07e;
          *(undefined1 *)(iVar2 + 0x2e) = 0;
          *(undefined4 *)(iVar2 + 0x1c) = 0;
          FUN_ram_4205b9c4(*(undefined4 *)(iVar2 + 0x10),0x3c07144c);
          if ((*(char *)(iVar2 + 0x2d) != '\0') && (*(int *)(iVar2 + 0x24) < *(int *)(iVar2 + 0x20))
             ) {
            aiStack_24[0] = 0;
            (*(code *)&SUB_ram_400106a4)(aiStack_24,0x3c071460,*(int *)(iVar2 + 0x24) + -1);
            if (aiStack_24[0] == 0) goto LAB_ram_4201d18a;
            FUN_ram_4205b9ae(*(undefined4 *)(iVar2 + 0x10),0x3c07144c);
            thunk_FUN_ram_40390608(aiStack_24[0]);
          }
          FUN_ram_4205bd42(*(undefined4 *)(iVar2 + 0x10));
          FUN_ram_4205c930(*(undefined4 *)(iVar2 + 0x10));
          iVar1 = FUN_ram_4201ce00(iVar2);
        }
        if (iVar1 != 0) goto LAB_ram_4201d07e;
        FUN_ram_4201cc96(1,0,0);
        if (*(char *)(iVar2 + 0x2d) == '\0') {
          uVar3 = FUN_ram_4205c968(*(undefined4 *)(iVar2 + 0x10));
          *(undefined4 *)(iVar2 + 0x20) = uVar3;
        }
        iVar1 = param_1[7];
        *(undefined4 *)(iVar2 + 4) = 0;
        if (iVar1 == 0) {
          iVar1 = FUN_ram_4201900e(0);
        }
        else {
          iVar1 = FUN_ram_42019372();
        }
        *(int *)(iVar2 + 4) = iVar1;
        if (iVar1 != 0) {
          if (param_1[8] == 0) {
            *(int *)(iVar2 + 8) = iVar1;
          }
          else if (param_1[8] != param_1[7]) {
            iVar1 = FUN_ram_42019372();
            if (iVar1 == 0) goto LAB_ram_4201d0c4;
            iVar4 = param_1[9];
            *(int *)(iVar2 + 8) = iVar1;
            *(char *)(iVar2 + 0xc) = (char)iVar4;
          }
          iVar1 = *(int *)(*param_1 + 100);
          if (iVar1 < 0x400) {
            iVar1 = 0x400;
          }
          if (param_1[4] == 0) {
            iVar4 = thunk_FUN_ram_4039047a(iVar1);
          }
          else {
            iVar4 = FUN_ram_40390448();
          }
          *(int *)(iVar2 + 0x14) = iVar4;
          if (iVar4 != 0) {
            iVar4 = param_1[2];
            *(int *)(iVar2 + 0x18) = iVar1;
            *param_2 = iVar2;
            *(char *)(iVar2 + 0x2c) = (char)iVar4;
            *(uint *)(iVar2 + 0x28) = (-(uint)(*(int *)(iVar2 + 0x1c) == 0) & 0xfffffffd) + 4;
            return 0;
          }
          goto LAB_ram_4201d18a;
        }
      }
      else {
LAB_ram_4201d0a4:
        FUN_ram_4205ba6a(*(undefined4 *)(iVar2 + 0x10),5);
        iVar1 = FUN_ram_4205c9b8(*(undefined4 *)(iVar2 + 0x10));
        if (iVar1 != 0) goto LAB_ram_4201d07e;
        iVar1 = FUN_ram_4205c962(*(undefined4 *)(iVar2 + 0x10));
        if (iVar1 == 200) {
          uVar3 = FUN_ram_4205c968(*(undefined4 *)(iVar2 + 0x10));
          *(undefined4 *)(iVar2 + 0x20) = uVar3;
          FUN_ram_4205bd42(*(undefined4 *)(iVar2 + 0x10));
          iVar4 = *(int *)(iVar2 + 0x20);
          iVar6 = *(int *)(iVar2 + 0x24) + *(int *)(iVar2 + 0x1c);
          iVar1 = iVar4;
          if (iVar6 < iVar4) {
            iVar1 = iVar6 + -1;
          }
          if (iVar1 - *(int *)(iVar2 + 0x1c) < iVar4) {
            aiStack_24[0] = 0;
            (*(code *)&SUB_ram_400106a4)(aiStack_24,0x3c071454);
            if (aiStack_24[0] == 0) goto LAB_ram_4201d18a;
            FUN_ram_4205b9ae(*(undefined4 *)(iVar2 + 0x10),0x3c07144c);
            thunk_FUN_ram_40390608(aiStack_24[0]);
          }
          FUN_ram_4205ba6a(*(undefined4 *)(iVar2 + 0x10),0);
          goto LAB_ram_4201cf70;
        }
      }
LAB_ram_4201d0c4:
      iVar1 = -1;
    }
    else {
      if (*(char *)(iVar2 + 0x2d) != '\0') goto LAB_ram_4201d0a4;
      aiStack_24[0] = 0;
      (*(code *)&SUB_ram_400106a4)(aiStack_24,0x3c071440,*(undefined4 *)(iVar2 + 0x1c));
      if (aiStack_24[0] != 0) {
        FUN_ram_4205b9ae(*(undefined4 *)(iVar2 + 0x10),0x3c07144c);
        thunk_FUN_ram_40390608(aiStack_24[0]);
        goto LAB_ram_4201cf68;
      }
LAB_ram_4201d18a:
      iVar1 = 0x101;
    }
  }
LAB_ram_4201d07e:
  uVar3 = *(undefined4 *)(iVar2 + 0x10);
  FUN_ram_4205bd42(uVar3);
  FUN_ram_4205be46(uVar3);
LAB_ram_4201d08e:
  thunk_FUN_ram_40390608(iVar2);
  *param_2 = 0;
  return iVar1;
}

