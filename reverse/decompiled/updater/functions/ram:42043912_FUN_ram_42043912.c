
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42043912(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _DAT_ram_3fcb4f88;
  iVar1 = _DAT_ram_3fcb4f84;
  if (_DAT_ram_3fcb4f84 != 0) {
    *(undefined4 *)(_DAT_ram_3fcb4f84 + 300) = 0;
    iVar3 = FUN_ram_42044966(iVar1,1,DAT_ram_3fcb51d4);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 300) = 0;
    iVar3 = FUN_ram_42044966(iVar2,1,DAT_ram_3fcb51d2);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  _DAT_ram_3fcb4f94 = 100;
  FUN_ram_42043dfe(&DAT_ram_3fcb4f74);
  FUN_ram_420430e8(&DAT_ram_3fcb4f74);
  if ((iVar1 != 0) && (DAT_ram_3fcb51d4 == '\x03')) {
    FUN_ram_42035a5e(iVar1);
  }
  if ((iVar2 != 0) && (DAT_ram_3fcb51d2 == '\x03')) {
    FUN_ram_42035a5e(iVar2);
  }
  FUN_ram_42043810();
  FUN_ram_42044d6c(&DAT_ram_3fcb4f74);
  FUN_ram_420407f6();
  FUN_ram_42022e86();
  _DAT_ram_3fcb51d8 = 0;
  _DAT_ram_3fcb51dc = 0;
  FUN_ram_420438ca();
  FUN_ram_420438a4();
  FUN_ram_42047972();
  return 0;
}

