
int FUN_ram_420a3c6c(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_420a3854();
  if (iVar1 != 0) {
    *(undefined1 *)(*(int *)(iVar1 + 8) + 0x50) = 0;
    FUN_ram_420a34bc(iVar1,0x420937c0,0x42093728,0x420936ca,0x4209367c,0x42093a1c,0x42093af0,
                     0x420939ee);
    FUN_ram_420a34f2(iVar1,0x42093670);
    *(undefined4 *)(iVar1 + 0x30) = 0x420935d4;
  }
  return iVar1;
}

