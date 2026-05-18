
undefined4 FUN_ram_4205dcee(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  if (param_2 == 0) {
    uVar3 = FUN_ram_4039bf1e();
  }
  puVar1 = (undefined *)uVar3;
  if (puVar1 == &DAT_ram_3c0f75a4) {
    uVar2 = 0xf3;
  }
  else if (puVar1 == &DAT_ram_3c0f75a3) {
    uVar2 = 0xf2;
  }
  else {
    if (puVar1 != &DAT_ram_3c0f75a2) {
      return 0;
    }
    uVar2 = 0xf1;
  }
  *(undefined1 *)((ulonglong)uVar3 >> 0x20) = uVar2;
  return 1;
}

