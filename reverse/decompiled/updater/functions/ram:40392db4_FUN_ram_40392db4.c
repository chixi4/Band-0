
/* WARNING: Removing unreachable block (ram,0x40392da8) */

int FUN_ram_40392db4(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_ram_40392c78(param_1,param_2,0xffffffff);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x74);
    FUN_ram_40392566(iVar3);
    FUN_ram_40396242();
    while (iVar2 = FUN_ram_40398980(iVar3 + 0x20), iVar2 == 0) {
      FUN_ram_40396242();
    }
    uVar1 = **(uint **)(iVar3 + 0x58);
    FUN_ram_403925b2(iVar3);
    FUN_ram_40392506(iVar3 + 0x58);
    *(undefined1 *)(iVar3 + 0xb4) = 0;
    if (param_1 != *(int *)(iVar3 + 0xa8)) {
      FUN_ram_40391d0a(*(undefined4 *)(param_1 + 0x78));
    }
    return (-(uint)(uVar1 < 0x40000000) & 0xfffffefd) + 0x103;
  }
  return 0x102;
}

