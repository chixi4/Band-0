
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4206c604(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x5c4) != _DAT_ram_3fcb6874) {
      FUN_ram_42071c72();
    }
    *(undefined4 *)(param_1 + 0x5c4) = 0;
    FUN_ram_42071c72(param_1 + 0x42c);
    FUN_ram_42071c72(param_1 + 0x5c8);
    FUN_ram_42066dba(param_1 + 0x760);
    FUN_ram_420312cc(param_1 + 0xd8);
    FUN_ram_4206f4a6(param_1 + 0x3bc);
    FUN_ram_4202e582(param_1 + 0x27c);
    FUN_ram_4206f1c8(param_1);
    return;
  }
  return;
}

