
void FUN_ram_42012378(void)

{
  int iVar1;
  undefined4 auStack_14 [3];
  
  iVar1 = FUN_ram_403972a6(1,0x3fcb9520);
  if ((iVar1 == 0x3fcb9520) && (iVar1 = FUN_ram_403972a6(4,0x3fcb94cc), iVar1 == 0x3fcb94cc)) {
    auStack_14[0] = 0xbb10c433;
    (*(code *)&SUB_ram_40010484)(auStack_14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

