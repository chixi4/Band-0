
void FUN_ram_4205afc4(int *param_1)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_ram_42059fe8(*param_1);
  if (iVar1 == 0) {
    puVar2 = (uint *)*param_1;
    iVar1 = -6;
    if ((*puVar2 & 0xf0) == 0x10) {
      if (puVar2[1] == 0) {
        iVar1 = -0xb;
        if (puVar2[2] != 0) {
          puVar2[0xb] = (uint)param_1;
          puVar2[1] = 1;
          FUN_ram_4205a698();
          return;
        }
      }
      else {
        iVar1 = -5;
      }
    }
  }
  *(char *)(param_1 + 1) = (char)iVar1;
  thunk_FUN_ram_4205973a(param_1[9]);
  return;
}

