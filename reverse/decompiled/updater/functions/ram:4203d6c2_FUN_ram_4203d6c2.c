
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203d6c2(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_ram_420337c0();
  FUN_ram_42033fd8(1,4,4,0x3c07b8ec,param_2,DAT_ram_3fcb512d,DAT_ram_3fcb512e);
  if (param_2 != 0) {
    return;
  }
  thunk_EXT_FUN_ram_40011e74(0);
  thunk_EXT_FUN_ram_40011e74(1);
  thunk_EXT_FUN_ram_40011e74(4);
  thunk_EXT_FUN_ram_40011e74(5);
  FUN_ram_42049a32(0);
  if (*(int *)((*(byte *)(param_1 + 0x134) + 0x4c) * 4 + 0x3fcb4f78) != 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
    *(undefined4 *)((*(byte *)(param_1 + 0x134) + 0x4c) * 4 + 0x3fcb4f78) = 0;
  }
  if (_DAT_ram_3fcb50a8 != 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
    _DAT_ram_3fcb50a8 = 0;
  }
  if (_DAT_ram_3fcb50ac != 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
    _DAT_ram_3fcb50ac = 0;
  }
  if (_DAT_ram_3fcb50bc != 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
    _DAT_ram_3fcb50bc = 0;
  }
  if (DAT_ram_3fcb512d == '\x01') {
    if (DAT_ram_3fcb512e == '\a') {
      FUN_ram_42039492(1,param_1 + 4,0,1,&uStack_18,8,&DAT_ram_3fcb511c,5,4);
      uVar1 = 5;
      uVar2 = 1;
    }
    else {
      if (DAT_ram_3fcb512e != '\b') goto LAB_ram_4203d7d6;
      FUN_ram_42039492(5,param_1 + 4,0,1,&uStack_18,8,&DAT_ram_3fcb511c,0xd,4);
      uVar1 = 0xd;
      uVar2 = 5;
    }
    FUN_ram_42039492(uVar2,param_1 + 4,1,1,&uStack_18,8,&DAT_ram_3fcb511c,uVar1,5);
    *(undefined1 *)(param_1 + 0x135) = 4;
  }
  else {
    FUN_ram_42033fd8(1,4,4,0x3c07b918);
    if ((_DAT_ram_3fcb51a4 != 0) && (*(code **)(_DAT_ram_3fcb51a4 + 0x10) != (code *)0x0)) {
      (**(code **)(_DAT_ram_3fcb51a4 + 0x10))(param_1 + 4);
    }
    *(undefined1 *)(param_1 + 0x135) = 0xff;
    *(undefined1 *)(param_1 + 0x137) = 0xff;
    *(undefined2 *)(param_1 + 0x138) = 0xffff;
    *(undefined1 *)(param_1 + 0x13a) = 0xff;
  }
LAB_ram_4203d7d6:
  FUN_ram_420455b8();
  if ((_DAT_ram_3fcb4eec == 0) ||
     ((*(int *)(_DAT_ram_3fcb4eec + 4) == 0 && (*(short *)(_DAT_ram_3fcb4eec + 8) == 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    if (DAT_ram_3fcb4ef8 != '\0') {
      uVar2 = 0;
      uVar1 = 1;
      goto LAB_ram_4203d894;
    }
  }
  uVar2 = 1;
LAB_ram_4203d894:
  FUN_ram_4204317e(param_1,uVar1,uVar2);
  return;
}

