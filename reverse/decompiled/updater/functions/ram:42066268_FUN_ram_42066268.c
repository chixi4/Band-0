
void FUN_ram_42066268(int param_1,uint param_2)

{
  if (((param_2 & 1) != 0) && ((*(uint *)(param_1 + 0x1f0) & 0x4000c00) != 0)) {
    FUN_ram_42038fd0();
  }
  if (((param_2 & 2) != 0) && ((*(uint *)(param_1 + 0x1f0) & 0x4000c00) != 0)) {
    FUN_ram_42038fd0();
    FUN_ram_4203902a();
  }
  if (((param_2 & 8) != 0) && (*(int *)(param_1 + 0x1f0) == 0x400000)) {
    FUN_ram_42039054();
    return;
  }
  return;
}

