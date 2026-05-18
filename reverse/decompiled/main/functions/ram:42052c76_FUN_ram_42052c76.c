
void FUN_ram_42052c76(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 < 3) {
    if (param_2 == (undefined4 *)0x0) {
      uVar1 = 0xd004c008;
    }
    else {
      uVar1 = *param_2;
    }
    *(undefined4 *)(&DAT_ram_3fcc2040 + param_1 * 4) = uVar1;
  }
  return;
}

