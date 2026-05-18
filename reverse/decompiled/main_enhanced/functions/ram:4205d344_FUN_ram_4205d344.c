
undefined4 FUN_ram_4205d344(uint *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (uint *)0x0) && ((*param_1 & 0xf0) == 0x10)) {
    uVar1 = FUN_ram_4205d280();
    return uVar1;
  }
  return 0xfffffff0;
}

