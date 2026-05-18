
void FUN_ram_420397de(undefined4 param_1,int param_2)

{
  undefined1 *in_t1;
  
  if (param_2 != 0) {
    in_t1 = &SUB_ram_400107dc;
  }
                    /* WARNING: Could not recover jumptable at 0x420397e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((uint)(in_t1 + 0x428) & 0xfffffffe))();
  return;
}

