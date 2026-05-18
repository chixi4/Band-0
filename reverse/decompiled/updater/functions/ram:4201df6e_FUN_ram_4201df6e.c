
int FUN_ram_4201df6e(int param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
                    char param_6)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int *piVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_60 [9];
  undefined1 auStack_57 [15];
  uint uStack_48;
  char cStack_44;
  char cStack_43;
  
  uVar5 = *(int *)(param_1 + 0x30) - 1;
  if (0x7f < uVar5) {
    uVar5 = 0x7f;
  }
  if (uVar5 * 4000 < param_5) {
    return 0x110e;
  }
  piVar2 = (int *)0x0;
  iVar9 = 0;
  cVar8 = '\0';
  uVar5 = param_5;
  piVar1 = (int *)0x0;
  do {
    while( true ) {
      iVar10 = *(int *)(param_1 + 0x14);
      uVar3 = FUN_ram_4201f900(iVar10);
      if (cVar8 != '\0') break;
      if (uVar3 < param_5) {
        if (399 < uVar3) goto LAB_ram_4201e048;
      }
      else {
        if (uVar3 != 0) goto LAB_ram_4201e048;
        if (param_5 != 0) goto LAB_ram_4201dfe2;
      }
      if ((*(int *)(iVar10 + 0xc) != -4) && (iVar10 = FUN_ram_4201f8ea(iVar10), iVar10 != 0)) {
        return iVar10;
      }
      iVar10 = FUN_ram_42020904(param_1 + 0x10);
      if (iVar10 != 0) {
        return iVar10;
      }
      uVar4 = FUN_ram_4201f900(*(undefined4 *)(param_1 + 0x14));
      if (uVar4 == uVar3) {
        return 0x1105;
      }
    }
    if (uVar3 == 0) {
LAB_ram_4201dfe2:
      iVar11 = 0x1105;
      goto LAB_ram_4201e136;
    }
LAB_ram_4201e048:
    uVar4 = uVar5;
    if (uVar3 < uVar5) {
      uVar4 = uVar3;
    }
    iVar11 = FUN_ram_4201fca8(iVar10,param_2,0x42,param_3,param_4 + iVar9,uVar4,cVar8 + param_6);
    cVar8 = cVar8 + '\x01';
    uVar5 = uVar5 - uVar4;
    if (iVar11 != 0) {
      if (iVar11 == 0x110a) {
        return 0x110a;
      }
      goto LAB_ram_4201e136;
    }
    piVar7 = (int *)thunk_FUN_ram_4039047a(0xc);
    if (piVar7 == (int *)0x0) {
      iVar11 = 0x101;
      goto LAB_ram_4201e136;
    }
    piVar7[2] = iVar10;
    if (piVar1 != (int *)0x0) {
      piVar1[1] = (int)piVar7;
    }
    *piVar7 = (int)piVar1;
    piVar7[1] = 0;
    if (piVar2 == (int *)0x0) {
      piVar2 = piVar7;
    }
    if ((uVar5 == 0) && (0x1f < uVar3 - uVar4)) break;
    if (((*(int *)(iVar10 + 0xc) != -4) && (iVar11 = FUN_ram_4201f8ea(iVar10), iVar11 != 0)) ||
       (iVar11 = FUN_ram_42020904(param_1 + 0x10), iVar11 != 0)) goto LAB_ram_4201e136;
    iVar9 = iVar9 + uVar4;
    piVar1 = piVar7;
  } while (uVar5 != 0);
  puVar6 = auStack_60;
  while (puVar6 + 1 != auStack_57) {
    puVar6[0x18] = 0xff;
    puVar6 = puVar6 + 1;
  }
  uStack_48 = param_5;
  cStack_44 = cVar8;
  cStack_43 = param_6;
  iVar11 = FUN_ram_4201fca8(*(undefined4 *)(param_1 + 0x14),param_2,0x48,param_3,&uStack_48,8,0xff);
  if (iVar11 == 0x110a) {
    return 0x110a;
  }
  if (iVar11 != 0) {
LAB_ram_4201e136:
    cVar8 = '\0';
    for (piVar1 = piVar2; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      FUN_ram_420203ca(piVar1[2],param_2,0x42,param_3,cVar8,0xff);
      cVar8 = cVar8 + '\x01';
    }
  }
  while (piVar2 != (int *)0x0) {
    piVar7 = (int *)piVar2[1];
    iVar9 = *piVar2;
    piVar1 = piVar7;
    if (iVar9 != 0) {
      *(int **)(iVar9 + 4) = piVar7;
      piVar1 = piVar2;
    }
    if (piVar7 != (int *)0x0) {
      *piVar7 = iVar9;
    }
    thunk_FUN_ram_40390608(piVar2);
    piVar2 = piVar1;
  }
  return iVar11;
}

