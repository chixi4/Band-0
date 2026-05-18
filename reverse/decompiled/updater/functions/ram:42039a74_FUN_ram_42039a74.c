
void FUN_ram_42039a74(byte param_1,byte param_2)

{
  DAT_ram_3fcb3fc8 = 1;
  if (((param_1 & 0xfd) == 1) && ((param_2 & 0xfd) != 1)) {
    FUN_ram_420399f0(1);
  }
  if (((byte)(param_1 - 2) < 2) && (1 < (byte)(param_2 - 2))) {
    FUN_ram_420399f0(2);
  }
  DAT_ram_3fcb3fc8 = 0;
  return;
}

