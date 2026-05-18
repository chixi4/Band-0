
void FUN_ram_42059adc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = FUN_ram_42057e98(param_1,iVar1 + 0x2c,0);
  if (iVar2 == 0) {
    if (*(char *)(iVar1 + 6) != -1) {
      *(char *)(iVar1 + 6) = *(char *)(iVar1 + 6) + '\x01';
    }
    FUN_ram_4205598a(500,0x42049b2a,param_1);
    return;
  }
  return;
}

