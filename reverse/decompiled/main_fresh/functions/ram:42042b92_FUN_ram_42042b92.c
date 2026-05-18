
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42042b92(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_a3;
  uint uVar2;
  
  if (*(char *)((int)param_1 + 0x51) == '\0') {
    if (((char)param_1[0x14] == -1) && (uVar2 = (uint)(ushort)param_1[0x17], uVar2 != 0)) {
      uVar1 = 0;
      while( true ) {
        while (((int)uVar2 >> (uVar1 & 0x1f) & 1U) != 0) {
          if ((uVar1 != 4) || ((*param_1 & 0x400) == 0)) {
            (**(code **)(_DAT_ram_3fcdfecc + 0xa00))
                      (0x7021,(short)param_1[2],uVar1,param_4,0x1000,
                       *(code **)(_DAT_ram_3fcdfecc + 0xa00));
                    /* WARNING: Could not recover jumptable at 0x42042c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(_DAT_ram_3fcdfecc + 0x44c))(param_1,uVar1);
            return;
          }
          (**(code **)(_DAT_ram_3fcdfecc + 0x704))(param_1,0);
          uVar2 = (ushort)param_1[0x17] & 0xffffffef;
          *(short *)(param_1 + 0x17) = (short)uVar2;
          param_4 = extraout_a3;
          uVar1 = 5;
        }
        if (uVar1 == 0xd) break;
        uVar1 = uVar1 + 1;
      }
    }
  }
  else if ((*param_1 & 0x40) == 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x7010,(short)param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x42042c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0x4bc))(param_1);
    return;
  }
  return;
}

