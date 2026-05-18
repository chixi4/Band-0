
undefined4 FUN_ram_420134da(uint param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (2 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  if (param_2 == 3) {
    uVar1 = 0x4002;
    if (*(char *)(*(int *)("Make the version that feels safe first." + param_1 * 4 + 0x20) + 0x10)
        == '\0') {
      uVar1 = 2;
    }
  }
  else if (param_2 == 4) {
    *(byte *)(*(int *)("Make the version that feels safe first." + param_1 * 4 + 0x20) + 0x10) =
         (byte)(param_3 >> 0xe) & 1;
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    *puVar2 = 0x58;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

