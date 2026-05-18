
void FUN_ram_40396adc(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_40396aa0(0x600);
  iVar2 = FUN_ram_40396aa0(0x150);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  if (iVar1 == 0) {
    iVar2 = FUN_ram_40396acc();
  }
  *param_1 = iVar2;
  *param_2 = iVar1;
  *param_3 = 0x600;
  return;
}

