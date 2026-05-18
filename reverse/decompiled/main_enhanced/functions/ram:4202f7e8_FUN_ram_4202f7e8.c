
int FUN_ram_4202f7e8(void)

{
  int iVar1;
  int iVar2;
  int iStack_2c;
  undefined1 auStack_28 [36];
  
  iVar1 = FUN_ram_4202b87e();
  iVar2 = 0x1e;
  if ((iVar1 != 0) && (iVar2 = FUN_ram_42026e40(auStack_28,&iStack_2c,3), iVar2 == 0)) {
    iVar2 = 5;
    if (iStack_2c != 0) {
      iVar2 = FUN_ram_4202f6f6(auStack_28);
    }
  }
  return iVar2;
}

