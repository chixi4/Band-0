
void FUN_ram_403a5b26(int param_1)

{
  FUN_ram_40394254();
  if (param_1 == 0) {
    FUN_ram_4039468c(0x4000);
    FUN_ram_4039469c(0x2000);
  }
  else {
    FUN_ram_4039468c(0x2000);
    FUN_ram_4039469c(0x4000);
  }
  FUN_ram_403946b0(0x6000);
  DAT_ram_3fcb6a00 = (char)param_1;
  return;
}

