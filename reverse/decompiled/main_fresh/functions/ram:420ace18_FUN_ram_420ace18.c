
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_420ace18(undefined1 *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_100 [96];
  undefined1 auStack_a0 [2];
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  (*(code *)&SUB_ram_40010488)(auStack_a0,0,0x80);
  uStack_9e = 0x5454;
  uStack_9c = 0x4c505054;
  uStack_98 = 0x484c4c4c;
  uStack_94 = 0x484c4c4c;
  FUN_ram_420ac558();
  _DAT_ram_6002600c = _DAT_ram_6002600c & 0xfffffffd;
  FUN_ram_40394416(1);
  _DAT_ram_6004e930 = _DAT_ram_6004e930 & 0xfffdffff | 0x20000;
  (**(code **)(_DAT_ram_3fcc4c78 + 0x18))();
  FUN_ram_40394288();
  if (DAT_ram_3fcb7f51 == '\0') {
    puVar3 = param_1;
    if (param_1 == (undefined1 *)0x0) {
      puVar3 = auStack_a0;
    }
    (*(code *)&SUB_ram_40012328)(puVar3);
  }
  FUN_ram_420ac8b8();
  uVar2 = 0;
  if (DAT_ram_3fcb7f51 == '\0') {
    uVar4 = FUN_ram_420ac4f2();
    uVar2 = FUN_ram_420acd94(1,param_2,param_1,uVar4);
    if (param_3 == 1) {
      if (uVar2 == 0) {
        FUN_ram_420aca12(param_2);
        _DAT_ram_3fcb7fb0 = _DAT_ram_3fcb7fb0 & 0xfffefddf;
        goto LAB_ram_420acf22;
      }
      param_3 = 2;
    }
    else if (uVar2 == 0) {
      FUN_ram_420aca52(param_2,auStack_100,0);
    }
    _DAT_ram_3fcb7fb0 = 0;
  }
LAB_ram_420acf22:
  uVar1 = _DAT_ram_3fcb7fb0;
  FUN_ram_420ac8b8();
  FUN_ram_420ac6f6();
  FUN_ram_420ac79a();
  FUN_ram_420ad916((uVar1 >> 5 ^ 1) & 1,(uVar1 >> 0x14 ^ 1) & 1);
  if ((DAT_ram_3fcb7f51 == '\0') && (param_3 != 1)) {
    if (uVar2 == 0) {
      iVar5 = FUN_ram_420aca52(param_2,auStack_100,1);
      uVar2 = (uint)(iVar5 != 0);
    }
    FUN_ram_420acd82(param_2);
    uVar4 = FUN_ram_420ac4f2();
    FUN_ram_420acd94(0,param_2,param_1,uVar4);
  }
  if ((DAT_ram_3fcb7f51 == '\0') && (DAT_ram_3fcb7fad != '\0')) {
    (*(code *)&SUB_ram_400124cc)(0);
  }
  (**(code **)(_DAT_ram_3fcc4c78 + 0x144))(0);
  _DAT_ram_6004ad0c = 0x117;
  (**(code **)(_DAT_ram_3fcc4c78 + 0x48))(99,1,0);
  DAT_ram_3fcb7f51 = 1;
  (**(code **)(_DAT_ram_3fcc4c78 + 0x14))();
  FUN_ram_40394416(0);
  return uVar2;
}

