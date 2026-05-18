
undefined4 FUN_ram_420246d2(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 3) < 0x40) {
    FUN_ram_4039c11e((uint)*(byte *)(param_1 + 3) * 0xc + 4 + param_1);
    uVar1 = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

