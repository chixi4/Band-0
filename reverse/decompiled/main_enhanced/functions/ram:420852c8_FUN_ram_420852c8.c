
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420852c8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_ram_420791ce();
  FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fcd5c,param_2,DAT_ram_3fcc41bd,DAT_ram_3fcc41be);
  if (param_2 != 0) {
    return;
  }
  thunk_EXT_FUN_ram_40011e74(0);
  thunk_EXT_FUN_ram_40011e74(1);
  thunk_EXT_FUN_ram_40011e74(4);
  thunk_EXT_FUN_ram_40011e74(5);
  FUN_ram_4209243a(0);
  if (*(int *)(&DAT_ram_3fcc4008 + (*(byte *)(param_1 + 0x134) + 0x4c) * 4) != 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
    *(undefined4 *)(&DAT_ram_3fcc4008 + (*(byte *)(param_1 + 0x134) + 0x4c) * 4) = 0;
  }
  if (_DAT_ram_3fcc4138 != 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
    _DAT_ram_3fcc4138 = 0;
  }
  if (_DAT_ram_3fcc413c != 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
    _DAT_ram_3fcc413c = 0;
  }
  if (_DAT_ram_3fcc414c != 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
    _DAT_ram_3fcc414c = 0;
  }
  if (DAT_ram_3fcc41bd == '\x01') {
    if (DAT_ram_3fcc41be == '\a') {
      FUN_ram_4207f8be(1,param_1 + 4,0,1,&uStack_18,8,&DAT_ram_3fcc41ac,5,4);
      uVar1 = 5;
      uVar2 = 1;
    }
    else {
      if (DAT_ram_3fcc41be != '\b') goto LAB_ram_420853dc;
      FUN_ram_4207f8be(5,param_1 + 4,0,1,&uStack_18,8,&DAT_ram_3fcc41ac,0xd,4);
      uVar1 = 0xd;
      uVar2 = 5;
    }
    FUN_ram_4207f8be(uVar2,param_1 + 4,1,1,&uStack_18,8,&DAT_ram_3fcc41ac,uVar1,5);
    *(undefined1 *)(param_1 + 0x135) = 4;
  }
  else {
    FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fcd88);
    if ((_DAT_ram_3fcc4234 != 0) && (*(code **)(_DAT_ram_3fcc4234 + 0x10) != (code *)0x0)) {
      (**(code **)(_DAT_ram_3fcc4234 + 0x10))(param_1 + 4);
    }
    *(undefined1 *)(param_1 + 0x135) = 0xff;
    *(undefined1 *)(param_1 + 0x137) = 0xff;
    *(undefined2 *)(param_1 + 0x138) = 0xffff;
    *(undefined1 *)(param_1 + 0x13a) = 0xff;
  }
LAB_ram_420853dc:
  FUN_ram_4208df08();
  if ((_DAT_ram_3fcc3f7c == 0) ||
     ((*(int *)(_DAT_ram_3fcc3f7c + 4) == 0 && (*(short *)(_DAT_ram_3fcc3f7c + 8) == 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    if (DAT_ram_3fcc3f88 != '\0') {
      uVar2 = 0;
      uVar1 = 1;
      goto LAB_ram_4208549a;
    }
  }
  uVar2 = 1;
LAB_ram_4208549a:
  FUN_ram_4208b6e6(param_1,uVar1,uVar2);
  return;
}

