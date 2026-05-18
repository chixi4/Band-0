
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_403a687a(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_ram_3fcb6bd4;
  if (_DAT_ram_3fcb6bd4 == 0) {
    if (DAT_ram_3fcb6bd0 == '\0') {
      iVar2 = FUN_ram_42034c9e();
      if (iVar2 == 0) {
        iVar1 = _DAT_ram_3fcb6bd4;
      }
    }
    else {
      iVar1 = 0x3fcb6bcc;
    }
  }
  return iVar1;
}

