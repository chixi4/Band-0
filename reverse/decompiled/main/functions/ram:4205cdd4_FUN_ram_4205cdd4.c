
undefined4 FUN_ram_4205cdd4(int param_1)

{
  undefined4 uVar1;
  int aiStack_38 [3];
  undefined4 uStack_2c;
  
  if (param_1 != 0) {
    aiStack_38[0] = param_1;
    uStack_2c = FUN_ram_4205c954();
    uVar1 = FUN_ram_4205cd16(0x4204e094,aiStack_38);
    return uVar1;
  }
  return 0;
}

