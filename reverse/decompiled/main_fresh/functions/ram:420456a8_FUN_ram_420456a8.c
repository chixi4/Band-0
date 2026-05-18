
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420456a8(int param_1,int param_2,undefined4 param_3)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(&DAT_ram_3c0c2984,0x28,&DAT_ram_3c0f708c,&DAT_ram_3c0c2974);
  }
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x420456cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0x8bc))(5,param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(&DAT_ram_3c0c2984,0x29,&DAT_ram_3c0f708c,&DAT_ram_3c0c29d0);
}

