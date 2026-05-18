
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_42055b1c(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (((char)param_1[2] == '\0') ||
     (bVar1 = false, (char)param_1[2] == (char)(*(char *)(_DAT_ram_3fcb5e58 + 0x3c) + '\x01'))) {
    if (param_3 == 0) {
      bVar1 = true;
      if (*param_1 != 0) {
        bVar1 = _DAT_ram_3fcb5e68 == *param_1;
      }
    }
    else {
      bVar1 = true;
      if ((*param_1 != 0) && (_DAT_ram_3fcb5e68 != 0xffffffff)) {
        return ((*param_1 ^ _DAT_ram_3fcb5e68) & *(uint *)(param_2 + 8)) == 0;
      }
    }
  }
  return bVar1;
}

