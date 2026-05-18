
void FUN_ram_4039d9fe(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4039e52e();
  if (iVar1 != 0) {
    FUN_ram_420903be();
    if (DAT_ram_3fcc4401 == '\x01') {
      if (DAT_ram_3fcc441a != '\0') {
        if (param_1 != 0) {
          if (param_2 != 0) {
            DAT_ram_3fcc4414 = DAT_ram_3fcc4401;
            FUN_ram_420b2a42();
            return;
          }
          DAT_ram_3fcc4414 = 0;
          (*(code *)&SUB_ram_40011b70)();
          (*(code *)&SUB_ram_40011b88)();
          return;
        }
        if (param_2 == 0) {
          DAT_ram_3fcc4414 = '\0';
        }
        else {
          DAT_ram_3fcc4414 = DAT_ram_3fcc4401;
        }
      }
    }
    else if (DAT_ram_3fcc4401 == '\0') {
      (*(code *)&SUB_ram_40011b84)();
      return;
    }
  }
  return;
}

