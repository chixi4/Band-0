
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4208c43c(uint param_1)

{
  int iVar1;
  
  if (param_1 != 2) {
    if (param_1 < 3) {
      if (param_1 == 0) {
        FUN_ram_4207a038(1,1,3,&DAT_ram_3c10026c);
        FUN_ram_4208c088();
        if (*(code **)(_DAT_ram_3fcdfb24 + 0x27c) == (code *)0x0) {
          return 0;
        }
        (**(code **)(_DAT_ram_3fcdfb24 + 0x27c))();
        return 0;
      }
    }
    else if (param_1 != 3) {
      return 0x102;
    }
    iVar1 = FUN_ram_4208c310();
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_1 == 1) {
      if (*(code **)(_DAT_ram_3fcdfb24 + 0x27c) != (code *)0x0) {
        (**(code **)(_DAT_ram_3fcdfb24 + 0x27c))();
      }
      goto LAB_ram_4208c470;
    }
  }
  if (*(code **)(_DAT_ram_3fcdfb24 + 0x278) == (code *)0x0) {
    return 0x102;
  }
  iVar1 = (**(code **)(_DAT_ram_3fcdfb24 + 0x278))();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_1 == 2) {
    FUN_ram_4208c088();
    FUN_ram_4207a038(1,1,3,&DAT_ram_3c1002a4,DAT_ram_3fcc41c8,DAT_ram_3fcc41c9,DAT_ram_3fcc41ca,
                     DAT_ram_3fcc41cb,DAT_ram_3fcc41cc,DAT_ram_3fcc41cd);
    return 0;
  }
  if (param_1 == 3) {
    FUN_ram_4207a038(1,1,3,&DAT_ram_3c1002d4,DAT_ram_3fcc41ce,DAT_ram_3fcc41cf,DAT_ram_3fcc41d0,
                     DAT_ram_3fcc41d1,DAT_ram_3fcc41d2,DAT_ram_3fcc41d3,DAT_ram_3fcc41c8,
                     DAT_ram_3fcc41c9,DAT_ram_3fcc41ca,DAT_ram_3fcc41cb,DAT_ram_3fcc41cc,
                     DAT_ram_3fcc41cd);
    return 0;
  }
  if (param_1 != 1) {
    return 0;
  }
LAB_ram_4208c470:
  FUN_ram_4207a038(1,1,3,&DAT_ram_3c100278,DAT_ram_3fcc41ce,DAT_ram_3fcc41cf,DAT_ram_3fcc41d0,
                   DAT_ram_3fcc41d1,DAT_ram_3fcc41d2,DAT_ram_3fcc41d3);
  return 0;
}

