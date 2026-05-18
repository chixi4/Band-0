
void FUN_ram_42097946(void)

{
  int extraout_t1;
  int extraout_a2;
  int in_a4;
  undefined8 extraout_fa2;
  
  (*(code *)(in_a4 + 0x431U & 0xfffffffe))();
  *(undefined8 *)(extraout_a2 + 0x78) = extraout_fa2;
                    /* WARNING: Could not recover jumptable at 0x4209794c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(extraout_t1 + 0x742U & 0xfffffffe))();
  return;
}

