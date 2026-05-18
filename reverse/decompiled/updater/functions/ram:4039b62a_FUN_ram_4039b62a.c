
void FUN_ram_4039b62a(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4039c15a();
  if (iVar1 != 0) {
    FUN_ram_420479b6();
    if (DAT_ram_3fcb5371 == '\x01') {
      if (DAT_ram_3fcb538a != '\0') {
        if (param_1 != 0) {
          if (param_2 != 0) {
            DAT_ram_3fcb5384 = DAT_ram_3fcb5371;
            FUN_ram_4207933e();
            return;
          }
          DAT_ram_3fcb5384 = 0;
          (*(code *)&SUB_ram_40011b70)();
          (*(code *)&SUB_ram_40011b88)();
          return;
        }
        if (param_2 == 0) {
          DAT_ram_3fcb5384 = '\0';
        }
        else {
          DAT_ram_3fcb5384 = DAT_ram_3fcb5371;
        }
      }
    }
    else if (DAT_ram_3fcb5371 == '\0') {
      (*(code *)&SUB_ram_40011b84)();
      return;
    }
  }
  return;
}

