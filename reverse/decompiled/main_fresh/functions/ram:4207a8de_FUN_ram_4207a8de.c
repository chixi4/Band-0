
void FUN_ram_4207a8de(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_28 [8];
  
  FUN_ram_4039c11e(local_28,&DAT_ram_3c0fa7c4,0x18);
  piVar2 = local_28;
  iVar1 = 0;
  do {
    if (*piVar2 == param_1) {
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 != 6);
  return;
}

