
undefined4 FUN_ram_42063b28(int param_1)

{
  undefined4 uVar1;
  int aiStack_14 [2];
  
  if (*(uint *)(param_1 + 0x80) < 2) {
    uVar1 = 0;
  }
  else {
    aiStack_14[0] = param_1;
    uVar1 = FUN_ram_420a34fe(*(undefined4 *)(param_1 + 0x1c));
    FUN_ram_420635ec(param_1,6,uVar1,0);
    FUN_ram_42063350(6,aiStack_14,4);
    *(undefined4 *)(aiStack_14[0] + 0x80) = 1;
    uVar1 = FUN_ram_420a34b0(*(undefined4 *)(aiStack_14[0] + 0x1c));
  }
  return uVar1;
}

