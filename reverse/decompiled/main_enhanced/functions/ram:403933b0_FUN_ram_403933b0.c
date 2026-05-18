
void FUN_ram_403933b0(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  
  uVar5 = *(undefined4 *)(param_1 + 0x78);
  iVar4 = *(int *)(param_1 + 0x74);
  bVar1 = false;
  if (((param_2 != (int *)0x0) && (iVar2 = *(int *)(*param_2 + 0x18), iVar2 != 0)) &&
     (*(int *)(param_1 + 0x5c) != iVar2)) {
    uStack_3c = *(undefined4 *)(param_1 + 0x58);
    uStack_38 = *(uint *)(param_1 + 0x70) >> 1 & 1;
    uStack_2c = (uint)*(ushort *)(param_1 + 0x14);
    uStack_28 = *(undefined4 *)(param_1 + 0x20);
    uStack_34 = 0;
    uStack_24 = (uint)((byte)(*(uint *)(*(int *)(iVar4 + 0x9c) + 0x38) >> 1) & 1 ^ 1);
    iStack_30 = iVar2;
    iVar2 = FUN_ram_4039a8b4(&uStack_3c,param_1 + 0x4c);
    bVar1 = iVar2 == 0;
  }
  iVar2 = FUN_ram_40392878(uVar5);
  if ((iVar2 != 0) || (bVar1)) {
    FUN_ram_4039a6be(iVar4 + 0x20,param_1 + 0x3c);
    iVar4 = *(int *)(iVar4 + 0x20);
    if (*(int *)(param_1 + 0x50) == 0xb) {
      uVar3 = *(uint *)(iVar4 + 0xe8) & 0xfffffffb;
    }
    else {
      uVar3 = *(uint *)(iVar4 + 0xe8) | 4;
    }
    *(uint *)(iVar4 + 0xe8) = uVar3;
  }
  return;
}

