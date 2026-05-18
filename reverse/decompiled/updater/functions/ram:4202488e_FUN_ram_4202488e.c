
undefined4 FUN_ram_4202488e(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (param_1 != param_2) {
    uVar4 = FUN_ram_42024758(param_3);
    iVar5 = FUN_ram_4202479e(param_1,*(undefined2 *)((int)param_2 + 6));
    if ((iVar5 != 0) ||
       (iVar5 = FUN_ram_4202479e(param_2,*(undefined2 *)((int)param_1 + 6)), iVar5 != 0)) {
      return 0xfffffff0;
    }
    sVar1 = *(short *)(param_1 + 1);
    uVar3 = (ushort)uVar4;
    *(ushort *)(param_1 + 1) = (*(short *)(param_2 + 1) + 1U & uVar3 | ~uVar3 & sVar1 + 1U) - 1;
    uVar2 = *(undefined2 *)((int)param_1 + 6);
    uVar6 = *param_1;
    *(ushort *)(param_2 + 1) = (*(short *)(param_2 + 1) + 1U & ~uVar3 | uVar3 & sVar1 + 1U) - 1;
    FUN_ram_42026258(uVar6,*param_2,uVar2,uVar4);
  }
  return 0;
}

