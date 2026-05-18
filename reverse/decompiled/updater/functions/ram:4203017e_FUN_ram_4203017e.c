
undefined4 FUN_ram_4203017e(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  if (2 < param_3) {
    pcVar4 = (char *)*param_2;
    *param_2 = pcVar4 + 1;
    if (*pcVar4 == '\x03') {
      uVar1 = *(ushort *)(pcVar4 + 1);
      *param_2 = pcVar4 + 3;
      puVar2 = (undefined4 *)FUN_ram_4202f8e8(uVar1 << 8 | uVar1 >> 8);
      uVar3 = 0xffffb180;
      if (puVar2 != (undefined4 *)0x0) {
        uVar3 = 0;
        *param_1 = *puVar2;
      }
      return uVar3;
    }
  }
  return 0xffffb080;
}

