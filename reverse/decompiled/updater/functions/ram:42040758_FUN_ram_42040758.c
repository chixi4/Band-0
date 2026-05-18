
undefined4 FUN_ram_42040758(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [20];
  
  FUN_ram_40399daa(auStack_28,param_2 + 10,6);
  if ((((*(byte *)(param_2 + 1) & 0x40) != 0) && (iVar2 = FUN_ram_42040442(auStack_28), iVar2 != 0))
     && (*(int *)(iVar2 + 0xa0) != 0)) {
    if ((*(byte *)(param_2 + 0x1b) & 0x20) == 0) {
      return 0x306a;
    }
    uVar1 = *(ushort *)(param_2 + 0x1e);
    *(uint *)(iVar2 + 8) =
         (uint)*(byte *)(param_2 + 0x19) << 8 | (uint)*(byte *)(param_2 + 0x1c) << 0x10 |
         (uint)*(byte *)(param_2 + 0x18) | (uint)*(byte *)(param_2 + 0x1d) << 0x18;
    *(uint *)(iVar2 + 0xc) = (uint)uVar1;
  }
  uVar3 = 0;
  if (*(char *)(param_3 + 0xd) == '\x04') {
    uVar3 = FUN_ram_420405be(param_1,param_2,param_3,param_4);
  }
  return uVar3;
}

