
void FUN_ram_42010f5a(int param_1)

{
  undefined4 uVar1;
  
  if (0x44000 < (uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc))) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  uVar1 = (*(code *)&SUB_ram_40010338)();
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}

