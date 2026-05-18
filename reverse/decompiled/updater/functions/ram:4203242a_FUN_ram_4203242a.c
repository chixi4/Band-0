
void FUN_ram_4203242a(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  uint *puVar3;
  uint uVar4;
  
  iVar1 = *(int *)(*(int *)(param_2 + 4) + 4);
  *(uint *)(*(int *)(param_2 + 4) + 4) = *(ushort *)(param_2 + 0x14) + 8 + iVar1;
  puVar2 = (undefined2 *)(*(code *)&SUB_ram_40011ff4)();
  puVar3 = *(uint **)(param_2 + 0x24);
  if (puVar2 == (undefined2 *)0x0) {
    *puVar3 = *puVar3 & 0xfffffffe;
    *(byte *)(iVar1 + 1) = *(byte *)(iVar1 + 1) & 0xbf;
    iVar1 = *(int *)(*(int *)(param_2 + 4) + 4);
    FUN_ram_40399e7e(iVar1 + -8,iVar1,*(undefined2 *)(param_2 + 0x16));
    puVar3 = *(uint **)(param_2 + 0x24);
    *(uint *)(*(int *)(param_2 + 4) + 4) =
         *(int *)(*(int *)(param_2 + 4) + 4) + (-8 - (uint)*(ushort *)(param_2 + 0x14));
  }
  else {
    *(uint *)(*(int *)(param_2 + 4) + 4) =
         *(int *)(*(int *)(param_2 + 4) + 4) - (uint)*(ushort *)(param_2 + 0x14);
    uVar4 = puVar3[4];
    puVar3[4] = uVar4 & 0xfffff0ff | (**(uint **)(puVar2 + 0x50) & 0xf) << 8;
    *puVar3 = *puVar3 & 0xfffffffe;
    *(byte *)(puVar3 + 4) = (byte)(uVar4 >> 0xd) & 0x40 | (byte)*puVar2;
  }
  puVar3[5] = puVar3[5] | 4;
  return;
}

