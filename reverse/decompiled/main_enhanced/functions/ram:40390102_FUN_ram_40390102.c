
undefined8 FUN_ram_40390102(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack_a0;
  
  uStack_a0 = mepc;
  if ((mcause & 0x8000001f) < 0x80000000) {
    FUN_ram_4039042e();
  }
  else {
    FUN_ram_40390416(&uStack_a0);
  }
  mepc = uStack_a0;
  return CONCAT44(param_2,param_1);
}

