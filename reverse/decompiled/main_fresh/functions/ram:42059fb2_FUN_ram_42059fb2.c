
void FUN_ram_42059fb2(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 != 0) {
    bVar1 = *(byte *)(iVar2 + 5);
    if (bVar1 < 6) {
      if (2 < bVar1) {
LAB_ram_42059fd6:
        *(undefined1 *)(iVar2 + 6) = 0;
        FUN_ram_420594ec();
        return;
      }
      if (bVar1 != 0) {
LAB_ram_42059fc8:
        *(undefined1 *)(iVar2 + 6) = 0;
        FUN_ram_4205968c();
        return;
      }
    }
    else {
      if (bVar1 == 10) goto LAB_ram_42059fd6;
      if (bVar1 < 0xd) goto LAB_ram_42059fc8;
      FUN_ram_4039bf1e();
    }
  }
  return;
}

