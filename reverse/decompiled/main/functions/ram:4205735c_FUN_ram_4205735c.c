
undefined4
FUN_ram_4205735c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_a2;
  undefined1 uVar5;
  undefined4 extraout_a3;
  undefined1 uVar6;
  int extraout_a4;
  int iVar7;
  undefined8 uVar8;
  
  uVar8 = CONCAT44(param_2,param_1);
  if (param_5 == 0) {
    uVar8 = FUN_ram_4039bf1e();
    param_3 = extraout_a2;
    param_4 = extraout_a3;
    param_5 = extraout_a4;
  }
  iVar4 = (int)((ulonglong)uVar8 >> 0x20);
  iVar2 = (int)uVar8;
  iVar7 = *(int *)(iVar4 + 4);
  uVar1 = thunk_FUN_ram_4205e7ee(iVar4,6,*(undefined2 *)(iVar4 + 8),param_3,param_4);
  *(char *)(iVar7 + 0x10) = (char)uVar1;
  *(char *)(iVar7 + 0x11) = (char)((ushort)uVar1 >> 8);
  if (iVar2 == 0) {
    uVar6 = 0;
    uVar5 = 0x40;
  }
  else {
    uVar5 = *(undefined1 *)(iVar2 + 0xb);
    uVar6 = *(undefined1 *)(iVar2 + 10);
  }
  uVar3 = FUN_ram_4205be20(iVar4,param_3,param_4,uVar5,uVar6,6,param_5);
  FUN_ram_42053ac4(iVar4);
  return uVar3;
}

