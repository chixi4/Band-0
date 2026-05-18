
void FUN_ram_4202c62e(int param_1,uint param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)param_2;
  if (param_2 < 0x17) {
    uVar1 = 0x17;
  }
  *(undefined2 *)(param_1 + 0xc) = uVar1;
  return;
}

