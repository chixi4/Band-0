
undefined8 FUN_ram_4204dcd6(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x24) * 0x50;
  uVar1 = ((*(uint *)(param_1 + 0x28) & 0x7f) - 0x280) + uVar2;
  return CONCAT44(((uint)(uVar1 < uVar2) +
                  (int)((ulonglong)*(uint *)(param_1 + 0x24) * 0x50 >> 0x20) + -1) * 8 |
                  uVar1 >> 0x1d,uVar1 * 8);
}

