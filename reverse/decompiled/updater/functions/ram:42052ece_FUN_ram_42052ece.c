
void FUN_ram_42052ece(void)

{
  FUN_ram_42052e2c();
  DAT_ram_3fcb67b9 = DAT_ram_3fcb67b9 + 1;
  if ((DAT_ram_3fcb67b9 & 1) != 0) {
    FUN_ram_4205282e();
    return;
  }
  return;
}

