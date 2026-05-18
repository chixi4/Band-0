
undefined4 *
FUN_ram_42051c72(uint param_1,int param_2,undefined1 param_3,undefined4 *param_4,int param_5,
                uint param_6)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xffff) + 3 & 0xfffffffc;
  if (param_2 + uVar1 <= param_6) {
    if (param_5 != 0) {
      param_5 = param_5 + uVar1;
    }
    *(undefined1 *)((int)param_4 + 0xd) = 2;
    *param_4 = 0;
    param_4[1] = param_5;
    *(short *)(param_4 + 2) = (short)param_2;
    *(short *)((int)param_4 + 10) = (short)param_2;
    *(undefined1 *)(param_4 + 3) = param_3;
    *(undefined2 *)((int)param_4 + 0xe) = 1;
    return param_4;
  }
  return (undefined4 *)0x0;
}

