
void FUN_ram_42010d24(int param_1)

{
  *(undefined4 *)(param_1 + 0x80) = mstatus;
  *(undefined4 *)(param_1 + 0x84) = mtvec;
  *(undefined4 *)(param_1 + 0x88) = 0xdeadc0de;
  *(undefined4 *)(param_1 + 0x8c) = 0xdeadc0de;
  *(undefined4 *)(param_1 + 0x90) = mhartid;
  return;
}

