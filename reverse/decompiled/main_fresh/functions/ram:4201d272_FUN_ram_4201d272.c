
void FUN_ram_4201d272(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x14;
  do {
    iVar2 = iVar1 + 1;
    FUN_ram_4201cf3c(param_1,iVar1,0x2a);
    iVar1 = iVar2;
  } while (iVar2 != 0xb5);
  return;
}

