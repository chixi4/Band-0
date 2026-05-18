
undefined4 FUN_ram_420a5b7e(int *param_1,uint param_2)

{
  ushort *puVar1;
  
  puVar1 = *(ushort **)(*param_1 + 0x54);
  if (puVar1 != (ushort *)0x0) {
    for (; *puVar1 != 0; puVar1 = puVar1 + 1) {
      if (*puVar1 == param_2) {
        return 0;
      }
    }
  }
  return 0xffffffff;
}

