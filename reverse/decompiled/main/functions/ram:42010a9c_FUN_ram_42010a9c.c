
void FUN_ram_42010a9c(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  for (puVar1 = &DAT_ram_3c0fba58; puVar1 < &DAT_ram_3c0fbb00; puVar1 = puVar1 + 2) {
    if (((*(ushort *)((int)puVar1 + 6) == param_1) && ((*(ushort *)(puVar1 + 1) & 1) != 0)) &&
       (iVar2 = (*(code *)*puVar1)(), iVar2 != 0)) {
      FUN_ram_4039bf1e();
    }
  }
  return;
}

