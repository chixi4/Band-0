
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202aaaa(undefined4 param_1,undefined4 param_2,int *param_3)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  ushort uVar12;
  undefined1 auStack_31 [9];
  
  iVar5 = FUN_ram_42029616(param_3,4,auStack_31);
  if (iVar5 != 0) {
    uVar12 = 0;
    puVar8 = (undefined4 *)0x0;
    goto LAB_ram_4202aafa;
  }
  puVar4 = *(ushort **)*param_3;
  uVar12 = *puVar4;
  iVar5 = FUN_ram_42029960(uVar12);
  if (iVar5 == 0) {
    auStack_31[0] = 1;
    iVar5 = 5;
    puVar8 = (undefined4 *)0x0;
    goto LAB_ram_4202aafa;
  }
  iVar5 = FUN_ram_4202942c(param_1,0,iVar5,auStack_31);
  puVar8 = (undefined4 *)0x0;
  if (iVar5 != 0) goto LAB_ram_4202aafa;
  thunk_FUN_ram_4202b7dc();
  uVar2 = *puVar4;
  uVar3 = puVar4[1];
  iVar5 = *param_3;
  iVar6 = thunk_FUN_ram_420365de(param_1);
  piVar7 = (int *)(*(code *)&SUB_ram_40011a44)(_DAT_ram_3fcb6b84 + 4);
  if (piVar7 == (int *)0x0) {
    auStack_31[0] = 9;
LAB_ram_4202ab7c:
    iVar5 = 6;
  }
  else {
    (*(code *)&SUB_ram_40010488)(piVar7,0,0xc);
    iVar9 = FUN_ram_4202d4ec();
    piVar7[2] = iVar9;
    if (iVar9 == 0) {
      FUN_ram_420297a8(piVar7);
      auStack_31[0] = 0x11;
      goto LAB_ram_4202ab7c;
    }
    sVar1 = *(short *)(iVar5 + 0x10);
    *(ushort *)(piVar7 + 1) = uVar2;
    *(ushort *)((int)piVar7 + 6) = uVar3;
    iVar5 = (*(code *)&SUB_ram_400119e4)(iVar9,iVar5,4,sVar1 + -4);
    if (iVar5 == 0) {
      piVar10 = (int *)0x0;
      for (piVar11 = *(int **)(iVar6 + 0x54);
          ((piVar11 != (int *)0x0 && (*(ushort *)(piVar11 + 1) <= uVar2)) &&
          ((uVar2 != *(ushort *)(piVar11 + 1) || (*(ushort *)((int)piVar11 + 6) <= uVar3))));
          piVar11 = (int *)*piVar11) {
        piVar10 = piVar11;
      }
      if (piVar10 == (int *)0x0) {
        *piVar7 = (int)*(int **)(iVar6 + 0x54);
        *(int **)(iVar6 + 0x54) = piVar7;
      }
      else {
        *piVar7 = *piVar10;
        *piVar10 = (int)piVar7;
      }
      iVar9 = (**(code **)(_DAT_ram_3fcb6a44 + 0x84))();
      *(int *)(iVar6 + 0x58) = iVar9 + 30000;
      FUN_ram_4202bac4();
    }
    else {
      FUN_ram_420297a8(piVar7);
      auStack_31[0] = 9;
    }
  }
  thunk_FUN_ram_4202b7f6();
  puVar8 = (undefined4 *)*param_3;
  *param_3 = 0;
  if (iVar5 == 0) {
    puVar8 = (undefined4 *)(*(code *)&SUB_ram_40011a28)(puVar8,1);
    if (puVar8 == (undefined4 *)0x0) {
      auStack_31[0] = 0x11;
      iVar5 = 6;
    }
    else {
      *(undefined1 *)*puVar8 = 0x17;
    }
  }
LAB_ram_4202aafa:
  FUN_ram_42029b02(param_1,param_2,iVar5,puVar8,0x16,auStack_31[0],uVar12);
  return;
}

