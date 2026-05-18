
void FUN_ram_4205730e(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    return;
  }
  bVar1 = *(byte *)(iVar2 + 5);
  if (bVar1 < 6) {
    if (2 < bVar1) {
LAB_ram_42057332:
      *(undefined1 *)(iVar2 + 6) = 0;
      FUN_ram_420565c4();
      return;
    }
    if (bVar1 == 0) {
      return;
    }
  }
  else if (bVar1 == 10) goto LAB_ram_42057332;
  *(undefined1 *)(iVar2 + 6) = 0;
  FUN_ram_42056786();
  return;
}

