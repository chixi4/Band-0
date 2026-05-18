
void FUN_ram_42038fd0(void)

{
  char cVar1;
  
  cVar1 = *(char *)(*(int *)(gp + -0x2b8) + 0x416);
  if (cVar1 == '\x01') {
    FUN_ram_42033fd8(1,4,4,0x3c07b254,*(int *)(gp + -0x2b8) + 8);
    DAT_ram_3fcb51c3 = cVar1;
    return;
  }
  FUN_ram_42033fd8(1,4,4,0x3c07b2a0);
  return;
}

