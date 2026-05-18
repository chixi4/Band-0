
int FUN_ram_42077446(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 auStack_24 [4];
  
  uVar4 = FUN_ram_40396e84();
  uVar1 = FUN_ram_42077fac(uVar4,param_2,auStack_24);
  if ((uVar1 != 0) && (iVar2 = FUN_ram_42077252(uVar4), iVar2 != 0)) {
    iVar3 = FUN_ram_4201507c(uVar4,param_1,auStack_24[0],0x1b6);
    if (-1 < iVar3) {
      if (((*(uint *)(iVar2 + 100) & 1) == 0) && ((*(ushort *)(iVar2 + 0xc) & 0x200) == 0)) {
        FUN_ram_403910e0(*(undefined4 *)(iVar2 + 0x58));
      }
      *(undefined4 *)(iVar2 + 0x24) = 0x42067612;
      *(undefined4 *)(iVar2 + 0x28) = 0x42067644;
      *(undefined4 *)(iVar2 + 0x2c) = 0x42067696;
      *(short *)(iVar2 + 0xc) = (short)uVar1;
      *(short *)(iVar2 + 0xe) = (short)iVar3;
      *(int *)(iVar2 + 0x20) = iVar2;
      *(undefined4 *)(iVar2 + 0x30) = 0x420676ce;
      if ((uVar1 & 0x100) != 0) {
        thunk_FUN_ram_420776d6(uVar4,iVar2,0,2);
      }
      if ((*(uint *)(iVar2 + 100) & 1) != 0) {
        return iVar2;
      }
      if ((*(ushort *)(iVar2 + 0xc) & 0x200) != 0) {
        return iVar2;
      }
      FUN_ram_40391168(*(undefined4 *)(iVar2 + 0x58));
      return iVar2;
    }
    FUN_ram_42077232();
    *(undefined2 *)(iVar2 + 0xc) = 0;
    FUN_ram_403910a8(*(undefined4 *)(iVar2 + 0x58));
    FUN_ram_42077242();
  }
  return 0;
}

