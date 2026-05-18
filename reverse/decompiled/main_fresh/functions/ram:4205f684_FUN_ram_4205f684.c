
void FUN_ram_4205f684(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    uStack_24 = 0;
    iStack_2c = param_1;
    uStack_28 = param_3;
    FUN_ram_420b2e88(0x18ff1f,8,&iStack_2c,0xc,0);
  }
                    /* WARNING: Could not recover jumptable at 0x4205f6ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 0x28),param_2,param_3,param_4);
  return;
}

