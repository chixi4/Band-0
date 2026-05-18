
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420128d4(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)&SUB_ram_40010488)(param_1,0,0xf0);
  *(undefined4 *)(param_1 + 4) = _DAT_ram_3fcb814c;
  *(undefined4 *)(param_1 + 8) = _DAT_ram_3fcb8150;
  *(undefined4 *)(param_1 + 0xc) = _DAT_ram_3fcb8154;
  uVar1 = _DAT_ram_3fcb8160;
  *(undefined4 *)(param_1 + 0x28) = _DAT_ram_3fcb8170;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}

