
undefined4 FUN_ram_42062410(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 & 0x80) == 0) {
    uVar1 = 0xfac01;
    if (((((((param_1 & 1) == 0) && (uVar1 = 0xfac06, (param_1 & 0x100) == 0)) &&
          (uVar1 = 0xfac02, (param_1 & 2) == 0)) &&
         ((uVar1 = 0xfac0b, -1 < (int)(param_1 << 0xf) &&
          (uVar1 = 0xfac0c, -1 < (int)(param_1 << 0xe))))) &&
        ((uVar1 = 0xfac08, (param_1 & 0x400) == 0 &&
         ((uVar1 = 0xfac18, -1 < (int)(param_1 << 5) &&
          (uVar1 = 0xfac09, -1 < (int)(param_1 << 0x14))))))) &&
       (uVar1 = 0xfac12, -1 < (int)(param_1 << 9))) {
      return 0;
    }
  }
  else {
    uVar1 = 0xfac05;
  }
  return uVar1;
}

