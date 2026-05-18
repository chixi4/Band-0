
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42081ba0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == '\0') {
    if (DAT_ram_3fcc41a9 < 2) {
      return 0x3002;
    }
    FUN_ram_42073aba(1);
    uVar2 = FUN_ram_4207fec4(3);
    FUN_ram_4208c088();
    if (*(code **)(_DAT_ram_3fcdfb24 + 0x27c) != (code *)0x0) {
      (**(code **)(_DAT_ram_3fcdfb24 + 0x27c))();
    }
    (*(code *)&SUB_ram_40011d44)();
    DAT_ram_3fcc41a9 = 1;
    if (DAT_ram_3fcc41ab == '\x01') {
      FUN_ram_420925f0(2,1,0,2,0,DAT_ram_3fcc4194);
      return uVar2;
    }
    DAT_ram_3fcc41a9 = 1;
    return uVar2;
  }
  if (cVar1 == '\x01') {
    iVar3 = FUN_ram_42081312();
    if (iVar3 != 0) {
      FUN_ram_42073aba(1);
      return 0;
    }
    return 0xffffffff;
  }
  if (cVar1 != '\x02') {
    FUN_ram_4207a038(1,2,1,&DAT_ram_3c0fed84);
    return 0xffffffff;
  }
  cVar1 = **(char **)(gp + -0xb4);
  if (DAT_ram_3fcc41ab == '\x01') {
    DAT_ram_3fcc41ab = '\0';
    DAT_ram_3fcc4205 = DAT_ram_3fcc4205 & 0xfb;
    DAT_ram_3fcc4206 = DAT_ram_3fcc4206 & 0xfb;
  }
  uVar2 = 3;
  if ((cVar1 != '\0') && (uVar2 = 0, cVar1 != '\x01')) {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') goto LAB_ram_42081c80;
      FUN_ram_42081384(0);
    }
    uVar2 = 1;
  }
  FUN_ram_42081384(uVar2);
LAB_ram_42081c80:
  FUN_ram_420b3d08();
  return 0;
}

