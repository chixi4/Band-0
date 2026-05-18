
void FUN_ram_420b5c28(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_ram_40396928();
  iVar1 = FUN_ram_403989ea();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0);
  }
  if ((param_1 != 0) && (param_1 != iVar1)) {
    FUN_ram_420b5ae8(param_1);
    return;
  }
  uVar2 = FUN_ram_4039809e(param_1);
  iVar1 = FUN_ram_40398e0e(0x420a5b6a,&DAT_ram_3c0c2b5c,0x600,iVar1,uVar2,0,0);
  if (iVar1 != 0) {
    FUN_ram_403985f2(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

