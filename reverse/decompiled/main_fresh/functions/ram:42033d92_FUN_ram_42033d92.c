
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42033d92(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = _DAT_ram_3fcb6bc8;
  if (param_1 == 6) {
    iVar3 = FUN_ram_42033a56(param_2);
    if (iVar3 != -1) {
      FUN_ram_42033cde(_DAT_ram_3fcb6bc8 + 0x29c,0xe,iVar3,_DAT_ram_3fcb6bc8 + 0x2c8);
      uVar2 = FUN_ram_420349ce();
      return uVar2;
    }
  }
  else if (param_1 < 7) {
    if (param_1 == 2) {
      uVar2 = FUN_ram_42033d02();
      return uVar2;
    }
    if (param_1 != 3) {
      if (param_1 != 1) {
        return 8;
      }
      uVar2 = FUN_ram_42033d4c();
      return uVar2;
    }
    iVar3 = FUN_ram_42033986();
    if (iVar3 != -1) {
      FUN_ram_42033cde(_DAT_ram_3fcb6bc8 + 0x21c,0x10,iVar3,_DAT_ram_3fcb6bc8 + 0x27c);
      uVar2 = FUN_ram_42034868();
      return uVar2;
    }
  }
  else if (param_1 == 7) {
    iVar3 = FUN_ram_42033ab8();
    if (iVar3 != -1) {
      FUN_ram_42033cde(_DAT_ram_3fcb6bc8 + 0x2cc,0x17,iVar3,_DAT_ram_3fcb6bc8 + 0x314);
      uVar2 = FUN_ram_42034954();
      return uVar2;
    }
  }
  else {
    if (param_1 != 8) {
      return 8;
    }
    iVar4 = _DAT_ram_3fcb6bc8 + 0x280;
    iVar1 = FUN_ram_420339fe(param_2,iVar4,*(undefined4 *)(_DAT_ram_3fcb6bc8 + 0x298));
    if (iVar1 != -1) {
      FUN_ram_42033cde(iVar4,8,iVar1,iVar3 + 0x298);
      uVar2 = FUN_ram_420348e2();
      return uVar2;
    }
  }
  return 5;
}

