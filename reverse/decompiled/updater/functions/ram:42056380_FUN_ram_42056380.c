
void FUN_ram_42056380(uint param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  *(undefined1 *)(param_1 + param_2) = 0xff;
  while( true ) {
    uVar1 = param_1 + 1;
    param_1 = uVar1 & 0xffff;
    if ((0x43 < param_1) && (((uVar1 & 3) == 0 || (param_1 != 0x44)))) break;
    *(undefined1 *)(param_1 + param_2) = 0;
  }
  FUN_ram_42051e98(param_3,param_1 + 0xf0 & 0xffff);
  return;
}

