
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42078074(uint param_1,int param_2,uint param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 auStack_34 [4];
  
  auStack_34[0] = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    FUN_ram_42033fd8(1,0x40,2,0x3c07f630);
    return 0x102;
  }
  if (0x61c < param_3) {
    FUN_ram_42033fd8(1,0x40,2,0x3c07f640,param_3);
    return 0x102;
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
  if (param_1 == 0) {
    _DAT_ram_3fcb3974 = _DAT_ram_3fcb3974 + 1;
  }
  else {
    _DAT_ram_3fcb3970 = _DAT_ram_3fcb3970 + 1;
  }
  iVar1 = (*(code *)&SUB_ram_40011fec)(param_1,param_2,auStack_34);
  if (iVar1 == 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
    return auStack_34[0];
  }
  if (param_1 == 1) {
    if (*(char *)(iVar1 + 0x2fb) != '\0') {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
      return 0x300f;
    }
    if (((((*(uint *)(iVar1 + 0xc) & 0x10) != 0) && (param_4 == 0)) &&
        (*(int *)(_DAT_ram_3fcb4f88 + 0x108) <= *(int *)(_DAT_ram_3fcb4f88 + 0x10c))) &&
       (0 < *(int *)(iVar1 + 0x108))) {
      _DAT_ram_3fcb3982 = _DAT_ram_3fcb3982 + 1;
      goto LAB_ram_42078182;
    }
  }
  iVar1 = FUN_ram_42031cd8();
  if ((iVar1 == 0) || (iVar1 = (*(code *)&SUB_ram_40011d24)(), iVar1 != 0)) {
    iVar1 = (*(code *)&SUB_ram_40012108)(param_2,param_3,param_5);
  }
  else {
    iVar1 = FUN_ram_42031d0a(param_2,param_3);
  }
  if (iVar1 != 0) {
    *(uint *)(*(int *)(iVar1 + 0x24) + 0x10) =
         *(uint *)(*(int *)(iVar1 + 0x24) + 0x10) & 0xfff7ffff | (param_1 & 1) << 0x13;
    FUN_ram_42078026();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
    return 0;
  }
LAB_ram_42078182:
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
  return 0x101;
}

