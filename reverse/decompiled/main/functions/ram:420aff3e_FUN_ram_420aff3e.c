
int FUN_ram_420aff3e(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 auStack_24 [4];
  
  uVar4 = FUN_ram_4039902c();
  uVar1 = FUN_ram_420b1562(uVar4,param_2,auStack_24);
  if ((uVar1 != 0) && (iVar2 = FUN_ram_420afd4a(uVar4), iVar2 != 0)) {
    iVar3 = FUN_ram_42013eae(uVar4,param_1,auStack_24[0],0x1b6);
    if (-1 < iVar3) {
      if (((*(uint *)(iVar2 + 100) & 1) == 0) && ((*(ushort *)(iVar2 + 0xc) & 0x200) == 0)) {
        FUN_ram_40391860(*(undefined4 *)(iVar2 + 0x58));
      }
      *(undefined4 *)(iVar2 + 0x24) = 0x4209ffc8;
      *(undefined4 *)(iVar2 + 0x28) = 0x4209fffa;
      *(undefined4 *)(iVar2 + 0x2c) = 0x420a004c;
      *(short *)(iVar2 + 0xc) = (short)uVar1;
      *(short *)(iVar2 + 0xe) = (short)iVar3;
      *(int *)(iVar2 + 0x20) = iVar2;
      *(undefined4 *)(iVar2 + 0x30) = 0x420a0084;
      if ((uVar1 & 0x100) != 0) {
        thunk_FUN_ram_420b008c(uVar4,iVar2,0,2);
      }
      if ((*(uint *)(iVar2 + 100) & 1) != 0) {
        return iVar2;
      }
      if ((*(ushort *)(iVar2 + 0xc) & 0x200) != 0) {
        return iVar2;
      }
      FUN_ram_40391902(*(undefined4 *)(iVar2 + 0x58));
      return iVar2;
    }
    FUN_ram_420afd2a();
    *(undefined2 *)(iVar2 + 0xc) = 0;
    FUN_ram_40391820(*(undefined4 *)(iVar2 + 0x58));
    FUN_ram_420afd3a();
  }
  return 0;
}

