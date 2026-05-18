
int FUN_ram_4204994a(int param_1)

{
  if ((DAT_ram_3fcb5491 < 2) && (DAT_ram_3fcb537e == '\0')) {
    if (param_1 != 0) {
      DAT_ram_3fcb5491 = 1;
      return param_1;
    }
    DAT_ram_3fcb5491 = 0;
    return 1;
  }
  return 0;
}

