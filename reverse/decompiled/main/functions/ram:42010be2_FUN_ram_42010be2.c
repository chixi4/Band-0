
void FUN_ram_42010be2(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [12];
  
  FUN_ram_403966ac();
  iVar2 = FUN_ram_42010dd2();
  iVar1 = 0;
  if (iVar2 != -1) {
    iVar1 = iVar2;
  }
  FUN_ram_40399000(iVar1);
  FUN_ram_403980f4();
  FUN_ram_42010dbc(iVar1,auStack_28,auStack_24);
  FUN_ram_42010de4(iVar1);
  return;
}

