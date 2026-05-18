
int FUN_ram_420a2ad2(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_4039c08e(1,0x798);
  if (iVar1 != 0) {
    iVar2 = FUN_ram_420a2c5e();
    *(int *)(iVar1 + 0x790) = iVar2;
    if (iVar2 != 0) {
      FUN_ram_420a7214(iVar1 + 0x428);
      *(undefined4 *)(iVar1 + 0x768) = 0xffffffff;
      return iVar1;
    }
    thunk_FUN_ram_40390634(iVar1);
  }
  return 0;
}

