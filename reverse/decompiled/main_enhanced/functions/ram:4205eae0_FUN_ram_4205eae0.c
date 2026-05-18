
void FUN_ram_4205eae0(int param_1)

{
  undefined4 uVar1;
  code *in_a5;
  
  if (in_a5 != (code *)0x0) {
    uVar1 = (*in_a5)();
    *(undefined4 *)(param_1 + 4) = uVar1;
    FUN_ram_4205c6fa(&DAT_ram_3fcc5374);
    return;
  }
  return;
}

