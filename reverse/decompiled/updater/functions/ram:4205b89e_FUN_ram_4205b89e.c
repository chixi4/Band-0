
bool FUN_ram_4205b89e(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x18);
  FUN_ram_4205b81e(iVar1);
  iVar6 = *(int *)(iVar1 + 0x24);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(uint *)(iVar6 + 8) = (uint)*(ushort *)(param_1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 0x6c);
  *(undefined4 *)(iVar6 + 0x14) = uVar4;
  *(undefined4 *)(iVar6 + 0x1c) = uVar5;
  *(undefined4 *)(iVar6 + 0x10) = uVar3;
  *(undefined4 *)(iVar6 + 0x20) = 0;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x80) = 5;
  return iVar2 == 5;
}

