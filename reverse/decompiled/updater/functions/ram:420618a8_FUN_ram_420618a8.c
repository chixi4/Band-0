
int FUN_ram_420618a8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x40);
    if (*(short *)(param_1 + 4) != -1) {
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
    }
    uVar1 = FUN_ram_420658ce(param_2,0);
    FUN_ram_4205f4b8(param_2,*(undefined2 *)(param_1 + 4));
    iVar5 = *(int *)(param_1 + 0x7c);
    uVar4 = *(undefined4 *)(param_1 + 0x68);
    uVar2 = *(undefined4 *)(iVar5 + 0x44);
    if (*(int *)(iVar5 + 100) == 0) {
      uVar3 = *(undefined4 *)(iVar5 + 0x48);
      uVar6 = *(undefined4 *)(iVar5 + 0x50);
      uVar7 = FUN_ram_420658ce(param_2,uVar7);
      iVar5 = FUN_ram_4205ffd0(param_1,uVar1,uVar2,uVar3,uVar4,uVar6,uVar7);
    }
    else {
      uVar3 = *(undefined4 *)(iVar5 + 0x4c);
      uVar6 = *(undefined4 *)(iVar5 + 0x54);
      uVar7 = FUN_ram_420658ce(param_2,uVar7);
      iVar5 = FUN_ram_42060068(param_1,uVar1,uVar2,uVar3,uVar4,uVar6,uVar7);
    }
    return -(uint)(iVar5 != 0);
  }
  return -1;
}

