
void FUN_ram_4205e49e(int *param_1)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_ram_4205d02a(*param_1);
  if (iVar1 == 0) {
    puVar2 = (uint *)*param_1;
    iVar1 = -6;
    if ((*puVar2 & 0xf0) == 0x10) {
      if (puVar2[1] == 0) {
        if (puVar2[2] != 0) {
          puVar2[1] = 1;
          if (puVar2[0xb] == 0) goto LAB_ram_4205e4d8;
          do {
            puVar2 = (uint *)FUN_ram_4039bf1e();
LAB_ram_4205e4d8:
          } while (param_1[5] == 0);
          puVar2[0xb] = (uint)param_1;
          FUN_ram_4205d83e();
          return;
        }
        iVar1 = -0xb;
      }
      else {
        iVar1 = -5;
      }
    }
  }
  *(char *)(param_1 + 1) = (char)iVar1;
  FUN_ram_4205c6fa(param_1[9]);
  return;
}

