
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203f960(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(short *)(param_2 + 0x26) != 0) {
    FUN_ram_4203f87a(0);
    FUN_ram_42049510(0);
  }
  FUN_ram_42033fd8(1,4,4,0x3c07bac8);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcb3fcc);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcb3fcc);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcb4f5c);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcb4f5c);
  DAT_ram_3fcb5117 = 0;
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(param_2 + 0x304);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(param_2 + 0x318);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(param_2 + 0x2cc);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(param_1 + 0x54);
  if (((DAT_ram_3fcb512d - 4 & 0xff) < 10) && ((-0x242 >> (DAT_ram_3fcb512d - 4 & 0x1f) & 1U) == 0))
  {
    if ((_DAT_ram_3fcb50ec != 0) && (*(code **)(_DAT_ram_3fcb50ec + 0x10) != (code *)0x0)) {
      (**(code **)(_DAT_ram_3fcb50ec + 0x10))();
    }
    _DAT_ram_3fcb5170 = 0;
  }
  if ((_DAT_ram_3fcb51a4 != 0) && (*(code **)(_DAT_ram_3fcb51a4 + 0x10) != (code *)0x0)) {
    (**(code **)(_DAT_ram_3fcb51a4 + 0x10))(0x3c078fac);
  }
  FUN_ram_4203666c(param_2);
  _DAT_ram_3fcb3fe8 = 2;
  if ((*(byte *)(param_2 + 10) & 2) != 0) {
    *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) & 0xfd;
    FUN_ram_4203f1e2(param_2,0xfffffff9,1);
    _DAT_ram_3fcb4eec = param_2;
  }
  FUN_ram_42033fd8(1,4,5,0x3c07f090,*(undefined1 *)(param_2 + 0x33c));
  if (*(char *)(_DAT_ram_3fcb4f84 + 0x128) != '\x06') {
    if (*(char *)(param_2 + 0x33c) != '\0') {
      *(char *)(param_2 + 0x33c) = *(char *)(param_2 + 0x33c) + -1;
      (**(code **)(_DAT_ram_3fcb50e8 + 100))();
      FUN_ram_4203e46a(param_2 + 4);
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xfffffffe;
      goto LAB_ram_4203fb16;
    }
  }
  FUN_ram_4203eaa0(param_2);
LAB_ram_4203fb16:
  _DAT_ram_3fcb4ee8 = 0;
  if ((*(char *)(_DAT_ram_3fcb4f84 + 0x128) != '\x06') || (_DAT_ram_3fcb5134 == 0)) {
    FUN_ram_42033fd8(1,4,4,0x3c07bad8,*(char *)(_DAT_ram_3fcb4f84 + 0x128),0);
    *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 0;
    thunk_FUN_ram_4204c508(0,_DAT_ram_3fcb50fc);
    if (_DAT_ram_3fcb50b8 != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      _DAT_ram_3fcb50b8 = 0;
    }
    if (_DAT_ram_3fcb50a8 != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      _DAT_ram_3fcb50a8 = 0;
    }
    if (_DAT_ram_3fcb50ac != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))();
      _DAT_ram_3fcb50ac = 0;
    }
  }
  DAT_ram_3fcdfad4 = 0;
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
  iVar2 = _DAT_ram_3fcdfdd8;
  uVar1 = _DAT_ram_3fcdfdb4;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  (**(code **)(iVar2 + 0x58))(uVar1);
  FUN_ram_4204321e();
  FUN_ram_42036888(0);
  DAT_ram_3fcb3fc9 = 0;
  FUN_ram_42033fd8(1,0xc,4,0x3c07baf0,8);
  FUN_ram_420392fa(8);
  return;
}

