
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204577e(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar1 = (**(code **)(_DAT_ram_3fcdfed0 + 0x56c))();
    iVar2 = (**(code **)(_DAT_ram_3fcdfed0 + 0x584))(param_2);
                    /* WARNING: Could not recover jumptable at 0x420457ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0x8c8))(param_1,iVar1 + iVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(&DAT_ram_3c0c2984,0x46,&DAT_ram_3c0f70c4,&DAT_ram_3c0c2974);
}

