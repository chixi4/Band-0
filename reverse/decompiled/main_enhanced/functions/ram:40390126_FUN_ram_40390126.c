
undefined8 FUN_ram_40390126(void)

{
  undefined4 uStack00000000;
  undefined1 *puStack00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000028;
  undefined4 uStack00000080;
  undefined4 uStack00000084;
  uint uStack00000088;
  undefined4 uStack0000008c;
  undefined4 uStack00000090;
  
  puStack00000008 = &stack0x000000a0;
  uStack00000000 = mepc;
  uStack00000080 = mstatus;
  uStack00000084 = mtvec;
  uStack00000090 = mhartid;
  uStack0000008c = mtval;
  uStack00000088 = mcause & 0x8000001f;
  if (uStack00000088 < 0x80000000) {
    FUN_ram_4039042e();
  }
  else {
    uStack00000088 = mcause & 0x1f;
    FUN_ram_40390416();
  }
  mepc = uStack00000000;
  tp = in_stack_00000010;
  return in_stack_00000028;
}

