
int FUN_ram_42068e12(undefined4 *param_1,int param_2,undefined4 *param_3,int param_4,
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
  
  iVar2 = FUN_ram_420685b4(param_5,0);
  if ((((iVar2 < 1) || ((*(uint *)*param_5 & 1) == 0)) ||
      (iVar2 = FUN_ram_420685b4(param_3,0), iVar2 < 0)) ||
     ((uVar3 = FUN_ram_420683ba(param_3), 0x2000 < uVar3 ||
      (uVar3 = FUN_ram_420683ba(param_5), 0x2000 < uVar3)))) {
    return -4;
  }
  if (*(short *)((int)param_3 + 6) == 0) {
    iVar2 = FUN_ram_42068310(param_1,1);
    return iVar2;
  }
  iVar2 = FUN_ram_4206a300(*(undefined2 *)((int)param_5 + 6));
  iVar4 = FUN_ram_4206d7ce(iVar2,4);
  if (iVar4 == 0) {
    return -0x10;
  }
  iStack_38 = 0;
  iStack_34 = 1;
  if ((param_6 == (int *)0x0) || (*param_6 == 0)) {
    iVar5 = FUN_ram_4206a17e(&iStack_38,param_5);
    if (iVar5 != 0) goto LAB_ram_42068fc2;
    if (param_6 != (int *)0x0) {
      *param_6 = iStack_38;
      param_6[1] = iStack_34;
    }
LAB_ram_42068ef6:
    iVar5 = FUN_ram_4206826c(param_1,param_2);
    if (iVar5 == 0) {
      *(undefined2 *)(param_1 + 1) = 1;
      iVar5 = FUN_ram_42068514(param_1,param_5);
      if ((-1 < iVar5) && (iVar5 = FUN_ram_42068da0(param_1,param_1,param_5), iVar5 != 0))
      goto LAB_ram_42068fc2;
      iVar5 = FUN_ram_420680a2(param_1,*(undefined2 *)((int)param_5 + 6));
      if (iVar5 == 0) {
        uVar6 = FUN_ram_42069ec0(*param_5);
        FUN_ram_4206a394(*param_1,*param_1,*param_5,*(undefined2 *)((int)param_5 + 6),uVar6,
                         iStack_38,iVar4);
        uVar7 = *param_1;
        if (param_4 == 0x2a2a2a2a) {
          FUN_ram_4206a334(uVar7);
        }
        else {
          FUN_ram_4206a320(uVar7,uVar7,*param_5,*(undefined2 *)((int)param_5 + 6),*param_3,
                           *(undefined2 *)((int)param_3 + 6),iStack_38,iVar4);
        }
        FUN_ram_4206a3a4(*param_1,*param_1,*param_5,*(undefined2 *)((int)param_5 + 6),uVar6,iVar4);
        iVar5 = 0;
        if ((*(short *)(param_2 + 4) == -1) && ((*(uint *)*param_3 & 1) != 0)) {
          uVar1 = FUN_ram_4206a378(*param_1,*(undefined2 *)((int)param_1 + 6));
          *(ushort *)(param_1 + 1) = (~uVar1 & 2) - 1;
          iVar5 = FUN_ram_420687ea(param_1,param_5,param_1);
        }
        goto LAB_ram_42068fc2;
      }
    }
  }
  else {
    iVar5 = FUN_ram_420680a2(param_6,*(undefined2 *)((int)param_5 + 6));
    if (iVar5 == 0) {
      iStack_38 = *param_6;
      iStack_34 = param_6[1];
      goto LAB_ram_42068ef6;
    }
  }
  iVar5 = -0x10;
LAB_ram_42068fc2:
  FUN_ram_4206d7fc(iVar4,iVar2 << 2);
  if ((param_6 == (int *)0x0) || (*param_6 == 0)) {
    FUN_ram_42068078(&iStack_38);
  }
  return iVar5;
}

