
int FUN_ram_420a3cde(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_420a3854();
  if (iVar1 != 0) {
    *(undefined1 *)(*(int *)(iVar1 + 8) + 0x50) = 1;
    FUN_ram_420a34bc(iVar1,0x42093990,0x42093904,0x420938a8,0x4209367c,0x42093a1c,0x42093af0,
                     0x420939ee);
    FUN_ram_420a34f2(iVar1,0x42093676);
    *(undefined4 *)(iVar1 + 0x30) = 0x420935d4;
  }
  return iVar1;
}

