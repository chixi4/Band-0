
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202be18(void)

{
  int *piVar1;
  int iVar2;
  
  FUN_ram_420305a0();
  (**(code **)(_DAT_ram_3fcb6a44 + 0x40))(_DAT_ram_3fcb6b8c + 0x24);
  FUN_ram_4202c538(_DAT_ram_3fcb6b8c + 0x18);
  FUN_ram_42036fca();
  FUN_ram_4202fea8();
  FUN_ram_42033748();
  (**(code **)(_DAT_ram_3fcb6a44 + 0x28))(_DAT_ram_3fcb6b8c + 0x10);
  (**(code **)(_DAT_ram_3fcb6a44 + 0x28))(_DAT_ram_3fcb6b8c + 0xc);
  (**(code **)(_DAT_ram_3fcb6a44 + 0x28))(_DAT_ram_3fcb6b8c + 8);
  FUN_ram_420368de();
  FUN_ram_4202cc00();
  FUN_ram_4203096e();
  FUN_ram_4202c83c();
  FUN_ram_4202ae6e();
  FUN_ram_42029290();
  (**(code **)(_DAT_ram_3fcb6a44 + 0x28))(_DAT_ram_3fcb6b8c + 4);
  FUN_ram_42032078();
  (**(code **)(_DAT_ram_3fcb6a44 + 0x6c))(_DAT_ram_3fcb6b8c + 0x14);
  iVar2 = _DAT_ram_3fcb6b8c;
  if (_DAT_ram_3fcb6b8c != 0) {
    piVar1 = (int *)(_DAT_ram_3fcb6b8c + 0x48);
    *(undefined4 *)(_DAT_ram_3fcb6b8c + 0x4c) = 0;
    if (*piVar1 != 0) {
      FUN_ram_403a5e1e();
      iVar2 = _DAT_ram_3fcb6b8c;
      *(undefined4 *)(_DAT_ram_3fcb6b8c + 0x48) = 0;
    }
    FUN_ram_403a5e1e(iVar2);
    _DAT_ram_3fcb6b8c = 0;
  }
  if (_DAT_ram_3fcb6b88 != 0) {
    FUN_ram_403a5e1e();
    _DAT_ram_3fcb6b88 = 0;
  }
  FUN_ram_420343c4();
  FUN_ram_420331da();
  FUN_ram_420303e4();
  FUN_ram_42036b42();
  FUN_ram_4202c3ce();
  FUN_ram_4203020e();
  FUN_ram_420260f4();
  return;
}

