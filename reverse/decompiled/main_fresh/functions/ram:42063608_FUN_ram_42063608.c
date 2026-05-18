
void FUN_ram_42063608(int param_1)

{
  int aiStack_14 [4];
  
  if ((*(int *)(param_1 + 0x3c) != 0) && (*(int *)(param_1 + 0x40) != 0)) {
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0x3c);
    aiStack_14[0] = param_1;
    FUN_ram_420635ec(param_1,3,0,0);
    FUN_ram_42063350(3,aiStack_14,4);
    thunk_FUN_ram_40390634(*(undefined4 *)(aiStack_14[0] + 0x3c));
    thunk_FUN_ram_40390634(*(undefined4 *)(aiStack_14[0] + 0x40));
    *(undefined4 *)(aiStack_14[0] + 0x3c) = 0;
    *(undefined4 *)(aiStack_14[0] + 0x40) = 0;
  }
  return;
}

