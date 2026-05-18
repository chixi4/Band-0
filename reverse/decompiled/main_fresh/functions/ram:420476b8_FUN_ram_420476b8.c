
uint FUN_ram_420476b8(int param_1,undefined4 param_2,uint param_3)

{
  uint extraout_a2;
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if (param_1 == 0) {
    uVar2 = FUN_ram_42046b52();
    param_3 = extraout_a2;
  }
  uVar1 = 0;
  if (((uint)((ulonglong)uVar2 >> 0x20) < (uint)*(byte *)uVar2) && (param_3 < *(byte *)uVar2)) {
    uVar1 = FUN_ram_420468b8();
  }
  return uVar1 & 1;
}

