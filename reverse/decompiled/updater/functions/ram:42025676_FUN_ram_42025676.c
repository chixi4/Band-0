
int FUN_ram_42025676(undefined4 *param_1,int param_2,undefined4 *param_3,int param_4,
                    undefined4 *param_5,int *param_6)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iStack_38;
  int iStack_34;
  
  iVar2 = FUN_ram_42024dea(param_5,0);
  if ((((iVar2 < 1) || ((*(uint *)*param_5 & 1) == 0)) ||
      (iVar2 = FUN_ram_42024dea(param_3,0), iVar2 < 0)) ||
     ((uVar3 = FUN_ram_42024bac(param_3), 0x2000 < uVar3 ||
      (uVar3 = FUN_ram_42024bac(param_5), 0x2000 < uVar3)))) {
    return -4;
  }
  if (*(short *)((int)param_3 + 6) == 0) {
    iVar2 = FUN_ram_42024a98(param_1,1);
    return iVar2;
  }
  iVar2 = FUN_ram_42026c86(*(undefined2 *)((int)param_5 + 6));
  iVar4 = FUN_ram_4202939a(iVar2,4);
  if (iVar4 == 0) {
    return -0x10;
  }
  iStack_38 = 0;
  iStack_34 = 1;
  if ((param_6 == (int *)0x0) || (*param_6 == 0)) {
    iVar5 = FUN_ram_42026b04(&iStack_38,param_5);
    if (iVar5 != 0) goto LAB_ram_42025826;
    if (param_6 != (int *)0x0) {
      *param_6 = iStack_38;
      param_6[1] = iStack_34;
    }
LAB_ram_4202575a:
    iVar5 = FUN_ram_420249f4(param_1,param_2);
    if (iVar5 == 0) {
      *(undefined2 *)(param_1 + 1) = 1;
      iVar5 = FUN_ram_42024d4a(param_1,param_5);
      if ((-1 < iVar5) && (iVar5 = FUN_ram_42025604(param_1,param_1,param_5), iVar5 != 0))
      goto LAB_ram_42025826;
      iVar5 = FUN_ram_4202479e(param_1,*(undefined2 *)((int)param_5 + 6));
      if (iVar5 == 0) {
        uVar6 = FUN_ram_42026846(*param_5);
        FUN_ram_42026d1a(*param_1,*param_1,*param_5,*(undefined2 *)((int)param_5 + 6),uVar6,
                         iStack_38,iVar4);
        uVar7 = *param_1;
        if (param_4 == 0x2a2a2a2a) {
          FUN_ram_42026cba(uVar7);
        }
        else {
          FUN_ram_42026ca6(uVar7,uVar7,*param_5,*(undefined2 *)((int)param_5 + 6),*param_3,
                           *(undefined2 *)((int)param_3 + 6),iStack_38,iVar4);
        }
        FUN_ram_42026d2a(*param_1,*param_1,*param_5,*(undefined2 *)((int)param_5 + 6),uVar6,iVar4);
        iVar5 = 0;
        if ((*(short *)(param_2 + 4) == -1) && ((*(uint *)*param_3 & 1) != 0)) {
          uVar1 = FUN_ram_42026cfe(*param_1,*(undefined2 *)((int)param_1 + 6));
          *(ushort *)(param_1 + 1) = (~uVar1 & 2) - 1;
          iVar5 = FUN_ram_42025020(param_1,param_5,param_1);
        }
        goto LAB_ram_42025826;
      }
    }
  }
  else {
    iVar5 = FUN_ram_4202479e(param_6,*(undefined2 *)((int)param_5 + 6));
    if (iVar5 == 0) {
      iStack_38 = *param_6;
      iStack_34 = param_6[1];
      goto LAB_ram_4202575a;
    }
  }
  iVar5 = -0x10;
LAB_ram_42025826:
  FUN_ram_420293c8(iVar4,iVar2 << 2);
  if ((param_6 == (int *)0x0) || (*param_6 == 0)) {
    FUN_ram_42024774(&iStack_38);
  }
  return iVar5;
}

