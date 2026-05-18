
undefined4 FUN_ram_420551a2(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x14) != 1) {
      *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 0x10;
    }
    uVar1 = FUN_ram_4205504a();
    return uVar1;
  }
  return 0xfffffff0;
}

