
undefined4 FUN_ram_4205eb0e(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  uVar2 = FUN_ram_4205ea48(*(undefined4 *)(param_1 + 0x10));
  *puVar1 = uVar2;
  return 0;
}

