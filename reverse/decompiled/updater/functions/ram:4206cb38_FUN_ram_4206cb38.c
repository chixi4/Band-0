
void FUN_ram_4206cb38(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_ram_4206cb16();
  if (puVar1 != (undefined4 *)0x0) {
    if (param_2 == -1) {
      uVar2 = 0x8008;
    }
    else if (param_2 < 0) {
      if (param_2 == -3) {
        uVar2 = 0x101;
      }
      else {
        if (param_2 != -2) {
          return;
        }
        uVar2 = 0x8004;
      }
    }
    else {
      if (param_2 != 0) {
        return;
      }
      uVar2 = 0x8006;
    }
    *puVar1 = uVar2;
  }
  return;
}

