
void FUN_ram_420479e0(uint param_1)

{
  if (DAT_ram_3fcb5371 != param_1) {
    FUN_ram_40392eec(5 - (uint)DAT_ram_3fcb5371,1);
    FUN_ram_40392eec(5 - param_1,0);
  }
  DAT_ram_3fcb5371 = (char)param_1;
  return;
}

