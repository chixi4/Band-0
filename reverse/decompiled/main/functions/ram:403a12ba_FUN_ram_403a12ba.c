
void FUN_ram_403a12ba(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  int iVar1;
  code *pcVar2;
  uint auStack_14 [3];
  
  if (param_2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  pcVar2 = *(code **)(*(int *)(param_1 + 4) + 100);
  iVar1 = (*pcVar2)(param_1,1,auStack_14,param_4,param_5,pcVar2);
  if (iVar1 == 0) {
    *param_2 = (byte)(auStack_14[0] >> 1) & 1 ^ 1;
  }
  return;
}

