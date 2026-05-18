
void FUN_ram_4202c330(undefined4 param_1,int param_2)

{
  undefined4 in_stack_00000000;
  undefined1 uStack00000004;
  undefined1 uStack00000005;
  undefined2 uStack0000000c;
  undefined2 uStack0000000e;
  undefined2 uStack00000010;
  undefined1 uStack00000012;
  
  (*(code *)&SUB_ram_40010488)((int)&stack0x00000000 + 1,0);
  if (*(char *)(param_2 + 1) == '\0') {
    in_stack_00000000._2_2_ = *(undefined2 *)(param_2 + 2);
    uStack00000004 = *(undefined1 *)(param_2 + 4);
    uStack00000005 = *(undefined1 *)(param_2 + 5);
    FUN_ram_4039c11e((int)&stack0x00000004 + 2,param_2 + 6);
    uStack0000000c = *(undefined2 *)(param_2 + 0xc);
    uStack0000000e = *(undefined2 *)(param_2 + 0xe);
    uStack00000010 = *(undefined2 *)(param_2 + 0x10);
    uStack00000012 = *(undefined1 *)(param_2 + 0x12);
  }
  FUN_ram_4202ebb6();
  return;
}

